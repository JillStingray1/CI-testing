add.o: 
	gcc ./src/add.c -o ./target/add.o -c

check: add.o
	gcc ./src/test.c -o ./target/test.o -c
	gcc ./target/test.o ./target/add.o -o ./target/target.o 
	./target/target.o