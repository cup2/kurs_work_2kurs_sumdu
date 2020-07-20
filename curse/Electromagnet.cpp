#include "Electromagnet.h"

Electromagnet::Electromagnet(float s, float l, float w, float i)
{
	this->i = i;
	this->w = w;
	this->s = s;
	this->l = l;
};

Electromagnet::Electromagnet(const Electromagnet& right)
{
	this->i = right.i;
	this->w = right.w;
	this->s = right.s;
	this->l = right.l;
}

void Electromagnet::findParameter() 
{
	obcParameter = ((10e-5) * pow(0.4 * pi * i * w, 2) * s) / 8 * pi * l * l;
};

void Electromagnet::input(string S)
{
	ifstream fin(S);
	if (!fin.is_open())
	{
		cerr << "‘айл не может быть открытым" << endl;
		system("pause");
		exit(1);
	}
	fin >> s >> l >> w >> i;
}

void Electromagnet::output(string S)
{
	ofstream fout(S, ios_base::app);
	if (!fout.is_open())
	{
		cerr << "‘айл не может быть открытым";
		system("pause");
		exit(1);
	}
	findParameter();
	fout << "\n ¬ходные данные:\n s = " << s << "\n l = " << l << "\n w = " << w << "\n i = " << i << endl;
	cout << "\n ¬ходные данные:\n s = " << s << "\n l = " << l << "\n w = " << w << "\n i = " << i << endl;	
	fout << " –езультат: " << obcParameter << endl;
	cout << " –езультат: " << obcParameter << endl;
	fout.close();
}



bool operator != (const Electromagnet& left, const Electromagnet& right)
{
	return left.obcParameter != right.obcParameter;
};

bool operator < (const Electromagnet& left, const Electromagnet& right)
{
	return left.obcParameter < right.obcParameter;
};


bool operator > (const Electromagnet& left, const Electromagnet& right)
{
	return left.obcParameter > right.obcParameter;
};

bool operator <= (const Electromagnet& left, const Electromagnet& right)
{
	return left.obcParameter <= right.obcParameter;
};


bool operator >= (const Electromagnet& left, const Electromagnet& right)
{
	return left.obcParameter >= right.obcParameter;
};

bool operator == (const Electromagnet& left, const Electromagnet& right)
{
	return left.obcParameter == right.obcParameter;
};