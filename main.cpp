#include <iostream>
using namespace std;


void tinhtong() {
    short int a;
    int* mang= new int[a];
    while (a<1 || a>100) {
        cout<<"Nhap so test cases: "<<endl;
        cin>>a;
        if (a < 1 || a > 100) {
            cout<<"Vui long nhap lai "<<endl;
        }
    }
    for (int i=0; i<a; i++) {
        cout<<"Nhap so thu "<<i+1<<": "<<endl;
        cin>>mang[i];
        int tong=0;
        for (int j=1; j<=mang[i]; j++) {
            if (mang[i]%j==0) {
                tong+=j;
            }
        }
        cout<<tong<<endl;
    }

}

int main() {
    tinhtong();
    return 0;
}