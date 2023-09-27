#include <iostream>
using namespace std;

class Box {
    private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box

   public:
      double getVolume(void) {
         return length * breadth * height;
      }
      void setLength( double len ) {
         length = len;
      }
      void setBreadth( double bre ) {
         breadth = bre;
      }
      void setHeight( double hei ) {
         height = hei;
      }
      
      // Overload + operator to add two Box objects.
      Box operator*(const Box& val) {
        // cout<<"Box1 Lenght: " << this->length<<endl;
        // cout<<"Box1 Breadth: " << this->breadth<<endl;
        // cout<<"Box1 Height: " << this->height<<endl;
        
        Box box;
        box.length = this->length - val.length;
        box.breadth = this->breadth - val.breadth;
        box.height = this->height - val.height;
        return box;
      }
    //   Box operator+(const Box& b) {
    //      Box box;
    //      box.length = this->length + b.length;
    //      box.breadth = this->breadth + b.breadth;
    //      box.height = this->height + b.height;
    //      return box;
    //   }
};

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setBreadth(20.0); 
   Box1.setLength(25.0); 
   Box1.setHeight(30.0);
 
   // box 2 specification
   Box2.setBreadth(5.0); 
   Box2.setLength(10.0); 
   Box2.setHeight(15.0);
 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 * Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}