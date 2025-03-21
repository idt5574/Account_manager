#include "Password.h"

#include <iostream>
#include "UsefulFunctions.h"

Password::Password() // Default constructor 
{
	puts("New password created: <without initialisation> [length = 0]");
}

Password::Password(const char* password) // Transformation contructor
{
	this->password = str_create_copy(password, &length); 

	printf("New password created: %s [length = %u]\n", this->password, length);
}

void Password::set_password(const char* new_password)
{
	length = strlen(new_password);

	if (password != nullptr)
		delete[] password;

	this->password = str_create_copy(new_password, &length);

	printf("New password setted: %s [length = %u]\n", password, length);
}

const char* Password::get_password() const
{
	return password;
}

size_t Password::get_length() const
{
	return length;
}