#include "Person.h"

//Constructors

Person::Person(){
}

Person::Person(std::string name, std::string email){
	name_ = name;
	email_ = email;
}


Person::~Person(){
}

//Getters And Setters

std::string Person::GetPersonName() const {
	return name_;
}
void Person::SetPersonName(std::string name) {
	name_ = name;
}
std::string Person::GetPersonEmail() const {
	return email_;
}
void Person::SetPersonEmail(std::string email) {
	email_ = email;
}

//Methods

std::string Person::ToString() {
	std::string message;
	message = name_ + ", " + email_;
	return message;
}
