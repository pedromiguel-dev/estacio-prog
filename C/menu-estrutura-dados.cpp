#include <iostream>
#include <stdlib.h>
#include <string>

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

void consultar() {
  if (test_empty() == 0) {
    std::cout << "vetor cazio" << std::endl;
  } else {
    for (int x = fim - 1; x >= ini; x--)
      std::cout << "Valor[" << x << "]:" << vet[x] << std::endl;
  }
}

void incluir() {
  if (test_full() == 0) {
    std::cout << "vetor cheio" << std::endl;
  } else {
    std::cout << "Entre valor: ";
    std::cin >> vet[fim];
    fim++;
    // consultar();
  }
}

void excluir() {
  if (test_empty() == 0) {
    std::cout << "vetor vazio" << std::endl;
  } else {
    fim = fim - 1;
    consultar();
  }
}

int wait_enter() {
  std::cout << "Clique em qualquer tecla para continuar.\n";
  int abc = std::getchar();
  return 0;
}

void quick_sort(){
  int numero = 0;
  int index_found= -1;
  std::cout << "digite o numero a ser buscado: ";
  std::cin >> numero;

  if(test_empty() == 0)
    std::cout << "vetor vazio";
    return;

  for (int i = 0; i <= tam; i++)
  {
    if(vet[i] == numero)
      index_found = i;
  }

  if(index_found >= 0)
    std::cout << "numero achado no index " << index_found << ".";
  else 
    std::cout << "numero não foi encontrado :<";
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
    std::cout << "4 - Achar numero - linear_sort \n";
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
    if (opcao == 4) {
      quick_sort();
    }

    wait_enter();
  }
  wait_enter();
  return 0;
}