add.o: 
	gcc ./src/add.c -o ./target/add.o -c

test: add.o
	gcc ./src/cunit_tests.c -o ./target/cunit_tests.o -c
	gcc ./target/cunit_tests.o ./target/add.o -o ./target/cunit_target.o  -lcunit
	./target/cunit_target.o

check: add.o
	gcc ./src/test.c -o ./target/test.o -c
	gcc ./target/test.o ./target/add.o -o ./target/target.o 
	./target/target.o