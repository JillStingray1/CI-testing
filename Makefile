add.o: 
	gcc ./src/add.c -o ./target/add.o

check: add.o
	gcc test.c -o test.o
	gcc test.o add.o -target.o