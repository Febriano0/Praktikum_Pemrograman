pertemuan6: pertemuan6.o
	g++ pertemuan6.o -o pertemuan6
pertemuan6.o: pertemuan6.cpp
	g++ -c pertemuan6.cpp -o pertemuan6.o

run: pertemuan6
	./pertemuan6

test_pertemuan6: test_pertemuan6.o
	g++ test_pertemuan6.o -o test_pertemuan6
test_pertemuan6.o: test_pertemuan6.cpp
	g++ -c test_pertemuan6.cpp -o test_pertemuan6.o

test: test_pertemuan6
	./test_pertemuan6

clean:
	rm -f pertemuan6 pertemuan6.o
	rm -f test_pertemuan6 test_pertemuan6.o