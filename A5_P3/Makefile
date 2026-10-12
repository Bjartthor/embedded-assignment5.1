INC = include/decrement.h include/increment.h include/shared.h # header files
OBJ = build/main.o build/increment.o build/decrement.o # object files

# link the object files into the program
cppthreads: $(OBJ)
	g++ -o cppthreads $(OBJ) -l pthread

# compile each .cpp into its own .o file
build/%.o: src/%.cpp $(INC)
	mkdir -p build
	g++ -Wall -I include -c $< -o $@

# remove built files
clean:
	rm -rf build cppthreads posix