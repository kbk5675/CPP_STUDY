#include <iostream>
using namespace std;
#include "SignUp.h"


void SignUp::SetInput(string name, int age, 
	string email, string phone, string id, string pw)
{
	_age = age;
	_id = id;
	_pw = pw;
	_name = name;
	_email = email;
	_phone = phone;
}

void SignUp::ShowInput()
{
	cout << "\n-- �Է��Ͻ� ���� --" << endl;
	cout << "ID : " << _id << "\nPW : " << _pw 
		<< "\n�̸� : " << _name << "\n���� : " 
		<< _age << "\n�̸����ּ� : " << _email
		<< "\n��ȭ��ȣ : " << _phone << endl;

	cout << "\n\nȸ�������� �Ϸ�Ǿ����ϴ�.\n\n" << endl;
}
