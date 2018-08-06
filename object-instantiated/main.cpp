#include <iostream>
#include <string>
using namespace std;
/**
* 定义类：Student
* 数据成员：m_strName
* 无参构造函数：Student()
* 有参构造函数：Student(string _name)
* 拷贝构造函数：Student(const Student& stu)
* 析构函数：~Student()
* 数据成员函数：setName(string _name)、getName()
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
	// 通过new方式实例化对象*stu
	student *stu = new student();
	stu->setName("FYR");
	// 打印对象的数据成员
	cout << stu->getName() << endl;
	delete stu;
	stu = NULL;
	return 0;
}