SRC_DIR = ../../../src/patterns/singleton
BIN_DIR = ../../../bin/patterns/singleton

all: chkbindir main

main: 
	g++ $(SRC_DIR)/*.cc -o $(BIN_DIR)/main

chkbindir :
	@if test ! -d $(BIN_DIR) ; \ 
	then \
		mkdir $(BIN_DIR) ; \
	fi
