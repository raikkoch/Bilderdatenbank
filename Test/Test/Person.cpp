#include "stdafx.h"
#include "Person.h"


Person::Person()
{
}


Person::~Person()
{
}

void Person::setName(std::string name)
{
	this -> name = name;
}

void Person::setVorname(std::string vorname)
{
	this -> vorname = vorname;
}

void Person::setAlter(int alter)
{
	this -> alter = alter;
}

std::string Person::getName(void)
{
	return name;
}

std::string Person::getVorname(void)
{
	return vorname;
}

int Person::getAlter(void)
{
	return alter;
}
