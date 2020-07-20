#pragma once
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <locale>
using namespace std;
class Object_find
{
protected:
	float obcParameter;
	virtual void findParameter() = 0;
public:
	virtual void input(string) = 0;
	virtual void output(string) = 0;
};