#pragma once
#include <iostream>

size_t str_length(const char* str) // Retuns string's length excluding EOF character
{
	size_t res = 0, i = 0;
	char c = ' ';

	while(c != '\0')
	{
		c = str[i++];
		res++;
	}

	return res - 1;
}

char* str_create_copy(const char* source, size_t* additional_length_var = nullptr) // Returns pointer on new string with copied characters
{																					// Also, if user passed additional size_t pointer, the len of string will be writter there
	size_t cur_len = str_length(source);
	char* new_str = new char[cur_len];

	if (additional_length_var != nullptr) 
		*additional_length_var = cur_len;

	new_str = new char[cur_len];

	for (size_t i = 0; i < cur_len; i++)
	{
		new_str[i] = source[i];
	}

	new_str[cur_len] = '\0';

	return new_str;
}