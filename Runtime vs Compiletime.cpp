#include <iostream>
using namespace std;

class Base {
public:
    void NonVirtual() {
        cout << "Base NonVirtual called.\n";
    }
    virtual void Virtual() {
        cout << "Base Virtual called.\n";
    }
};
class Derived : public Base {
public:
    void NonVirtual() {
        cout << "Derived NonVirtual called.\n";
    }
    void Virtual() {
        cout << "Derived Virtual called.\n";
    }
};

int main() {
    Base* bBase = new Base();
    Base* bDerived = new Derived();
							
    bBase->NonVirtual();	// base nonvirtural
    bBase->Virtual();		/* if bBase is -> bDerived then the bDerived virtual function 
								will be called in case it does not have any virtual 
								function then the default base version will be called
							    */
	bDerived->NonVirtual(); // 
    bDerived->Virtual();
}
