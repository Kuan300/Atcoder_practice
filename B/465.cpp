# include <iostream>
using namespace std;

int main(){
  int x, y;
  int l, r;
  int a, b;
  
  cin >> x >> y >> l >> r >> a >> b;
  
  int charge = 0;
  if (a <= l){
    if (b > r)
        charge += ((b-r)*y + (r-l)*x + (l-a)*y);
    else if (b >l)
        charge += ((b-l)*x + (l-a)*y);
    else
        charge += (b-a)*y;
  }
  else if (a <= r){
    if (b > r)
        charge += ((b-r)*y + (r-a)*x);
    else
        charge += (b-a)*x;
  }
  else{
    charge += (b-a)*y;
  }

  cout << charge << endl;
}