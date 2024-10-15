pertemuan5: pertemuan5.o
	g++ pertemuan5.o -o pertemuan5
pertemuan5.o: pertemuan5.cpp
	g++ -c pertemuan5.cpp -o pertemuan5.o
run: pertemuan5
	./pertemuan5
test_pertemuan5: test_pertemuan5.o
	g++ test_pertemuan5.o -o test_pertemuan5
test_pertemuan5.o: test_pertemuan5.cpp
	g++ -c test_pertemuan5.cpp -o test_pertemuan5.o
test: test_pertemuan5
	./test_pertemuan5
clean:
	rm -f pertemuan5.o pertemuan5
	rm -f test_pertemuan5.o test_pertemuan5