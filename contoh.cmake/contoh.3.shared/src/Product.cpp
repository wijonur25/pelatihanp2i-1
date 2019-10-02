#include <iostream>

#include "shared/Product.h"

int Product::dotProduct(int vectorA[], int vectorB[],int size)
{
	int product = 0;
    	for (int i=0;i<size;i++) {
		product = product + vectorA[i] * vectorB[i];	
	}
	return product;
}
