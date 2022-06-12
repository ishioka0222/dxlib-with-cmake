add_executable(main "main.cpp")

target_include_directories(main PRIVATE ${DXLIB_DIR})
target_link_directories(main PRIVATE ${DXLIB_DIR})
add_dependencies(main DxLibDownload)
