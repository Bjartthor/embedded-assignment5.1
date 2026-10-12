SRC = src/main.cpp src/increment.cpp src/decrement.cpp # source files for program
INC = include/decrement.h include/increment.h include/shared.h # header files for program

posix: $(SRC) $(INC)
	g++ -Wall -I include -o posix $(SRC) -l pthread

# g++ complier, -Wall turns on all warnings, -I include makes compiler look for header files in the include folder, -l pthread adds the posix thread library 
# remove built files
clean:
	rm -f posix