#include <iostream>
using namespace std;

int main() { 
 float a=0, b=0, x=0, y=0;
  cin >> a >> b >> x >> y;
          if (x<0 and y>0){
              float  z=a*x - b*y;
              cout << z;
          }else if(x>=0 and y<=0){
              float z=a*(x*x) - b*y ;
              cout << z;
          }else{
              float z = a*x + b*(y*y);
              cout << z;
          }
            
 return 0;
}
