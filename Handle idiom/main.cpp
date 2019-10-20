#include"pch.h"
#include"person.h"
#include"Date.h"
#include"Address.h"
#include"student.h"
#include<tuple>

int main(int argc, char** argv) {
	string name = "zlonqi";
	Date birthDay("1996", "11", "3");
	Address adr("China");
	Person person(name, birthDay, adr );
	Student studt(001, person);
	Date* date = nullptr;
	Address* ad = nullptr;
	std::tie(date,ad)=studt.printInfo();
	cout << (*date).year << "\t" << (*date).month << endl;
	cout << (*ad).Nation << endl;
	system("pause");
	return 0;
}