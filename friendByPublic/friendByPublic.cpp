#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//ȫ�ֺ�������Ԫ����
using namespace std;

class Building
{
	friend void test01(Building& building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BeddingRoom = "����";
	}
public:
	string m_SittingRoom;
private:
	string m_BeddingRoom;
};

void test01(Building& building)
{
	cout << "��Ҫ���ʵ��� : " << (building).m_SittingRoom << endl;
	cout << "��Ҫ���ʵ��� : " << (building).m_BeddingRoom << endl;

}
int main()
{
	Building b1;
	test01(b1);
	system("pause");
	return 0;


}