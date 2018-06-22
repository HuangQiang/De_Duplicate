#ifndef __UTIL_H
#define __UTIL_H

#include <vector>
using namespace std;

// -------------------------------------------------------------------------
int create_dir(						// create directory
	char *path);						// input path

// -----------------------------------------------------------------------------
int read_data(						// read data set from disk
	int    n,							// cardinality
	int    d,							// dimensionality
	int    type,						// data type (int or float)
	string fname,						// file name of data set
	int    &min,						// min value of data set
	int    &max,						// max value of data set
	vector<vector<int> > &data);		// data objects (return)

// -----------------------------------------------------------------------------
u32 uniform_u32(					// generate uniform unsigned r.v.
	u32 min,							// min value
	u32 max);							// max value

#endif // __UTIL_H