#Compiler - UNIX: cc Windows: cl
CC = cc

#C compiler command-line options - UNIX: -c -o Windows: /c
CFLAGS = -c -o

#Linker command-line options - UNIX: -o Windows: /Fe
LDFLAGS = -o

#List of object files - UNIX: .o Windows: .obj
OBJ = main.o functions.o

#List of header functions
STD_HEADERS = functions.h

#Created executable - UNIX: remove .exe Windows: .exe
EXE = game



# $@ = name of file to be made
$(EXE) : $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) $@
	
	
main.obj : main.cpp $(STD_HEADERS)


functions.obj : functions.cpp $(STD_HEADERS)


# $< = name of related file
.cpp.obj :
.cpp.obj :
	$(CC) $< $(CFLAGS)
	

	
#Command-line delete command - UNIX: rm Windows: del
DELETE = rm
	
clean:
	$(DELETE) $(OBJ)
	$(DELETE) $(EXE)
	
# $* = shared prefix of of target and dependent files
# $? = names of the changed dependents
