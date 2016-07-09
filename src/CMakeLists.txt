#add_library (CallMeLib c_test.cpp)
#add_library (CallerLib homework.cpp)
add_executable (CallMe c_test.cpp)
add_executable (Caller homework.cpp)

#set(CMAKE_CXX_FLAGS "-pthread -std=c++11")
#add_definitions(${CMAKE_CXX_FLAGS})

#CMAKE_CXX_FLAGS="-std=c++11 -pthread"

add_definitions ( -std=c++11 -pthread -lprotobuf)
