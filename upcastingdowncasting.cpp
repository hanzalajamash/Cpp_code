#include <iostream>
using namespace std;
class Parent{
public:
  void sleep() {
  cout << "Parent/Child sleeps" << endl;}
};

class Child: public Parent {
public:
  void gotoSchool(){
  cout << "Child goes to school" << endl;}
};

int main( ) 
{ // Parent do not have to go to school
// 	Child have to sleep
  Parent parent;
  Child child;

  // upcast - implicit type cast allowed
  Parent *pParent = &child; 

  // downcast - explicit type case required 
  Child *pChild =  (Child *) &parent;

  pParent -> sleep();
 pParent -> gotoSchool();  invalid
  pChild -> gotoSchool();
  pChild -> sleep();
  return 0; 
}
