#include<iostream>
#include<cmath>
using namespace std;

double functionY(int x){
    double e = 2.71828;
    double y;
    y = (3*x*x*x)+(2*2.71828)+(pow(2,(2*x)+1))+sqrt((x*x)+1);
    return y;
}

int main()
{
    int x;
    cout << "Enter x = ";
    cin >> x;

    functionY(x);
    cout << "Result y = " << functionY(x);
    

    return 0;


}