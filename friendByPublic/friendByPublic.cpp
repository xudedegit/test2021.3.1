#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//全局函数做友元案例
using namespace std;

class Building
{
	friend void test01(Building& building);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BeddingRoom = "卧室";
	}
public:
	string m_SittingRoom;
private:
	string m_BeddingRoom;
};

void test01(Building& building)
{
	cout << "您要访问的是 : " << (building).m_SittingRoom << endl;
	cout << "您要访问的是 : " << (building).m_BeddingRoom << endl;

}
int main()
{
	Building b1;
	test01(b1);
	system("pause");
	return 0;


}