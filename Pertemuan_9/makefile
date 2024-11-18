pertemuan9: pertemuan9.o
	g++ pertemuan9.o -o pertemuan9
pertemuan9.o: pertemuan9.cpp
	g++ -c pertemuan9.cpp -o pertemuan9.o

run: pertemuan9
	./pertemuan9

test_pertemuan9: test_pertemuan9.o
	g++ test_pertemuan9.o -o test_pertemuan9
test_pertemuan9.o: test_pertemuan9.cpp
	g++ -c test_pertemuan9.cpp -o test_pertemuan9.o

test: test_pertemuan9
	./test_pertemuan9

clean:
	rm -f pertemuan9 pertemuan9.o
	rm -f test_pertemuan9 test_pertemuan9.o