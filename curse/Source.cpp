#include "Electromagnet.h"

int main()
{
	setlocale(LC_ALL, "rus");
	string inFileName, outFileName;
	cout << "Введите название файла со входними данными: ";
	cin >> inFileName;
	cout << "Введите название файла куда записать результат: ";
	cin >> outFileName;
	Object_find* elmagn1 = new Electromagnet();
	elmagn1->input(inFileName);
	cout << "Был создан обьект  electromagnet1 через пустой конструктор и данные из файла" << std::endl;
	elmagn1->output(outFileName);
	Object_find* elmagn2(elmagn1);
	std::cout << "Был создан обьект  electromagnet2, который явзяляется копией electromagnet1 используя конструктор копирования" << std::endl;
	elmagn2->output(outFileName);
	std::cout << "\nРезультат сравнение двух обьектов" << std::endl;
	cout << (elmagn1 == elmagn2 ? "Обьекты равны" : elmagn1 > elmagn2 ? "Первый больше" : "Второй больше") << endl;
	Object_find* elmagn3 = new Electromagnet(15, 0.1 , 3000, 0.3);
	std::cout << "\nСоздали electromagnet3 используя конструктор инициализации" << std::endl;
	elmagn3->output(outFileName);
	std::cout << "\nРезультат сравнение двух обьектов electromagnet1 и electromagnet3" << std::endl;
	cout << (elmagn1 == elmagn3 ? "Обьекты равны" : elmagn1 > elmagn3 ? "Первый больше" : "Второй больше") << endl;

	cout << "Все результаты записанные в файл" << outFileName <<endl;
	system("pause");
	return 0;
}
