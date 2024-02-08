#pragma once
#include <iostream>
#include <fstream>
#include "Functions.cpp"
using namespace std;

int numExist(int *arr[], int num);

int numMod(int *arr[], int index, int old);

int* numAdd(int *arr[], int num);

int* numReplace(int *arr[], int num, bool remove);
