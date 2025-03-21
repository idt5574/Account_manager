#pragma once
class Password
{
	char* password { nullptr };
	size_t length{ 0 };

public:

	Password();
	Password(const char*);

	void set_password(const char*);

	const char* get_password() const;
	size_t get_length() const;

};

