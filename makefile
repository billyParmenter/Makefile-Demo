#Compiler - UNIX: cc Windows: cl
CC = cl

#C compiler command-line options - UNIX: -c -o Windows: /c
CFLAGS = /c

#Linker command-line options - UNIX: -o Windows: /Fe
LDFLAGS = /Fe

#List of object files - UNIX: .o Windows: .obj
OBJ = main.obj functions.obj

#List of header functions
STD_HEADERS = functions.h

#Created executable - UNIX: remove .exe Windows: .exe
EXE = game.exe



# $@ = name of file to be made
$(EXE) : $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS)$@
	
	
main.obj : main.c $(STD_HEADERS)


functions.obj : functions.c $(STD_HEADERS)


# $< = name of related file
.c.obj :
	$(CC) $< $(CFLAGS)
	

	
#Command-line delete command - UNIX: rm Windows: del
DELETE = del
	
clean:
	$(DELETE) $(OBJ)
	$(DELETE) $(EXE)
	
# $* = shared prefix of of target and dependent files
# $? = names of the changed dependents
