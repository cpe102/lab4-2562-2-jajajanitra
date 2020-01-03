#include<iostream>
using namespace std;

int findDivisor(int x){
    int y =2;
    while(y<=x){
        if(x%y == 0){
            return y;
        }else{
            y=y+1;
        }
    }
    return y;
}

int main()
{
    int x;
    cout << "Enter number = ";
    cin >> x;
    cout << "\n" << "Divisor = " << findDivisor(x) ;

    return 0;

}
