#include <iostream>
using namespace std;

double Add(double n1, double n2){
    return n1 + n2;
}

double Sub(double n1, double n2){
    return n1 - n2;
}

double Mult(double n1, double n2){
    return n1 * n2;
}

double Div(double n1, double n2){
    return n1 / n2;
}

int main(){
    double n1, n2, i = 1;
    char op, c;
    cout << "__________________________\nCALCULATOR\n";
    cin >> n1 >> op >> n2;
    while(i == 1){
        switch(op){
            case '+':
                n1 = Add(n1, n2);
                break;
            case '-':
                n1 = Sub(n1, n2);
                break;
            case 'x':
                n1 = Mult(n1, n2);
                break;
            case ':':
                n1 = Div(n1, n2);  
                break;          
            default :
                cout << "Error : Unknown Operator";
                return 1;
        }
        cout << "Result : " << n1 << "\nContinue? Y/n : ";
        cin >> c;
        if(c == 'Y'){
            cout << n1;
            cin >> op >> n2;
        }
        else{
            i = 0;
        }
    }
    return 0;
}