#include <iostream>
#include <string>
using namespace std;
/**
* �����ࣺStudent
* ���ݳ�Ա��m_strName
* �޲ι��캯����Student()
* �вι��캯����Student(string _name)
* �������캯����Student(const Student& stu)
* ����������~Student()
* ���ݳ�Ա������setName(string _name)��getName()
*/
class student
{
public:
	student(){ m_strName = " "; }
	student(string _name){ m_strName = _name; }
	student(const student& stu){};
	~student(){};
	void setName(string _name){ m_strName = _name; }
	string getName(){ return m_strName; }
private:
	string m_strName;
};
int main(void)
{
	// ͨ��new��ʽʵ��������*stu
	student *stu = new student();
	stu->setName("FYR");
	// ��ӡ��������ݳ�Ա
	cout << stu->getName() << endl;
	delete stu;
	stu = NULL;
	return 0;
}