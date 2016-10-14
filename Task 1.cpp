#include <iostream> 
#include <math.h> 
#include <conio.h>
using namespace std;
int main(void)
{ 
float a = 0.0;
float b = 0.0;
float c = 0.0;
float x1 = 0.0;
float x2 = 0.0;
float d = 0.0;
cout << "ax^2+bx+c=0" << endl; 
cout <<"Enter value a =" << endl;
cin >> a; 
cout <<"Enter value b =" << endl;
cin >> b;
cout <<"Enter value c =" << endl;
cin >> c; 
d=b*b-4*a*c; 
if ( d>0 )
 { 
 x1=(float)(-b+sqrt(d))/(2*a); 
 x2=(float)(-b-sqrt(d))/(2*a); 
 cout << " The roots of the equation " << endl;
 cout << "x1 = " << x1 << endl;
 cout << "x2 = " << x2<< endl;  
} 
                  else if (d==0)
{ 
                   x1=(float)(-b)/(2*a); 
                   cout << "The root of the equation" << x1 << endl; 
}  
                             else cout << "No roots, d<0, d = " << d << endl; 
_getch()
return 0;
}