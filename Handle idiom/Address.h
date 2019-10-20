#pragma once
#include"pch.h"
struct Address {
	Address():Nation("USA"){}
	Address(string adr):Nation(adr){}
	string Nation;
};