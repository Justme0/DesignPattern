SRC_DIR = ../../src/patterns/singleton
BIN_DIR = ../../bin/patterns/singleton

all: chkbindir main

main: 
	g++ $(SRC_DIR)/main.cc $(SRC_DIR)/Singleton.cc -o $(BIN_DIR)/main

chkbindir :
	@if test ! -d $(OBJ_DIR) ; \
	then \
		mkdir $(OBJ_DIR) ; \
	fi
