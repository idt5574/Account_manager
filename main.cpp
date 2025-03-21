#include <iostream>

#include "Password.h"

int main()
{
	Password psw_1;
	Password psw_2 = "Kot1kva%im";

	psw_1.set_password("$uP3rS1gm0");

	std::cout << psw_2.get_password() << ' ' << psw_2.get_length() << std::endl;

	return 0;
}

