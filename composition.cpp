#include<iostream>
using namespace std;

//Components
class ControlUnit{
public:
	//if component has a parameterized constructor
	ControlUnit(int a){
		cout << "Ctor: Control Unit"<<endl;
	}
	~ControlUnit(){
		cout << "Dtor: Control Unit" << endl;
	}
	void printUnitName(){
		cout << "Control Unit" << endl;
	}
};
class ArithmeticAndLogicUnit{
public:
	ArithmeticAndLogicUnit(char a){
		cout << "Ctor: Arithmetic & Logic Unit" << endl;
	}
	~ArithmeticAndLogicUnit(){
		cout << "Dtor: Arithmetic & Logic Unit" << endl;
	}
	void printUnitName(){
		cout << "Arithmetic & Logic Unit" << endl;
	}
};
class MemoryUnit{
public:
	MemoryUnit(){
		cout << "Ctor: Memory Unit" << endl;
	}
	~MemoryUnit(){
		cout << "Dtor: Memory Unit" << endl;
	}
	void printUnitName(){
		cout << "Memory Unit" << endl;
	}
};

//Composer
class Processor
{
private:
	double ClockSpeed;
	ArithmeticAndLogicUnit alu;
	ControlUnit cu;
	MemoryUnit mu;

public:
	Processor() :cu(2), alu('f')//if component has a parameterized constructor
	{
		cout << endl<<"Ctor: Processor" << endl;
		ClockSpeed = 2.5;		
	}
	Processor(double cs):cu(2),alu('f')//if component has a parameterized constructor
	{
		cout << endl << "Ctor: Processor" << endl;
		ClockSpeed = cs;		
	}
	~Processor(){
		cout << endl << "Destroying Processor"<<endl  ;
		
	}
	double getClockSpeed(){
		return ClockSpeed;
	}
	
	void setClockSpeed(double CS){
		ClockSpeed = CS;
	}
	void printSpec(){
		cout << "This is a CPU. It contains following components" << endl;
		cu.printUnitName();
		mu.printUnitName();
		alu.printUnitName();
	}
};

//Driver
int main(){
	Processor CPU(3.6);
	CPU.printSpec();
	return 0;

}
