#include<iostream>
#include<cstring>
using namespace std;

struct Books {
	char title[50];
	char auther[50];
	char subject[100];
	int id;
};
void PrintBook(struct Books Book);

void PrintBook(struct Books Book) {
	cout << "title:" << Book.title << endl;
	cout << "auther:" << Book.auther << endl;
	cout << "subject:" << Book.subject << endl;
	cout << "id:" << Book.id << endl;
}

int main() {
	
	Books Book1;
	

	strcpy_s(Book1.title, "C++");
	strcpy_s(Book1.auther, "Runoob");
	strcpy_s(Book1.subject, "prommgream");
	Book1.id = 123;

	PrintBook(Book1);
	return 0;
}