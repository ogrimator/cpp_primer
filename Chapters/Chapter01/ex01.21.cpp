#include <iostream>
#include "../../headers/Sales_item.h"

int main(){
	Sales_item item1, item2;

	std::cout << "Enter two transactions with a same ISBN" << std::endl;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;

	return 0;
}