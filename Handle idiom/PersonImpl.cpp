#include"PersonImpl.h"
#include"pch.h"

PersonImpl::PersonImpl(const PersonImpl& p) {
	name = p.name;
	date = p.date;
	adr = p.adr;
}

PersonImpl::PersonImpl(const string& name, const Date& date, Address& adr):name(name),date(date),adr(adr){
}

string PersonImpl::getName() {
	return this->name;
}

Date* PersonImpl::getDate() {
	return &this->date;
}

Address* PersonImpl::getAddress() {
	return  &this->adr;
}
