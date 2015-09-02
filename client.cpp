#include <assert.h>
#include <unistd.h>
#include <netdb.h>
#include <stdio.h>

extern "C" int add(int,int);

int main(int argc, char const *argv[])
{
	printf("add=%d\n", add(20,37));
	return 0;	
}

