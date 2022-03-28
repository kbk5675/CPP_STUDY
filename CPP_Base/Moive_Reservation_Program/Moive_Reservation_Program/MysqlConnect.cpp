#include "MysqlConnect.h"
#include <iostream>
using namespace std;


MysqlConnect::MysqlConnect()
{
	conn = mysql_init(NULL); //������ �ʱ�ȭ ���ش�.

	// DB�� �������ִ� �Լ�.
	conn = mysql_real_connect(conn, "localhost", "root", "0000", "userinfo_db", 3306, NULL, 0);
	// �ѱ۹��� �ȱ����� ���ִ� �Լ�
	mysql_set_character_set(conn, "euckr");

	if (conn) 
		puts("Successful connection to userinfo_db\n");
	else
		puts("info Connection to database has failed!");
	
	
}

void MysqlConnect::ShowUserInfo()
{
	if (conn) {
		string query = "SELECT * FROM info"; //�����ݷ��� ������ ������ �ۼ�
		const char* q = query.c_str();
		qstate = mysql_query(conn, q); // ���� ��û �� �������� �޾ƿ���

		if (!qstate)
		{
			res = mysql_store_result(conn); // ������ ������� res�� �ִ´�.

			// ��� ����ϱ�
			while (row = mysql_fetch_row(res))
			{
				cout << "ID: " << row[0];
				cout << "\tPW: " << row[1];
				cout << "\t�̸�: " << row[2];
				cout << "\t����: " << row[3];
				cout << "\t�̸���: " << row[4];
				cout << "\t��ȭ��ȣ: " << row[5] << endl;
			}

			mysql_free_result(res);
		}
		else
		{
			cout << "info Query failed: " << mysql_error(conn) << endl;
		}
	}
	else
	{
		puts("info Connection to database has failed!");
	}
}


