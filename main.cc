#include "headers.h"


// -----------------------------------------------------------------------------
int main(int nargs, char **args)
{
	srand(1);

	int n = atoi(args[1]);
	int d = atoi(args[2]);
	string data_set    = args[3];
	string output_path = args[4];

	printf("--------------------------------------------------------------\n");
	printf("n    = %d\n", n);
	printf("d    = %d\n", d);
	printf("data = %s\n", data_set.c_str());
	printf("\n");
	
	de_duplicate(n, d, data_set, output_path);

	return 0;
}
