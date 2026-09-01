#include<cmath>
#include<array>
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
        void setNum1(float n1) { num1 = n1; }
        void setNum2(float n2) { num2 = n2; }
        
        //getters
        float getNum1() { return num1; }
        float getNum2() { return num2; }

        //print values
        void printValues()
        {
            cout<<num1<<endl;
            cout<<num2<<endl;
        }

	//round float for two decimals
        float round2(float var)
        {
            //multiply by 100
            //split by 100
            float value = (int)(var * 100);
            return (float)value / 100;
        }
	

        //add
        float addValues()
        {
            float add = num1 + num2;
            return round2(add);
        }

        //substract
        float substractNumbers()
        {
            float substract = num1 - num2;
            return round2(substract);
        }

        float multiplyValues()
        {
            float multiply = num1 * num2;
            return round2(multiply);
        }

        float splitValues()
        {
            if(num1 == 0 || num2 == 0)
                throw runtime_error("No se uede dividir entre 0"); 
            
            float split = num1 / num2;

            return round2(split);
        }

	array<float, 2> squareRoot()
	{
	    if (num1 < 0 || num2 < 0)
	        throw runtime_error("no se puede calcular la raiz cuadrada de numeros negativos");
	    
        float sqrt1 = sqrt(num1);
        float sqrt2 = sqrt(num2);

	    return {round2(sqrt1), round2(sqrt2)};
	}

    float exponentiation()
    {
        float exp = pow(num1, num2);
        return round2(exp);
    }
};
