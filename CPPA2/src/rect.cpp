#include<header.h>

using namespace std;
class Rectangle
{
	public:
		float length;
		float width;

		float calculatearea()
		{
			return length* width;
		}
		float calculateperimeter()
		{
			return 2 *length + 2 *width;
		}
		float displaylength(){
			return length;
		}
		float displaywidth(){
			return width;
		}
};
int main()
{
	Rectangle rect1;
	rect1.length=42.0;
	rect1.width=30.0;

	cout<<"area of rectangle:"<<rect1.calculatearea()<<endl;
	cout<<"perimeter of rectangle="<<rect1.calculateperimeter()<<endl;
	cout<<"length of rectangle="<<rect1.displaylength()<<endl;
	cout<<"width of rectangle="<<rect1.displaywidth()<<endl;
}
