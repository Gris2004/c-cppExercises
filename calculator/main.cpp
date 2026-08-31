#include<iostream>
#include"Calculator.cpp"

using namespace std;

int main()
{
    Calculator calc(11, 14);
    calc.printValues();
    cout<< calc.splitValues() << endl;

    return 0;
}
