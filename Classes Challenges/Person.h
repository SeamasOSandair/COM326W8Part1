#pragma once
#include <string>


class Person{
protected:
	std::string name_;
	std::string email_;
public:
	Person();
	Person(std::string name, std::string email);
	~Person();

	std::string GetPersonName() const;
	void SetPersonName(std::string name);
	std::string GetPersonEmail() const;
	void SetPersonEmail(std::string email);
	virtual std::string ToString();
};

