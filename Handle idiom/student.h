#pragma once
#include"fwd.h"
#include"pch.h"
#include"person.h"
#include"StudentImpl.h"
class Student {
public:
	Student(int num,Person& person);
	tuple<Date*, Address*> printInfo() {
		return Impl->printInfo();
	}
private:
	std::shared_ptr<StudentImpl> Impl;
};