#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 6;
    int y = 28;
    int *c = &a;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari C : " << *c << endl;
    c = &y;
    cout << "Alamat memori : " << c << endl;
    cout << "Nilai dari c : " << *c << endl;

    int &d = b;
    cout << "Nilai " << d << endl;
    cout << "reference " << &d << endl; 
    
    int f = 5;
    int g = f;
}