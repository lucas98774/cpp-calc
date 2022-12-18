CPP = g++
.PHONY: clean

build: app.cpp calculations.cpp
	$(CPP) app.cpp calculations.cpp -o calc.exe

clean:
	rm calc.exe