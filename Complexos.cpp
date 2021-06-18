#include<iostream>
#include<math.h>
#include<string>
using namespace std;

struct tComplexos
{
    float Real;
    float Imaginario;
    float Modulo(void){
        return (sqrt(pow(Real,2)+pow(Imaginario,2)));
    }
    void display(){
        cout << Real << " + " << Imaginario << "i\n";
    } 
    tComplexos Soma (tComplexos B){
        tComplexos Sum;
        Sum.Real = Real + B.Real;
        Sum.Imaginario = Imaginario + B.Imaginario;
        Sum.display();
        return Sum;
    }
    
    tComplexos Subtracao (tComplexos B){
        tComplexos Sub;
        Sub.Real = Real - B.Real;
        Sub.Imaginario = Imaginario - B.Imaginario;
        Sub.display();
        return Sub;
    }
    tComplexos Multiplicacao (tComplexos B){
        tComplexos Mult;
        Mult.Real = (Real*B.Real)-(Imaginario*B.Imaginario);
        Mult.Imaginario = (Real*B.Imaginario)+(B.Real*Imaginario);
        Mult.display();
        return Mult;
    }
    tComplexos Divisao (tComplexos B){
        tComplexos Div;
        Div.Real = ((Real*B.Real)+(Imaginario*B.Imaginario))/(pow(B.Real,2)+pow(B.Imaginario,2));
        Div.Imaginario = ((B.Real*Imaginario)-(Real*B.Imaginario))/(pow(B.Real,2)+pow(B.Imaginario,2));
        Div.display();
        return Div;
    }
    
};

