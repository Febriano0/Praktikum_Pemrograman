pertemuan8: pertemuan8.o
	g++ pertemuan8.o -o pertemuan8
pertemuan8.o: pertemuan8.cpp
	g++ -c pertemuan8.cpp -o pertemuan8.o

run: pertemuan8
	./pertemuan8

test_pertemuan8: test_pertemuan8.o
	g++ test_pertemuan8.o -o test_pertemuan8
test_pertemuan8.o: test_pertemuan8.cpp
	g++ -c test_pertemuan8.cpp -o test_pertemuan8.o

test: test_pertemuan8
	./test_pertemuan8

clean:
	rm -f pertemuan8 pertemuan8.o
	rm -f test_pertemuan8 test_pertemuan8.o