# De_Duplicate: De-Duplicate the Same Objects in Datasets

## Introduction

This package provides an algorithm ```de_duplicate``` to deduplicate the datasets where there are multiple exactly same data objects in it. Here we implement perfect hashing (a two-level universal hashing) for de-duplication. Now this package suppports two types of data: integer and real values.

## Compilation

The package requires at least ```g++ with c++11``` support. To download and compile the code, type:

```bash
$ git clone https://github.com/HuangQiang/De_Duplicate.git
$ cd De_Duplicate
$ g++ -std=c++11 -w -O3 -o dedup de_duplicate.cc 
```

## Run Example

We provide a script ```run.sh``` to deduplicate datasets. A quick example of ```OptDigits.data``` is shown as follows:

```bash
./dedup 3823 64 OptDigits.data OptDigits
```

where `3823` is the `cardinality` of OptDigits.data and ``64`` is ``dimensionality`` of OptDigits.data.