#include<iostream>
using namespace std;
class beverages{
public:
	beverages(){
		cout << "Beverages ctor" << endl;
	}
 void AddSachet()  {
	cout << "Add beverage sachet" << endl;
	}
	 virtual void Title(){
		 cout << "Beverages" << endl;
	 }
};
class Tea:public beverages
{
public:
	Tea(){
		cout << "Tea ctor" << endl;
	}
	void AddSachet(){
		cout << "Add Tea sachet" << endl;
	}
	void Title(){
		cout << "Tea" << endl;
	}
};
class Coffee :public beverages
{
public:
	Coffee(){
		cout << "Coffee ctor" << endl;
	}
	void AddSachet(){
		cout << "Add Coffee sachet" << endl;
	}
	void Title(){
		cout << "Coffee" << endl;
	}
};
//class GreenTea : public Tea {};
class ColdCoffee : public Coffee{
public:
	ColdCoffee(){
		cout << "Cold Coffee COnstructor" << endl;
	}
	void AddSachet(){
		cout << "Add some Coffee ice cream" << endl;
	}
	void Title(){
		cout << "Cold Coffee" << endl;
	}
};
void PlaceOrder(beverages* b){
	b->Title();
}
int main()
{	
	beverages* b = new Tea;//Up casting-- implicit
		//b pointer is of static type beverages and dynamic type tea
	b->AddSachet();	
	cout << "Order: ";
	PlaceOrder(b);
	cout << endl;

	Coffee c1;
	beverages* b3 = &c1;
	b3->AddSachet();
	cout << "Order: ";
	PlaceOrder(b3);
	cout << endl;

	//beverages ptr 'b' has multiple behaviour depending upon its dynamic type.
	ColdCoffee cc;
	beverages* b2 = &cc;
	b2->AddSachet();
	PlaceOrder(b2);
	cout << endl;
	
	Coffee c;
	beverages& b1 = c;
	b1.AddSachet();
	cout << "Order: ";
	PlaceOrder(&b1);	
	return 0;
}