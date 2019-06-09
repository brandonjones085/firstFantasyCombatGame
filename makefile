CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -pedantic-errors
CXXFLAGS += -Wall
LDFLAGS = -lboost_date_time
OBJS = main.o validateMenu.o opponentMenu.o Medusa.o HarryPotter.o Game.o Character.o blueMen.o Barbarian.o attackMenu.o Vampire.o 
SRCS = main.cpp validateMenu.cpp opponentMenu.cpp Medusa.cpp HarryPotter.cpp Game.cpp Character.cpp blueMen.cpp Barbarian.cpp attackMenu.cpp Vampire.cpp
HEADERS = validateMenu.hpp opponentMenu.hpp Medusa.hpp HarryPotter.hpp Game.hpp Character.hpp blueMen.hpp Barbarian.hpp attackMenu.hpp Vampire.hpp


main: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o main

${OBJS}:${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

.PHONY: clean 

clean:
	-rm ${OBJS} main
