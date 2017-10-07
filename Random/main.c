#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    srand(time(0));
	int r = rand() % 100;
    printf("%d",r);
	return 0;
}
