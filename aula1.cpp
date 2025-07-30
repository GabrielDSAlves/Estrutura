#include <iostream>

using namespace std;

void MaiorMenor(float notas[]){
    float maior = notas[0];
    float menor = notas[0];

    for (int i =0; i<10 ;i++) {
        if(notas[i]< notas[i-1])
            menor = notas[i];

        if(notas[i]> notas[i-1])
            menor = notas[i];
    }

    cout << "O maior é: "<< maior<< endl;
    cout << "O menor é: "<< menor << endl;


}

void media(float notas[]){
    int soma=0;
    float media=0;

    for (int i =0; i<10 ;i++) {
        soma += notas[i];   
    }

    media = soma/10;
    cout << "A média é: "<< media<< endl;
}

void exibir(float notas[]){
    for (int i =0; i<10 ;i++) {
        cout << "Nota: " << notas[i]<<endl;
        
    }
}

void cadastro(float notas[]) {
    for (int i =0; i<10 ;i++) {
        cout << "Digite a nota: ";
        cin >> notas[i];
    }
}

int menu(){
    int escolha;
    cout << "=========== MENU ===========" << endl;
    cout << "1. Cadastrar notas dos alunos (Máximo 10)" << endl;
    cout << "2. Exibir todas as notas" << endl;
    cout << "3. Calcular e exibir a média geral da turma" << endl;
    cout << "4. Mostrar a maior e a menor nota" << endl;
    cout << "5. Sair" << endl;
    cout << "\n\nSua opção: ";
    cin >> escolha;
    return escolha;

}

int main() {
    int opcao;
    bool a = false;
    float notas[10];


    do
    {
        opcao = menu();
        
        switch (opcao)
        {
        case 1:
            cadastro(notas);
            break;
        case 2:
            exibir(notas);
            break;
        case 3:
            media(notas);
            break;
        case 4:
            MaiorMenor(notas);
            break;
        case 5:
            a = true;
            break;
        default:
            cout << "Escolha umas das cinco opções acima" << endl;
            break;
        }
    } while (!a);
    
}