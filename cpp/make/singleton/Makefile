SRC_DIR = ../../src/pattens/singleton
BIN_DIR = ../../bin/pattens/singleton

all: chkbindir main

main: 
	g++ $(SRC_DIR)/main.cc $(SRC_DIR)/Singleton.cc -o $(BIN_DIR)/main

chkbindir :
	@if test ! -d $(OBJ_DIR) ; \
	then \
		mkdir $(OBJ_DIR) ; \
	fi
