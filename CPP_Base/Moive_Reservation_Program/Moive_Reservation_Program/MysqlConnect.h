#pragma once
#include <mysql.h>



class MysqlConnect
{
public:
	MysqlConnect();
	void ShowUserInfo();

public:
	int qstate; // ������û �� ���(����, ����)
	MYSQL* conn; // MySQL ������ ���� ����ü
	MYSQL_ROW row; // ���������� ����� ���� ���� ������ ��� ����ü
	MYSQL_RES* res; // ���������� ����� ��� ����ü������
};

