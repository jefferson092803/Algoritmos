
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Geeks-for-Geeks";

	
	char* token = strtok(str, " - ");

		printf(" % s\n", token);
		token = strtok(NULL, " - ");
        printf(" % s\n", token);
	return 0;
}
