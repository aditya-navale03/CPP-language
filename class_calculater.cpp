#include <iostream>
using namespace std;

class calculater {

    int num1;
    int num2;

public:
    void SetValue(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    void add() {
        cout<<"Addition of numbers : "<<num1 + num2<<endl;
    }

    void sub() {
        cout<<"subtraction of numbers : "<<num1 - num2<<endl;
    }

    void multliplication() {
        cout<<"multliplication of numbers :"<<num1 * num2<<endl;
    }

    void divide() {
        if (num2 != 0) {
            cout<<"divide of number : "<<num1 / num2<<endl;
        } else {
            cout<<"divide :undefined (number is zero)";
        }
    }
};



int main() {
  
    calculater calc;
    int n1,n2;

    cout<<"Enter First Number : ";
    cin>>n1;

    cout<<"Enter second Number : ";
    cin>>n2;

    calc.SetValue(n1,n2);

    calc.add();
    calc.sub();
    calc.multliplication();
    calc.divide();



  return 0;
}