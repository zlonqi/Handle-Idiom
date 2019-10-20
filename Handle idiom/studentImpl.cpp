#include"StudentImpl.h"
#include"pch.h"
#include<tuple>

StudentImpl::StudentImpl(int num, Person& base) :baseInfo(base), num(num) {
}
