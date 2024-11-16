CXX = g++

CXXFLAGS = -std=c++11 -Wall

SOURCES = lab9_welton.cpp Student.cpp Course.cpp

OBJECTS = $(SOURCES:.CPP=.O)

EXECUTABLE = lab9_welton

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJECTS) $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)