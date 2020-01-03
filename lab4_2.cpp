#include<iostream>

using namespace std;

double findDistance(double u,double a,double t){
  double s;
  s = (u*t)+(0.5*t*t*a);
  return s;

}

int main(){
  double u;
  double a;
  double t;
  cout << "Enter u =";
  cin >> u;
  cout << "\n";
  cout << "Enter a =";
  cin >> a;
  cout << "\n";
  cout << "Enter t =";
  cin >> t;
  cout << "\n";

  double s;
  cout << "Distance = " << findDistance(u,a,t);

  return 0;
}
