#include<math.h>
#include<iostream>

using namespace std;

class Calculator
{
    private:
        float num1, num2;

    public:
        //constructors
        Calculator(){}
        Calculator(float n1, float n2)
        {
            num1 = n1;
            num2 = n2;
        }
        
        //setters
        void setnum1(float n1) { num1 = n1; }
        void setnum2(float n2) { num2 = n2; }
        
        //getters
        float getNum1() { return num1; }
        float getNum2() { return num2; }

        //prin values
        void printValues()
        {
            cout<<num1<<endl;
            cout<<num2<<endl;
        }
};
