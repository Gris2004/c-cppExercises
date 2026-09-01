#Compiladores
CXX := clang++
CC  := clang

#Flags
CXXFLAGS := -Wall -Wextra -std=c++17
CCFLAGS  := -Wall -Wextra -std=c17

BUILD_DIR := build

#programs
PROGRAMS := calculator

.PHONY: all clean rebuild $(PROGRAMS)

#Compile all programs
all: $(PROGRAMS)

#===c++===
calculator:
	@mkdir -p $(BUILD_DIR)/calculator
	$(CXX) $(CXXFLAGS) calculator/*.cpp -o $(BUILD_DIR)/calculadora

#cleaning
clean: rm -rf $(BUILD_DIR)
rebuild: clean all
