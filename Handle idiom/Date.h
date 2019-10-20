#pragma once
#include"pch.h"
struct Date {
	Date() :year("2000"), month("9"), week("1") {};
	Date(string year,string month,string week):year(year),month(month),week(week){}
	string year;
	string month;
	string week;
};