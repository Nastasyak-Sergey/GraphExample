
TARGET = main

# Flags passed to the C++ compiler.
CXXFLAGS += -g -std=gnu++11 -Wall -Wextra -pthread

SOURCE_DIR = project
SOURCES = main.cpp graph.cpp
LIB_DIR = project

OBJS=$(subst .cpp,.o,$(SOURCES))

# Setup static library name.
KERNEL_NAME = $(shell uname -s)
MACHINE_NAME = $(shell uname -m)

all : $(TARGET)

$(TARGET):
	@echo "Building $@ for $(KERNEL_NAME) $(MACHINE_NAME)"
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(SOURCE_DIR)/main.cpp $(SOURCE_DIR)/graph.cpp -o $@
	cat test_set|./main

.PHONY: clean

clean :
	rm -fr $(TARGET)



