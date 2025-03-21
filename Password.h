#pragma once
class Password
{
	char* password { nullptr };
	size_t length{ 0 };

public:

	Password(); // Default constructor
	Password(const char*); // Transformation constructor, receiving a string with a password

	void set_password(const char*); // Password setter, receiving a string with a password

	const char* get_password() const; // Password getter
	size_t get_length() const; // Length getter

};

