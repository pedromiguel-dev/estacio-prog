#include <iostream>
#include <stdlib.h>
int vet[10];
int ini = 0, fim = 0, tam = 9;

int test_full() {
  if (fim > tam) {
    return 0;
  } else {
    return 1;
  }
}
int test_empty() {
  if (fim == 0) {
    return 0;
  } else {
    return 1;
  }
}

int consultar() {
  if (test_empty() == 0) {
    std::cout << "vetor cazio" << std::endl;
  } else {
    for (int x = fim - 1; x >= ini; x--)
      std::cout << "Valor[" << x << "]:" << vet[x] << std::endl;
  }
}

int incluir() {
  if (test_full() == 0) {
    std::cout << "vetor cheio" << std::endl;
  } else {
    std::cout << "Entre valor: ";
    std::cin >> vet[fim];
    fim++;
    // consultar();
  }
}
int excluir() {
  if (test_empty() == 0) {
    std::cout << "vetor vazio" << std::endl;
  } else {
    fim = fim - 1;
    consultar();
  }
}

int main(int argc, char *argv[]) {
  int opcao = 1;

  while (opcao != 0) {

    std::cout << "####### CADASTRO DE CLIENTES #######\n \n";
    std::cout << "|||||||||||||||||||||||||||||||||||||\n\n";
    std::cout << "MENU\n\n";

    std::cout << "0 - Fim \n";
    std::cout << "1 - Inclui pilha \n";
    std::cout << "2 - Exclui pilha \n";
    std::cout << "3 - Consulta pilha \n";
    std::cout << "\n";
    std::cout << "Opcao:";
    std::cin >> opcao;

    if (opcao == 0) {
      std::cout << "Fim do cadastro";
    }
    if (opcao == 1) {
      incluir();
    }
    if (opcao == 2) {
      excluir();
    }
    if (opcao == 3) {
      consultar();
    }
    if (opcao > 3) {
      std::cout << "Opçao Invalida";
    }

    system("PAUSE");
    system("cls");
  }
  system("PAUSE");
  return 0;
}