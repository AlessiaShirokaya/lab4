// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <regex>
#include <string>
using namespace std;

class Book
{
public:
	string ganr;

	Book(string name = "qwer")//Конструкт, с принимаемой переменной и ее знаечением по умолчанию
		: ganr(name)
	{
	}

	string getGanr()
		const {return ganr;}//Метод получения значения 

};

class Nazvanie : public Book
{
public:
	string title;
	int count;

	Nazvanie(string s1 = "ert", int k = 12, string ganr = "qwer")
		: title(s1), count(k), Book(ganr)
	{
		cout << " Конструктр работает" << endl;
	}
	void getNazvanie() const { cout << "Наименование книги: " << title << endl << "Жанр: " <<  ganr << endl << "Количество страниц: " <<  count << endl; }
};



class Author : public Book
{
public:
	string name;
	string secondName;
	string Otch;

	Author(string s1 = "", string s2 = "", string s3 = "")
		: name(s1), secondName(s3), Otch(s2)
	{
		cout << " Конструктр работает" << endl;
	}
	void getAuthor() const { cout << "Имя: " <<  name << endl << "Отчество: " <<  Otch << endl << "Фамилия: " << secondName << endl; }
};

class Istoria : public Book
{
public:
	string strana;
	string gorod;
	int god;

	Istoria(string s1 = "", string s2 = "", int s3 = 12)
		: strana(s1), gorod(s2), god(s3)
	{
		cout << " Конструктр работает" << endl;
	}
	void getIstoria() const { cout << "Страна производства: " <<  strana << endl << "Город: " << gorod << endl << "Год издания: " <<  god << endl; }
};
int main()
{
	system("chcp 1251");
	system("cls");
	string a, b, r, t;
	int c = 0, v = 0;
	cout << "Введите наименование книги:" << endl;
	getline(cin, a);
	cout << "Введите жанр книги:" << endl;
	getline(cin, b);
	cout << "Введите количество страниц книги:" << endl;
	regex integers(R"(\d+)");
	char input[80];
	do
	{
		memset(input, 0, 80);//Выделяем динамически память для строки
		cin >> input;
		if (regex_match(input, input + strlen(input), integers))//Условие на соответствие регулярному выражения // возвращает длину строки // формальный язык поиска и осуществления манимуляций с подстракими в тексте
		{
			c = atoi(input);//atoi - Преобразуем строку в integer 
			break;
		}
		else
		{
			cout << "Ошибка! Введите число!";
		}
	} while (1);
	cout << "Введите страну издания:" << endl;
	cin >> r;
	cout << "Введите город издания:" << endl;
	cin >> t;
	cout << "Введите год издания:" << endl;
	regex integers1(R"(\d+)");
	char input1[80];
	do
	{
		memset(input1, 0, 80);//Выделяем динамически память для строки
		cin >> input1;
		if (regex_match(input1, input1 + strlen(input1), integers))//Условие на соответствие регулярному выражения
		{
			v = atoi(input1);//atoi - Преобразуем строку в integer 
			break;
		}
		else
		{
			cout << "Ошибка! Введите число!";
		}
	} while (1);
	//cin >> v;
	Istoria f2(r, t, v);
	Nazvanie fi(a, c, b);//Создаем экземпляр объекта Nazvanie и заносим данные через конструктор(метод инициализации)
	Author Uspenskiy("Александр", "Сергеевич", "Пушкин");
	fi.getNazvanie();//Запрашиваем метод getNazvanie 
	Uspenskiy.getAuthor();
	f2.getIstoria();
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
