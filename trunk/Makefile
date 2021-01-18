all:
        gcc  --pedantic -g src/*.c -o bin/gauss 

test: all
        echo "Test 1 poprawne dane 3x3:"
        bin/gauss dane/A1 dane/b1
        echo "Test 2 poprawne dane 2x2:"
        bin/gauss dane/A2 dane/b2
        echo "Test 3 poprawne dane 3x3(a11 = 0):"
        bin/gauss dane/A3 dane/b3
        echo "Test 4 poprawne dane 3x3(macierz osobliwa):"
        bin/gauss dane/A4 dane/b4
        echo "Test 5 poprawne dane 4x3(niepoprawny rozmiar):"
        bin/gauss dane/A5 dane/b5
