cmake_minimum_required(VERSION 3.22)
project(design_patterns VERSION 1.0.0 LANGUAGES CXX)

set(PATTERNS
    proxy
    singleton)

foreach(DIRECTORY IN ITEMS ${PATTERNS})
    file(GLOB PROJECT_SOURCES "${DIRECTORY}/*.cpp")
    message(STATUS "Pattern '${DIRECTORY}':")

    foreach(FILE IN ITEMS ${PROJECT_SOURCES})
        get_filename_component(FILE_NAME ${FILE} NAME)

        set(PROJECT_NAME ${DIRECTORY})
        message(STATUS "  ${DIRECTORY}/${FILE_NAME} is going to be built")

        add_executable(${PROJECT_NAME} "${DIRECTORY}/${FILE_NAME}")
    endforeach()
endforeach()
