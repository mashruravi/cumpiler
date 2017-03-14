CC = gcc
FILES = main.c lexer.c
OUT_EXE = cumpiler

$(OUT_EXE): $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core

rebuild: clean $(OUT_EXE)
