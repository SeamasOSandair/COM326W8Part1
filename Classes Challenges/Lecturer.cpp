#include "Lecturer.h"
#include <sstream>

//Constructors

Lecturer::Lecturer(){
}

Lecturer::Lecturer(std::string staffID, std::string subjectArea, std::vector<Module> modules) : staffID_{ staffID }, subjectArea_{ subjectArea }, modules_{ modules } {

}

Lecturer::~Lecturer(){
}

//Getters And Setters

std::string Lecturer::GetID() const {
	return staffID_;
}
void Lecturer::SetID(std::string id) {
	staffID_ = id;
}
std::string Lecturer::GetArea() const {
	return subjectArea_;
}
void Lecturer::SetSubjectArea(std::string subjectArea) {
	subjectArea_ = subjectArea;
}
std::vector<Module> Lecturer::GetModules() const {
	return modules_;
}
void Lecturer::SetModules(std::vector<Module> modules) {
	modules_ = modules;
}

std::string Lecturer::ToString() {
	std::stringstream hint;
	for (int i = 0; i < modules_.size; i++) {
		std::string stemp;
		Module temp = modules_[i];
		hint << stemp;
		temp = hint.str();
	}
	std::string message;
	message = Person::ToString() + ", " + subjectArea_ + ", " + modules_;
}


