all: dylib 
	g++ -o client client.cpp libgocode.so 

dylib: *.go
	go build -buildmode=c-shared -o libgocode.so *.go

clean:
	rm -rf client client.o libgocode.so libgocode.h