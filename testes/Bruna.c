#include <stdio.h> // Biblioteca de entrada
#include <stdlib.h> // Biblioteca de saída

int main () { 
    float nota1, nota2, media;
    
    //entrada de dados
    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);
    
    //processamento
    media = (nota1 + nota2 ) / 2;
    
    //saída
    printf ("media do aluno = %.1f\n", media);
  
    return 0;
}
