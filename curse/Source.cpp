#include "Electromagnet.h"

int main()
{
	setlocale(LC_ALL, "rus");
	string inFileName, outFileName;
	cout << "������� �������� ����� �� �������� �������: ";
	cin >> inFileName;
	cout << "������� �������� ����� ���� �������� ���������: ";
	cin >> outFileName;
	Object_find* elmagn1 = new Electromagnet();
	elmagn1->input(inFileName);
	cout << "��� ������ ������  electromagnet1 ����� ������ ����������� � ������ �� �����" << std::endl;
	elmagn1->output(outFileName);
	Object_find* elmagn2(elmagn1);
	std::cout << "��� ������ ������  electromagnet2, ������� ���������� ������ electromagnet1 ��������� ����������� �����������" << std::endl;
	elmagn2->output(outFileName);
	std::cout << "\n��������� ��������� ���� ��������" << std::endl;
	cout << (elmagn1 == elmagn2 ? "������� �����" : elmagn1 > elmagn2 ? "������ ������" : "������ ������") << endl;
	Object_find* elmagn3 = new Electromagnet(15, 0.1 , 3000, 0.3);
	std::cout << "\n������� electromagnet3 ��������� ����������� �������������" << std::endl;
	elmagn3->output(outFileName);
	std::cout << "\n��������� ��������� ���� �������� electromagnet1 � electromagnet3" << std::endl;
	cout << (elmagn1 == elmagn3 ? "������� �����" : elmagn1 > elmagn3 ? "������ ������" : "������ ������") << endl;

	cout << "��� ���������� ���������� � ����" << outFileName <<endl;
	system("pause");
	return 0;
}
