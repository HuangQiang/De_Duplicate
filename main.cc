#include "headers.h"


// -----------------------------------------------------------------------------
int main(int nargs, char **args)
{
	srand(1);

	int    n           = atoi(args[1]);
	int    d           = atoi(args[2]);
	int    type        = atoi(args[3]);
	string data_set    = args[4];
	string output_path = args[5];

	char path[200];
	strcpy(path, output_path.c_str());
	create_dir(path);

	printf("--------------------------------------------------------------\n");
	printf("n    = %d\n", n);
	printf("d    = %d\n", d);
	printf("type = %s\n", type == 0 ? "integer" : "real value");
	printf("data = %s\n", data_set.c_str());
	printf("\n");
	
	de_duplicate(n, d, type, data_set, output_path);

	return 0;
}
