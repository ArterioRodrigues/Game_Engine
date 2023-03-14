
add_executable(S23_Game src/main.cpp)

include_directories(../ARC/include)

target_link_libraries(S23_Game ARC)

message("MAKE FILE FOR S23_GAME")