SET(3RDPARTY_ROOT ${PROJECT_SOURCE_DIR}/3rdparty)
SET(3RDPARTY_DIR ${PROJECT_SOURCE_DIR}/3rdparty/target/${TARGET_OS}_${TARGET_ARCH})
MESSAGE(STATUS "3RDPARTY_DIR: ${3RDPARTY_DIR}")

MACRO(LOAD_SPDLOG)
    ADD_DEFINITIONS(-DSPDLOG_USE_STD_FORMAT)
    FIND_PACKAGE(spdlog REQUIRED)
ENDMACRO()


MACRO(LOAD_GFLAGS)
    # SET(GFLAGS_HOME ${3RDPARTY_DIR}/gflags)
    # LIST(APPEND CMAKE_PREFIX_PATH ${GFLAGS_HOME}/lib/cmake)
    # SET(GFLAGS_LIB_DIR ${GFLAGS_HOME}/lib)
    FIND_PACKAGE(gflags REQUIRED)
ENDMACRO()

MACRO(LOAD_GTEST)
    FIND_PACKAGE(GTest REQUIRED)
ENDMACRO()

MACRO(LOAD_LOGURU)
    FIND_PACKAGE(loguru REQUIRED)
ENDMACRO()

MACRO(LOAD_HTTPLIB)
    FIND_PACKAGE(httplib REQUIRED)
ENDMACRO()

MACRO(LOAD_RAPIDJSON)
    FIND_PACKAGE(RapidJSON REQUIRED)
ENDMACRO()

MACRO(LOAD_OATPP)
    FIND_PACKAGE(oatpp REQUIRED)
    FIND_PACKAGE(oatpp-sqlite REQUIRED)
    FIND_PACKAGE(SQLite3 REQUIRED)
ENDMACRO()

MACRO(LOAD_NLOHMANN)
    FIND_PACKAGE(nlohmann_json REQUIRED)
ENDMACRO()
