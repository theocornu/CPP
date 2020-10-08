#SRC=main.cpp obj.cpp
SRC=$(wildcard *.cpp)  
EXE=prog

CXXFLAGS+=-Wall -Wextra -MMD -g -O2 -fdiagnostics-color=auto
LDFLAGS= #-lSDL

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

profile/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)
