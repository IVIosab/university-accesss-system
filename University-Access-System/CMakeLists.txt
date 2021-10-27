cmake_minimum_required(VERSION 3.17)
project(University_Access_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(University_Access_System main.cpp Admin.cpp Admin.h Cabinet.cpp Cabinet.h ClassRoom.cpp ClassRoom.h ConferenceRoom.cpp ConferenceRoom.h Director.cpp Director.h DirectorCabinet.cpp DirectorCabinet.h Guest.cpp Guest.h LabEmployee.cpp LabEmployee.h LectureHall.cpp LectureHall.h Professor.cpp Professor.h RoomType.cpp RoomType.h Student.cpp Student.h UserType.cpp UserType.h)