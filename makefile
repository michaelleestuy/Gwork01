run:
	gcc pixel.c -o test.out
	rm -f basic.ppm
	./test.out
	convert basic.ppm basic.png
