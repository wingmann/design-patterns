cmake_minimum_required(VERSION 3.22)
project(design_patterns VERSION 1.0.0 LANGUAGES CXX)

set(PATTERNS proxy)

foreach(_dir IN ITEMS ${PATTERNS})
    file(GLOB _files "${_dir}/*.cpp")
    message(STATUS "Pattern '${_dir}':")

    foreach(_file IN ITEMS ${_files})
        get_filename_component(_file_name ${_file} NAME)

        set(_project_name ${_file_name})
        message(STATUS "  ${_dir}/${_file_name} is going to be built")

        add_executable(${_project_name} "${_dir}/${_file_name}")
    endforeach()
endforeach()
