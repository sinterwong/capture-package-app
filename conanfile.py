from conan import ConanFile


class BasicLearnConan(ConanFile):
    name = "capture-package-app"
    version = "v1.0.0"
    url = "https://github.com/sinterwong/capture-package-app"
    description = "A self-made C++ learning framework for easily learning basic knowledge and the usage of various libraries."
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps", "CMakeToolchain"

    options = {"shared": [True, False], "fPIC": [True, False]}
    default_options = {"shared": False, "fPIC": True}

    def config_options(self):
        if self.settings.os == "Windows":
            del self.options.fPIC

    def configure(self):
        self.settings.compiler.cppstd = "20"

        if self.settings.os == "Windows" and self.settings.compiler == "msvc":
            self.settings.compiler.runtime = "dynamic"
        else:
            self.settings.compiler.libcxx = "libstdc++11"

        if self.options.shared:
            del self.options.fPIC

        self.options["spdlog"].use_std_fmt = True
        self.options["gflags"].nothreads = True

        # Set build_type to Release for all dependencies
        for req in self.requires.values():
            req.settings.build_type = "Release"

    def requirements(self):
        self.requires("gtest/1.15.0")
        self.requires("gflags/2.2.2")
        self.requires("loguru/cci.20230406")
        self.requires("nlohmann_json/3.11.3")
        self.requires("rapidxml/1.13")

        self.requires("oatpp-sqlite/1.3.0")

    def layout(self):
        self.folders.build = "build"
        self.folders.generators = "build/generators"

    def package_info(self):
        self.cpp_info.set_property("cmake_build_modules", [
                                   f"{self.cpp.build.bindirs[0]}/conan_toolchain.cmake"])
