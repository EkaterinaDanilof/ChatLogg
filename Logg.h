#pragma once
#include <iostream>
#include <fstream>
#include <mutex>
#include <string>
using namespace std;

class Logg
{
private:
	fstream _fs;
	string _fileName; //имя создаваемого файла
	mutex _m;
	bool _status = false; // статус работы программы
	string _from; // от кого
	string _to; // кому
	string _messag; // текст сообщения
public:
	Logg(const string& fileName);
	~Logg();

	bool setLog(const string& from, const string& to, const string& messag); // записать строку в файл
	void getLog(); // считать строку из файл
	const string getFileName() const; // получить имя созданного файла
};
