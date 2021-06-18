#include<iostream>
#include"Complexos.cpp"

using namespace std;

int main(){
    int  quant,modo,continuar[3] = {1,0,0};
    tComplexos N[2];
    while(continuar[0] == 1){
        cout<<"Insira a quantidade de Numeros Complexos (1 ou 2)\n";
        cin >> quant;
        for(int i=0;i<quant;i++){
            cout<<"Insira a parte real do Numero Complexo " << i+1 <<"\n";
            cin >> N[i].Real;
            cout<<"Insira a parte imaginaria do Numero Complexo " << i+1 <<"\n";
            cin >> N[i].Imaginario;
            N[i].display();
        }
        continuar[1] = 1; 
        while(continuar[1] == 1){
            cout<<"Selecione a funcao desejada: \n 1 = Soma \n 2 = Subtracao \n 3 = Multiplicacao \n 4 = Divisao\n 5 = Módulo\n";
            cin >> modo;
            switch (modo)
            {
            case (1):{
                N[0].Soma(N[1]);
                break;
            }
            case (2):{
                N[0].Subtracao(N[1]);
                break;
            }
            case (3):{
                N[0].Multiplicacao(N[1]);
                break;
            }
            case (4):{
                N[0].Divisao(N[1]);
                break;
            }
            case (5):{
                int Num = 0;
                if((Num<3) && (quant == 2)){
                int outro;
                cout << "Deseja o modulo de qual numero? 1 ou 2\n";
                cin >> Num;
                cout<< N[Num-1].Modulo()<< endl;
                cout << "Deseja o modulo do outro numero? 1 para sim e 2 para nao\n";
                cin >> outro;
                if(outro == 1){
                 cout << N[2-Num].Modulo() <<endl;
                }else{
                    Num = 5;
                }
                }else{
                 cout<< N[0].Modulo()<<endl;
                }
                break;
            }
            default:
                cout << "Opcao invalida\n";
                continuar[1] = 1;
                break;
            }

            cout << "Deseja novamente? 1 para outra operação, 2 para novos valores e 3 para sair\n";
            cin>> continuar[2];
            if(continuar[2] == 1){
             continuar[0] = 1;
             continuar[1] = 1;
            }else if(continuar[2] ==2){
             continuar[0] = 1;
             continuar[1] = 0;
            }else{
             continuar[0] = 0;
             continuar[1] = 0;
            }
        }   
    }

    
}