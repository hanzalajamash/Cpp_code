#include<iostream>
#include<string>
using namespace std;

//Abstract Class
class Employee{
private:
	int emp_ID;
	string name;
	double salary;
	
public:
	virtual void ComputeSalary() = 0;
	virtual void func() { cout << "Some General Logic can go here" << endl; }//pure virtual function
//Non-pure virtual member function may go here
};

class Faculty : public Employee{
public:
	void ComputeSalary(){
		cout << "Faculty Pay Slip" << endl;		
		//some formula to calculate faculty pay
	}
	void func(){
		Employee::func();
		cout << "Some Specific Logic related to Faculty-class will go here" << endl;
	}
};
class Staff : public Employee{
public:
	void ComputeSalary(){
		
		cout << "Staff Pay Slip" << endl;
		//some formula to calculate staff pay
	}
	void func(){
		Employee::func();
		cout << "Some Specific Logic related to Staff-class will go here" << endl;
	}
};
int main(){
	//Employee e;		//abstract class can't be instantiated
	Faculty f;		//concrete class
	f.ComputeSalary();
	f.func();
	cout << endl;

	Staff s;	//concrete class
	s.ComputeSalary();
	s.func();
}
