#pragma once
#include"fwd.h"
#include"pch.h"
#include"person.h"

class StudentImpl {
public:
	StudentImpl(int num, Person& base);
	tuple<Date*, Address*> printInfo() {
		cout << num << endl;
		cout << baseInfo.getName() << endl;
		return make_tuple(baseInfo.getDate(), baseInfo.getAddress());
	}
private:
	Person baseInfo;
	int num;
};