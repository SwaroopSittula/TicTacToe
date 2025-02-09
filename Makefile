all:
	g++ src/*.cpp -o tic_tac_toe

run: all
	./tic_tac_toe

clean:
	rm -f tic_tac_toe