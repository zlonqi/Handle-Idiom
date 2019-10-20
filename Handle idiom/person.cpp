#include"person.h"
#include"PersonImpl.h"
#include"pch.h"

Person::Person(const Person& p):Impl(p.Impl) {
}
Person::Person(const string name, const Date& date, Address& adr):Impl(new PersonImpl(name,date,adr)) {
}

string Person::getName() {
	return Impl->getName();
}

Date* Person::getDate() {
	return Impl->getDate();
}

Address* Person::getAddress() {
	return  Impl->getAddress();
}