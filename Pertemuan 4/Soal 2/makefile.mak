soal2 : soal_2.o
		g++ -o soal2 soal_2.o

soal_2.o : soal_2.cpp
		g++ -c soal_2.cpp

clean: rm -f soal2 soal_2.o