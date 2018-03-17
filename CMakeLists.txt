cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)

project("UsesGtest")
set(EXE runner)

IF (WIN32)
    set(GMOCK_INC_PATH C:/Users/Iain/GitHub/googletest/googlemock/include)
    set(GMOCK_LIB_PATH C:/Users/Iain/GitHub/googletest/build/googlemock)
    set(GTEST_INC_PATH C:/Users/Iain/GitHub/googletest/googletest/include)
    set(GTEST_LIB_PATH C:/Users/Iain/GitHub/googletest/build/googlemock/gtest)
ELSEIF (APPLE)
    set(GMOCK_LIB_NAME gmock)
    set(GMOCK_INC_PATH /Users/iainhemstock/GitHub/googletest/googlemock/include)
    set(GMOCK_LIB_PATH /Users/iainhemstock/GitHub/googletest/build/googlemock)
    set(GTEST_LIB_NAME gtest)
    set(GTEST_INC_PATH /Users/iainhemstock/GitHub/googletest/googletest/include)
    set(GTEST_LIB_PATH /Users/iainhemstock/GitHub/googletest/build/googlemock/gtest)
ENDIF()

include_directories(
    inc
    ${GMOCK_INC_PATH}
    ${GTEST_INC_PATH}
)

find_library(
    GMOCK_LIB
    NAMES ${GMOCK_LIB_NAME}
    PATHS ${GMOCK_LIB_PATH}
)

find_library(
    GTEST_LIB
    NAMES ${GTEST_LIB_NAME}
    PATHS ${GTEST_LIB_PATH}
)

include(sources.cmake)
add_executable(${EXE} ${SOURCES})
target_link_libraries(${EXE} ${GMOCK_LIB} ${GTEST_LIB})
