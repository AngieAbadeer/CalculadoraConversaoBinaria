#include <iostream>
#include <stdlib.h> //lib para limpar a tela
#include <locale.h> //lib para passar para português
#include <math.h> //lib para potencia

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int valor;
  bool executa = true;
  int bin[8];

while (executa){
            valor = 0;
            cout << "Escolha um dos valores \n \n";
            cout << "1 Decimal para binário \n";
            cout << "2 Binário para decimal \n";
            cout << "0 Para sair \n";
            cin >> valor;
            cout << valor << " = Valor que digitei \n \n";
            if (valor == 0){
                cout << "Saindo do programa";
                executa = false;
                exit;
            }else{
                if (valor == 1) {
                    int decimal;
                    cout << "Digite o valor em decimal \n";
                    cin >> decimal;
                    cout << "O valor em decimal é: " << decimal << "\n";
                    std::string str;

                    for (int i = 7; i >=0; i--){
                         if(decimal % 2 == 0){
                            bin [i] = 0;
                         }else{
                            bin[i] = 1;
                         }

                         decimal = decimal / 2;
                         str += std::to_string(bin[i]);
                    }

                    string rev = string(str.rbegin(), str.rend());
                    cout << "O valor em binário é: " << rev <<"\n \n" ;

                }else{
                    if (valor == 2) {
                        int binario;
                        int dec = 0;
                        cout << "Digite o valor em binário" << endl;
                        char binario_numero[100];
                        cin >> binario_numero;
                        cout << "O valor em binário é: " << binario_numero << "\n";
                        for (int i = 0; binario > 0; i++)
                        {

                        dec = dec + pow(2, i) * (binario % 10);
                        binario = binario / 10;
                        }
                        cout << "O valor em decimal é: " << stoi(binario_numero, 0,2);
                        cout << "\n";

                    }else {
                        cout << "Não temos esse valor no menu" << "\n";

                        }
                    }
                }
            }

	    {
		cout << "Digite um valor válido";
		}
        return 0;
}
