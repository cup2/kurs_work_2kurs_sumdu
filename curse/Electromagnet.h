#pragma once
#include "Object_find.h"

class Electromagnet : public Object_find
{
public:
	Electromagnet() {}
	Electromagnet(float i, float w, float s, float l);
	Electromagnet(const Electromagnet& right);
	void input(string S) override;
	void output(string S) override;

	friend bool operator <= (const Electromagnet& left, const Electromagnet& right);
	friend bool operator > (const Electromagnet& left, const Electromagnet& right);
	friend bool operator < (const Electromagnet& left, const Electromagnet& right);
	friend bool operator >= (const Electromagnet& left, const Electromagnet& right);
	friend bool operator == (const Electromagnet& left, const Electromagnet& right);
	friend bool operator != (const Electromagnet& left, const Electromagnet& right);
private:
	void findParameter() override;
	const float  pi = 3.1415926;
	float w, s, l, i;

};
