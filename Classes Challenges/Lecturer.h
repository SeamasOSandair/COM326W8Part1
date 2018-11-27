#pragma once
#include "Person.h"
#include "Module.h"
#include <vector>

class Lecturer : protected Person {
protected:
	std::string staffID_;
	std::string subjectArea_;
	std::vector<Module> modules_;
public:
	Lecturer();
	Lecturer(std::string staffID, std::string subjectArea, std::vector<Module> modules);
	~Lecturer();

	std::string GetID() const;
	void SetID(std::string id);
	std::string GetArea() const;
	void SetSubjectArea(std::string subjectArea);
	std::vector<Module> GetModules() const;
	void SetModules(std::vector<Module> modules);

    std::string ToString();
};

