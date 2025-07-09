#include<iostream>
using namespace std;

int main(){
		//seu código entra aqui
	int *Pont1;
	float *Pont2;
	
    int a = 10;
    float b = 100;
    
    Pont1 = &a;
    Pont2 = &b;
    cout << &a <<endl;
    cout << &b <<endl;

		return 0;
}