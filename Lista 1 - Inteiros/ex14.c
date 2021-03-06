/* 14.  Um matemático italiano da idade média conseguiu modelar o ritmo de crescimento da população de coelhos (1) 
através de uma seqüência de números naturais que passou a ser conhecida como seqüência de Fibonacci (2). 
O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência: */

//Faça um programa que, dado n, calcula Fn.

// 1 + 1 = 2
// 1+ 2 = 3
// 2+3 = 4


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n, soma, primeiroTermo, segundoTermo, TerceiroTermo; 
  
  printf("Digite um numero n: ");
  scanf("%d", &n);
  
  //Declaração:
  soma = 1;
  primeiroTermo = 0;
  segundoTermo = 1;

  while(soma < n)
  {
  TerceiroTermo = primeiroTermo + segundoTermo;
  primeiroTermo = segundoTermo;
  segundoTermo = TerceiroTermo;
  soma++;
  }


  printf("O n-ésimo termo da seqüência é: %d \n", TerceiroTermo);
  
  return 0;
}

