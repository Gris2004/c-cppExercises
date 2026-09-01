#include<string>
#include<iostream>
#include"Calculator.cpp"

using namespace std;

int main()
{
    string option;
    double n1, n2;
    Calculator calc;

    while (true)
    {
        cout << "===CALCULADORA===" << endl;
        
        cout << "Ingrese valor 1" << endl;
        cin >> n1;

        cout << "omgresa valor 2" << endl;
        cin >> n2;

        calc.setNum1(n1);
        calc.setNum2(n2);

        cout << "elige una opcion" << endl;
        cout << "1=SUMA 2=RESTA 3=MULTIPLICACION 4=DIVISION" << endl;
        cout << "5=RAIZ CUADRADA 6=EXPONENCIACÍON 7=SALIR" << endl;
        cin>>option;

        if(option == "1")
        {
            cout << "===SUMA===" << endl;
            cout << "Resultado: " << calc.addValues() << endl;
        }

        else if(option == "2")
        {
            cout << "===RESTA===" << endl;
            cout << "Resultado: " << calc.substractNumbers() << endl;
        }

        else if(option == "3")
        {
            cout << "===MULTIPLICACION===" << endl;
            cout << "Resultado: " << calc.multiplyValues() << endl;
        }

        else if(option == "4")
        {
            cout << "===DIVISION===" << endl;
            cout << "Resultado: " << calc.splitValues() << endl;
        }

        else if(option == "5")
        {
            cout << "===RAIZ CUADRADA===" << endl;
            cout << "Numero 1: " << calc.squareRoot()[1] << endl;
            cout << "Numero 2: " << calc.squareRoot()[2] << endl;
        }

        else if(option == "6")
        {
            cout << "===EXPONENCIACION===" << endl;
            cout << "Resultado: " << calc.exponentiation() << endl;
        }

        else if(option == "7")
        {
            cout<< "Hasta luego!" << endl;
            break;
        }
        
        else
            cout << "Opcion no valida" << endl;
    }
    return 0;
}
