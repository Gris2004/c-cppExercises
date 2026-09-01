#include<cmath>
#include<array>
#include<iostream>

using namespace std;

class Calculator
{
    private:
        double num1, num2;

    public:
        //constructors
        Calculator(){}
        Calculator(double n1, double n2)
        {
            num1 = n1;
            num2 = n2;
        }
        
        //setters
        void setNum1(double n1) { num1 = n1; }
        void setNum2(double n2) { num2 = n2; }
        
        //getters
        double getNum1() { return num1; }
        double getNum2() { return num2; }

        //print values
        void printValues()
        {
            cout<<num1<<endl;
            cout<<num2<<endl;
        }

	//round float for two decimals
        double round2(double var)
        {
            //multiply by 100
            //split by 100
            double value = (int)(var * 100);
            return (double)value / 100;
        }
	

        //add
        double addValues()
        {
            double add = num1 + num2;
            return round2(add);
        }

        //substract
        double substractNumbers()
        {
            double substract = num1 - num2;
            return round2(substract);
        }

        double multiplyValues()
        {
            double multiply = num1 * num2;
            return round2(multiply);
        }

        double splitValues()
        {
            if(num1 == 0 || num2 == 0)
                throw runtime_error("No se uede dividir entre 0"); 
            
            double split = num1 / num2;

            return round2(split);
        }

	array<double, 2> squareRoot()
	{
	    if (num1 < 0 || num2 < 0)
	        throw runtime_error("no se puede calcular la raiz cuadrada de numeros negativos");
	    
        double sqrt1 = sqrt(num1);
        double sqrt2 = sqrt(num2);

	    return {round2(sqrt1), round2(sqrt2)};
	}

    double exponentiation()
    {
        double exp = pow(num1, num2);
        return round2(exp);
    }
};
