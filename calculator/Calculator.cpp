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

        //print values
        void printValues()
        {
            cout<<num1<<endl;
            cout<<num2<<endl;
        }

	//round float for two decimals
        float round(float var)
        {
            //multiply by 100
            //split by 100
            float value = (int)(var * 100);
            return (float)value / 100;
        }
	

        //add
        float addValues()
        {
            return round(num1 + num2);
        }

        //substract
        float substractNumbers()
        {
            float aux;
            if(num2 < num1)
            {
                aux = num1;
                num1 = num2;
                num2 = aux;
            } 
            return round(num1 - num2);
        }

        float multiplyValues()
        {
            return round(num1 * num2);
        }

        float splitValues()
        {
            if(num1 == 0 || num2 == 0)
                throw runtime_error("No se uede dividir entre 0"); 
            
            return round(num1 / num2);
        }
};
