#include "headers.h"

// -----------------------------------------------------------------------------
int read_data(						// read data set from disk
	int    n,							// cardinality
	int    d,							// dimensionality
	string fname,						// file name of data set
	int    &min,						// min value of data set
	int    &max,						// max value of data set
	vector<vector<int> > &data)			// data objects (return)
{
	FILE *fp = fopen(fname.c_str(), "r");
	if (!fp) {
		printf("Could not open %s.\n", fname.c_str());
		return 1;
	}

	min = MAXINT;
	max = MININT;

	int i   = 0;
	int tmp = -1;
	while (!feof(fp) && i < n) {
		fscanf(fp, "%d", &tmp);
		for (int j = 0; j < d; ++j) {
			fscanf(fp, " %d", &tmp);
			data[i][j] = tmp;

			if (tmp < min) min = tmp;
			if (tmp > max) max = tmp;
		}
		fscanf(fp, "\n");
		++i;
	}
	assert(feof(fp) && i == n);
	fclose(fp);

	return 0;
}

// -----------------------------------------------------------------------------
u32 uniform_u32(					// generate uniform unsigned r.v.
	u32 min,							// min value
	u32 max)							// max value
{
	u32 r = 0;
	if (RAND_MAX >= max - min) {
		r = min + (u32) floor((max-min+1.0f) * rand() / (RAND_MAX+1.0f));
	} 
	else {
		r = min + (u32) floor((max-min+1.0f) * 
			((u64) rand() * ((u64) RAND_MAX+1) + (u64) rand()) / 
			((u64) RAND_MAX * ((u64) RAND_MAX+1) + (u64) RAND_MAX + 1.0f));
	}
	assert(r >= min && r <= max);
	
	return r;
}