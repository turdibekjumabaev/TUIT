#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout << "a=";
  cin >> a;
  cout << "b=";
  cin >> b;
  cout << "c=";
  cin >> c;
  cout << "V=" << a*b*c << endl << "S=" << 2*(a*b+b*c+a*c);
  return 0;
}
