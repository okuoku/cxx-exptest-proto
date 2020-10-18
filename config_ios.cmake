execute_process(
    COMMAND
    ${CMAKE_COMMAND}
    -G Xcode
    -DCMAKE_SYSTEM_NAME=iOS
    ${CMAKE_CURRENT_LIST_DIR})

