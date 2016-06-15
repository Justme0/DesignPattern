SRC_DIR = ../../../../src/patterns/adapter/ClassAdapter
BIN_DIR = ../../../../bin/patterns/adapter/ClassAdapter

all: chkbindir main

main: 
	g++ $(SRC_DIR)/*.cc -std=c++11 -o $(BIN_DIR)/main

chkbindir :
	@if test ! -d $(BIN_DIR) ; \
	then \
		mkdir -p $(BIN_DIR) ; \
	fi
