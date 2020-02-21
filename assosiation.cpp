#include<iostream>
#include<string>

using namespace std;
//Part Class
class Processor
{
private:
	double ClockSpeed;

public:
	Processor()
	{
		ClockSpeed = 3.6;
	}
	Processor(double CS){
		ClockSpeed = CS;
	}
	double getClockSpeed(){
		return ClockSpeed;
	}
	void setClockSpeed(double CS){
		ClockSpeed = CS;
	}
};

//Whole/Aggregate Class
class Computer{
	Processor *proc;
	string operatingSystem;

public:
	Computer(){
		operatingSystem = "Windows";
		
	}

	~Computer(){
		cout << "Destructor Computer \n" << endl;
		//no memory requested from heap, so no need to release memory 
	}

	Processor* getProcessor(){
		return proc;
	}

	void setProcessor(Processor *p){
		proc = p;		//Association-Shallow Copy
		proc->setClockSpeed(5.0);
	}
	void print(){
		cout << "Operating System: " << operatingSystem << endl;
		cout << "Clock Speed: " << proc->getClockSpeed() << endl;
	}
};


int main()
{

	Processor processor(3.6);
	{
		Computer PC1;
		PC1.setProcessor(&processor);
		PC1.print();
	}
//independent lifetime
	cout << "Associated Processor also got changed Clock Speed" << endl;
	cout << "Now Clock Speed of associated processor also changed: " << processor.getClockSpeed() << endl;
	
	return 0;
}






