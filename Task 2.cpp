#include <iostream> 
#include <math.h> 


using namespace std;
int main(void)
 { 
float x1 = 0.0;
float x2 = 0.0;
float y1 = 0.0;
float y2 = 0.0;
float cos = 0.0; 
cout << "Coordinates of the first vector:" << endl; 
cout << " x1 = " << endl; 
cin << x1;
cout << " y1 = " << endl ;
cin << y1; 
cout << "Coordinates of the second vector:" << endl; 
cout << " x2 = " << endl; 
cin << x2;
cout << " y2 = " << endl ;
cin << y2; 
cos= (float)(x1*x2+y1*y2)/(sqrt(x1*x1+y1*y1)*sqrt(x2*x2+y2*y2)); 
if (cos==0)
 cout << "Vectors are perpendicular  , cos = 0"<< endl;
            else cout << "Vectors are not perpendicular" << cos << endl; 

return 0;
