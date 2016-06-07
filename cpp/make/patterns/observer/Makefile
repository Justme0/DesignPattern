SRC_DIR = ../../../src/patterns/observer
BIN_DIR = ../../../bin/patterns/observer

all: chkbindir main

main: 
	g++ $(SRC_DIR)/*.cc -std=c++11 -o $(BIN_DIR)/main

chkbindir :
	@if test ! -d $(BIN_DIR) ; \
	then \
		mkdir $(BIN_DIR) ; \
	fi
