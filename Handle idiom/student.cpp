#include"student.h"
#include"pch.h"
#include"StudentImpl.h"
#include<tuple>

Student::Student(int num, Person& person):Impl(new StudentImpl(num,person)){
}

