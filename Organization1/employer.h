#pragma once
#include<iostream>
#include<string>
using namespace std;
class employer abstract
{
	string name;
	int age;
	int experience;

public:
	employer(string name, int age, int ex)
	{
		this->experience = ex;
		this->name = name;
		this->age = age;
	}
	void setName(string name) { this->name = name; }
	void setAge(int string) { this->age = age; }
	int getAge()const { return age; }
	string getName()const { return name; }
	int getEx()const { return experience; }
	void setEx(int ex) { this->experience = ex; }
	virtual double getCoeff()const = 0;
	virtual void info()const
	{
		cout << "Name: " << getName() << ", age: " << getAge() << endl << "Experience: " << this->experience << " years" << endl;
	}
};

