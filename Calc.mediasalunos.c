#include <stdio.h>
#include <string.h>

int main() 
{
    char nome[70];
    int idade;
    float Nota1, Nota2, Nota3;
    float media;
    
    printf("Digite o nome do aluno: ");
    fgets(nome, 70, stdin);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
	 
    printf("Digite a primeira nota: ");  
    scanf("%f", &Nota1);                

    printf("Digite a segunda nota: ");   
    scanf("%f", &Nota2);                

    printf("Digite a terceira nota: ");  
    scanf("%f", &Nota3);                
    media = (Nota1 + Nota2 + Nota3) / 3; 

    printf("\n--- Resultado ---\n");
    printf("Nome: %s", nome);          
    printf("Idade: %d\n", idade);        
    printf("Notas: %.1f, %.1f, %.1f\n", Nota1, Nota2, Nota3);  
    printf("Media: %.2f\n", media);     


    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}