#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>

using namespace std;
// ��Ա��������Ԫ����
class Building;
class GoodGay
{

public:
	GoodGay();
	Building* building;
	void visit1();
	void visit2();
};
class Building
{
	friend void GoodGay::visit1();
	//friend void GoodGay::visit2();
public:
	Building();
public:
	string m_Sittingroom;
private:
	string m_Bedroom;
};
Building::Building()
{
	this->m_Sittingroom = "����";
	this->m_Bedroom = "����";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit1()      //visit1��Ա�������Է����������˽�г�Ա
{
	cout << "visit1���ڷ��ʵ��ǣ�" << building->m_Sittingroom << endl;
	cout << "visit1���ڷ��ʵ��ǣ�" << building->m_Bedroom << endl;
}
void GoodGay::visit2()      //visit2��Ա���������Է����������˽�г�Ա
{

	cout << "visit2���ڷ��ʵ��ǣ�" << building->m_Sittingroom << endl;
	//cout << "visit2���ڷ��ʵ��ǣ�" << building->m_Bedroom << endl;
}
void test01()
{
	GoodGay g1;
	g1.visit1();
	g1.visit2();

}
int main()
{

	test01();
	system("pause");
	return 0;

}