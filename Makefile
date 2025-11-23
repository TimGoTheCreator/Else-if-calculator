CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = main
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
    $(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clang:
    clang++ $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
    ./$(TARGET)

clean:
    rm -f $(TARGET)
