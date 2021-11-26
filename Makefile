CFLAGS=-Wall	-g

# Folders
BIN=bin
OBJ=$(BIN)/

# Files
FILE=prueba.c
EXECUTABLE_NAME=$(FILE)

build: create_directories	create_executable
	@echo	"Build successful!"

create_executable:		
	@$(CC)	-c	$(FILE)	-o	$(BIN)/$*.o
	@echo	"Created executable."

create_directories:
	@mkdir	-p	$(OBJ)

clean:
	@rm	-r	-f	$(BIN)
