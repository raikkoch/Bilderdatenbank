#pragma once
#include <string>
class Person
{
private:
	std::string name, vorname;
	int alter;
public:
	Person();
	~Person();
	void setName(std::string name);
	void setVorname(std::string vorname);
	void setAlter(int alter);
	std::string getName(void);
	std::string getVorname(void);
	int getAlter(void);
};

