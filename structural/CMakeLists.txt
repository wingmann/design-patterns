set(CREATIONAL_PATTERNS
    facade
    proxy)

foreach(DIRECTORY IN ITEMS ${CREATIONAL_PATTERNS})
    file(GLOB PROJECT_SOURCES "${DIRECTORY}/*.cpp")
    message(STATUS "Pattern '${DIRECTORY}':")

    foreach(FILE IN ITEMS ${PROJECT_SOURCES})
        get_filename_component(FILE_NAME ${FILE} NAME)

        set(PROJECT_NAME ${DIRECTORY})
        message(STATUS "  ${DIRECTORY}/${FILE_NAME} is going to be built")

        add_executable(${PROJECT_NAME} "${DIRECTORY}/${FILE_NAME}")
    endforeach()
endforeach()