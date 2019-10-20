#pragma once
#include"pch.h"
#include "Date.h"
#include "Address.h"
#include"person.h"

class PersonImpl {
public:
	PersonImpl(const PersonImpl& p);
	PersonImpl(const string& name,const Date& date, Address& adr);
	string getName();
	Date* getDate();
	Address* getAddress();
private:
	string name;
	Date date;
	Address adr;
};