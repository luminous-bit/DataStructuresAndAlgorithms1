CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++17
LDFLAGS = -pthread -lgtest -lgmock
OPEN = open

OS := $(shell uname -s) 
ifeq ($(OS), Linux)
	OPEN = xdg-open
	LDFLAGS = -pthread -lgtest -lgmock -lpthread
	FLAGS = -Wall -Werror -Wextra -std=c++17 -fPIC -fprofile-arcs -ftest-coverage -lstdc++fs
endif

TEST_TARGET = test_runner

FUNC_FILES = $(wildcard ./enhanced_sorting/src/*.cpp)
TEST_FILES = $(wildcard ./tests/*.cpp)

all: clean project_enhanced_sorting test

project_enhanced_sorting: clean
	$(CC) $(CFLAGS) -c $(FUNC_FILES)
	ar -rcs project_enhanced_sorting.a *.o
	ranlib project_enhanced_sorting.a
	
test: project_enhanced_sorting
	$(CC) -g $(FUNC_FILES) $(TEST_FILES) $(LDFLAGS) -o $(TEST_TARGET)
	rm -rf *.o
	./$(TEST_TARGET)

gcov_report: project_enhanced_sorting
	$(CC) --coverage $(CFLAGS) $(TEST_FILES) $(TESTFLAGS) $(FUNC_FILES) -o $(TEST_TARGET)
	./$(TEST_TARGET)
	lcov -t "test_coverage" -o test_coverage.info -c -d .
	genhtml -o report test_coverage.info
	rm -rf *.gcda *.gcno test report/test_coverage.info
	
clean:
	rm -rf *.o *.a *.gcda *.txt *.gcno *.out *.info report $(TARGET)
