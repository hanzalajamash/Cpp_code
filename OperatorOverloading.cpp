#include <iostream>
#include <cstdlib>
using namespace std;
class Location{
	private :
		int x,y;
	public:
		Location(int a , int b) : x(a),y(b){
		}
		Location operator ++()
		{
			cout << "Pre Increment" << endl;
			x++;
			y++;
			return *this;
		}
		Location operator ++ (int a)
		{
			cout << "Post Increment" << endl;
			++x;
			++y;
			return *this;
		}
		Location operator += (int a)
		{
			cout << "Increment assignment" << endl;
			x+=a;
			y+=a;
			return *this;
		}
		
		void dis(Location l)
		{
			cout << l.x++ << endl;
			cout << l.x << endl;
			
			cout << "x = " << x << "	" << "y = " << y <<endl;
		}
		
		
};
ostream& operator << (ostream& os, Location &obj)
		{
			os << "x = " << obj.x;
			os << "	y =" << obj.y;
		}
class Details
{
	private :
		string address;
	public :
		Details(string ad) : address(ad){
		}
};

int main()
{
	Location loc(1,2);
	++loc;
	cout << loc;
}
