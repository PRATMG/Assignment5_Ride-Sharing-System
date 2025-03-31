# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude

# Directories
SRC_DIR = src
INCLUDE_DIR = include

# Files
SRC_FILES = $(SRC_DIR)/main.cpp
TARGET = RideSharingSystem

# Build target
all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC_FILES)

# Clean build artifacts
clean:
	rm -f $(TARGET)

# Phony targets (not files)
.PHONY: all clean
