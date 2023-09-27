#include <iostream>
using namespace std;

class Line {
public:
	void setLength( double len );
	double getLength();
	Line( double len );
private:
	double length;  //10
};

Line::Line( double val ) {
cout<<"Object is being created , length ="<< val <<endl;
length = val;
}
void Line::setLength( double val ) {
length = val;
}
double Line::getLength() {
return length;
}

int main() {
Line line(10.0);
cout<<"Length of line :" << line.getLength() << endl;

line.setLength(6.0);
cout<<"Length of line :" << line.getLength() << endl;

return 0;
}

	

	

