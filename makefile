# Makefile v1.0.0

# Compiler options
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wno-unused-parameter

# Directories
SRC_DIR = src
OUT_DIR = out

# Libraries
LIBS = -lSDL2   # Modify this line to include other required libraries

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OUT_DIR)/%.o, $(SRCS))

# Target
TARGET = $(OUT_DIR)/MTA_Player

# Build rules
.PHONY: all clean release

# Default target
all: $(TARGET)

# Linking object files to generate the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET) $(LIBS)

# Compiling individual source files into object files
$(OUT_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean the project by removing object files and the executable
clean:
	rm -f $(OBJS) $(TARGET)

# Release rule
release: all
	strip $(TARGET)
	7z a release.7z $(TARGET) $(OBJS)
