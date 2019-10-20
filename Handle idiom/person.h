#pragma once
#include"pch.h"
#include"fwd.h"

class Person {
public:
	Person(const Person& p);
	Person(const string name,const Date& date,Address& adr);
	string getName();
	Date* getDate();
	Address* getAddress();
private:
	std::shared_ptr<PersonImpl> Impl;
};