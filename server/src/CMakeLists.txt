add_subdirectory(communication)
add_subdirectory(device)
add_subdirectory(ipc/grpc)

add_library(opengloves_server STATIC opengloves_server.cpp)

target_link_libraries(opengloves_server PUBLIC opengloves_server-includes)
target_link_libraries(opengloves_server PRIVATE communication_managers communication-includes device_discoverers)