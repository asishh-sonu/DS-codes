#include <iostream>
using namespace std;
int fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int a , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> a;
   cout << "Fibonnaci Series : "<<endl;
   while(i < a) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
   
 }
