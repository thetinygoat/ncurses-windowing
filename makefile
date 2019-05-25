CXX = g++

main: main.cpp
	$(CXX) main.cpp -lncurses -o ncurses

dimension: dimension-recognition.cpp
	$(CXX) dimension-recognition.cpp -lncurses -o dimension