# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET_RUN = bubble_sort
TARGET_TEST = bubble_sort_test
SRC_RUN = main.cpp
SRC_TEST = test_main.cpp

# Default target: compile both programs
all: $(TARGET_RUN) $(TARGET_TEST)

# Compile the main code for user input
$(TARGET_RUN): $(SRC_RUN)
	$(CXX) $(CXXFLAGS) -o $(TARGET_RUN) $(SRC_RUN)

# Compile the test code with predefined values
$(TARGET_TEST): $(SRC_TEST)
	$(CXX) $(CXXFLAGS) -o $(TARGET_TEST) $(SRC_TEST)

# Run the main program (requires user input)
run: $(TARGET_RUN)
	./$(TARGET_RUN)

# Run the test program (predefined values)
test: $(TARGET_TEST)
	./$(TARGET_TEST)

# Clean up the compiled files
clean:
	rm -f $(TARGET_RUN) $(TARGET_TEST)

# Phony targets to avoid conflicts
.PHONY: all clean run test
