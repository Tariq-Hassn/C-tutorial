#include <iostream>
using namespace std;

typedef struct {

	string name;
	int age;
	float GPA;
}Info;
int main3() {
	Info userinfo[2];
    
	//user info
	 userinfo[0].name = "tareq";
	 userinfo[0].age = 18;
	 userinfo[0].GPA = 3.5;
	cout << "Name: " << userinfo[0].name << "\n" << "Age: " << userinfo[0].age << "\n" << "GPA: " << userinfo[0].GPA << endl;
	//user info
	 userinfo[1].age = 65;
	 userinfo[1].name = "hassn";
	 userinfo[1].GPA = 4.5;
	cout << "Name: " << userinfo[1].name << "\n" << "Age: " << userinfo[1].age << "\n" << "GPA: " << userinfo[1].GPA << endl;

	return 0;
}