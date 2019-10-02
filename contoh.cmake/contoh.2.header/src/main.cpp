#include <iostream>
#include "Product.h"

int main(int argc, char *argv[])
{
    	int vectA[] = { 3, -5, 4 }; 
    	int vectB[] = { 2,  6, 5 }; 
    	Product p;    
     	// dotProduct function call 
     	std::cout << "Dot product: "; 
        std::cout << p.dotProduct(vectA, vectB, 3) << std::endl; 
    	return 0;
}
