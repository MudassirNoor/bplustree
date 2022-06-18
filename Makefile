GCC = g++
version = c++11
DEPS = BPlusTree.h BPTreeNode.h Node.h
OBJ = main.o BPlusTree.o BPTreeNode.o

%.o: %.c $(DEPS)
	$(GCC) -c -o $@ $<

bplustree: $(OBJ)
	$(GCC) -std=$(version) -o $@ $^

clean:
	rm *.o bplustree

