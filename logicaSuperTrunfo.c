// Neste Código estão implementados os níveis Novato, Aventureiro e Mestre do Jogo do Trunfo. 
// Cada nível foi sinalizado com comentários para facilitar a identificação.

#include <stdio.h>
int main(){

//variaveis para armazenar os dados da Carta 1
char Estado_Carta1[50], Codigo_da_Carta1[50], Nome_da_Cidade_Carta1[50];
int Populacao_Carta1, Numero_de_Pontos_Turisticos_Carta1;
float Area_em_Km2_Carta1, PIB_Carta1, Densidade_Populacional_Carta1, PIB_per_Capita_Carta1;

// Variaveis para armazenar os dados da Carta 2
char Estado_Carta2[50], Codigo_da_Carta2[50], Nome_da_Cidade_Carta2[50];
int Populacao_Carta2, Numero_de_Pontos_Turisticos_Carta2;
float Area_em_Km2_Carta2, PIB_Carta2, Densidade_Populacional_Carta2, PIB_per_Capita_Carta2;

printf("****Jogo do Trunfo****\n");

printf("\nDigite os dados da Carta 1\n");

//Solicitação de dados para a carta 1
printf("Carta 1: \n");

printf("Digite o Estado: \n");   
scanf("%s", Estado_Carta1);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta1);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade_Carta1);

printf("Digite a População da Carta 1: \n");
scanf("%d", &Populacao_Carta1);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2_Carta1);

printf("Digite o PIB: \n");
scanf("%f", &PIB_Carta1);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos_Carta1);

// Cálculos da Carta 1
// Variáveis para armazenar os resultados dos cálculos
Densidade_Populacional_Carta1 = (float) Populacao_Carta1 / Area_em_Km2_Carta1;
PIB_per_Capita_Carta1 = (float) PIB_Carta1 / Populacao_Carta1;  

//Solicitação de dados para a carta 2 
printf("\nDigite os dados da Carta 2\n");
printf("Carta 2: \n");

printf("Digite o Estado: \n");
scanf("%s", Estado_Carta2);

printf("Digite o Código: \n");
scanf("%s", Codigo_da_Carta2);

printf("Digite o Nome da Cidade: \n");
scanf("%s", Nome_da_Cidade_Carta2);

printf("Digite a População da Carta 2: \n");
scanf("%d", &Populacao_Carta2);

printf("Digite a Área em Km2: \n");
scanf("%f", &Area_em_Km2_Carta2);

printf("Digite o PIB: \n");
scanf("%f", &PIB_Carta2);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &Numero_de_Pontos_Turisticos_Carta2);

// Cálculos da Carta 2
// Variáveis para armazenar os resultados dos cálculos
Densidade_Populacional_Carta2 = (float) Populacao_Carta2 / Area_em_Km2_Carta2;
PIB_per_Capita_Carta2 = (float) PIB_Carta2 / Populacao_Carta2; 

// Implementação do nível novato
printf("\n****Nível Novato****\n");
printf("Em quesito Densidade Populacional, a Carta 1 é: %.2f e a Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);

// Comparação da Densidade Populacional entre as duas cartas
if (Densidade_Populacional_Carta1 < Densidade_Populacional_Carta2) {
    printf("A Carta 1 venceu!\n");
} else if (Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2) {
    printf("A Carta 2 venceu!\n");
} else {
    printf("As Cartas empataram em Densidade Populacional.\n");
}
/*  *** Fim do nível novato*** */

// Implementação do nivel aventureiro
printf("\n****Nível Aventureiro****\n");

// variáveis para armazenar os resultados dos quesitos escolhidos de cada carta
int menu;
printf("*** Menu de Opções ***\n");

printf("Digite 1 para Estado da Carta\n"); // exibe apens os nomes dos Estados das 2 cartas sem comparar
printf("Digite 2 para População da Carta\n");
printf("Digite 3 para Área em Km2 da Carta\n");
printf("Digite 4 para PIB da Carta\n");
printf("Digite 5 para Número de Pontos Turísticos\n");
printf("Digite 6 para Densidade Populacional\n");
printf("Digite 7 para PIB per Capita\n");

// Solicitação do quesito a ser comparado e armazenamento do resultado
printf("\nEscolha no menu o quesito a ser comparado:\n");
scanf("%d", &menu);

// switch para escolher o quesito a ser comparado

switch(menu){
    case 1:
        printf("O Estado da Carta 1 é: %s e O Estado da Carta 2 é: %s\n", Estado_Carta1, Estado_Carta2);
        break;
    case 2:
        printf("A População da Carta 1 é : %d e a População da Carta 2 é: %d\n", Populacao_Carta1, Populacao_Carta2);
        if (Populacao_Carta1 > Populacao_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Populacao_Carta1 < Populacao_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em População.\n");
        }
        break;
    case 3:
        printf("A Área em Km2 da Carta 1 é: %.2f e a Área em Km2 da Carta 2 é: %.2f\n", Area_em_Km2_Carta1, Area_em_Km2_Carta2);
        if (Area_em_Km2_Carta1 > Area_em_Km2_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Area_em_Km2_Carta1 < Area_em_Km2_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em Área.\n");
        }
        break;
    case 4:
        printf("O PIB da Carta 1 é: %.2f e o PIB da Carta 2 é: %.2f\n", PIB_Carta1, PIB_Carta2);
        if (PIB_Carta1 > PIB_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (PIB_Carta1 < PIB_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em PIB.\n");
        }
        break;
    case 5:
        printf("O Número de Pontos Turísticos da Carta 1 é: %d e o Número de Pontos Turísticos da Carta 2 é: %d\n", Numero_de_Pontos_Turisticos_Carta1, Numero_de_Pontos_Turisticos_Carta2);
        if (Numero_de_Pontos_Turisticos_Carta1 > Numero_de_Pontos_Turisticos_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Numero_de_Pontos_Turisticos_Carta1 < Numero_de_Pontos_Turisticos_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em Número de Pontos Turísticos.\n");
        }   
        break;
    case 6: 
        printf("A Densidade Populacional da Carta 1 é: %.2f e a Densidade Populacional da Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);
        if (Densidade_Populacional_Carta1 < Densidade_Populacional_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em Densidade Populacional.\n");
        }
        break;
    case 7:
        printf("O PIB per Capita da Carta 1 é: %.2f e o PIB per Capita da Carta 2 é: %.2f\n", PIB_per_Capita_Carta1, PIB_per_Capita_Carta2);
        if (PIB_per_Capita_Carta1 > PIB_per_Capita_Carta2) {
            printf("A Carta 1 venceu!\n");
        } else if (PIB_per_Capita_Carta1 < PIB_per_Capita_Carta2) {
            printf("A Carta 2 venceu!\n");
        } else {
            printf("As Cartas empataram em PIB per Capita.\n");
        }
        break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
        printf("Escolha o quesito a ser comparado.\n");
        scanf("%d", &menu);
        break;
}
/* *** Fim do nível Aventureiro*** */

// Implementação do nível Mestre
printf("\n****Nível Mestre****\n");

// variáveis para armazenar os resultados dos quesitos escolhidos de cada carta
int primeiroQuesito, segundoQuesito, resultado_Q1, resultado_Q2;
int resultado_C1_1Q, resultado_C2_1Q, resultado_C1_2Q, resultado_C2_2Q, carta1, carta2;   

// Inclusão de menu para escolher o quesito a ser comparado
printf("*** Menu de Opções ***\n");
printf("\nEscolha no Menu o quesito a ser comparado\n");

printf("Digite 1 para Estado da Carta\n"); // exibe apenas os nomes dos Estados das 2 cartas sem comparar
printf("Digite 2 para População da Carta\n");
printf("Digite 3 para Área em Km2 da Carta\n");
printf("Digite 4 para PIB da Carta\n");
printf("Digite 5 para Número de Pontos Turísticos\n");
printf("Digite 6 Densidade Populacional\n");
printf("Digite 7 para PIB per Capita\n");

// Solicita o primeiro quesito a ser comparado e armazena o resultado
printf("\nEscolha o primeiro quesito a ser comparado:\n");
scanf("%d", &primeiroQuesito);

// menu para escolher o primeiro quesito a ser comparado
switch(primeiroQuesito){
    case 1:
        printf("O Estado da Carta 1 é: %s e O Estado da Carta 2 é: %s\n", Estado_Carta1, Estado_Carta2);
        break;
    case 2:
        printf("A População da Carta 1 é : %d e a População da Carta 2 é: %d\n", Populacao_Carta1, Populacao_Carta2);
        resultado_Q1 = Populacao_Carta1 > Populacao_Carta2 ? 1 : 0;
        resultado_C1_1Q = Populacao_Carta1; // Armazenando o resultado do primeiro quesito da Carta 1
        resultado_C2_1Q = Populacao_Carta2; // Armazendo o resultado do primeiro quesito da Carta 2
        break;
    case 3:
        printf("A Área em Km2 da Carta 1 é: %.2f e a Área em Km2 da Carta 2 é: %.2f\n", Area_em_Km2_Carta1, Area_em_Km2_Carta2);
        resultado_Q1 = Area_em_Km2_Carta1 > Area_em_Km2_Carta2 ? 1 : 0;
        resultado_C1_1Q = Area_em_Km2_Carta1; // Armazenando o resultado do primeiro quesito da Carta 1
        resultado_C2_1Q = Area_em_Km2_Carta2; // Armazenando o resultado do primeiro quesito da Carta 2
        break;
    case 4:
        printf("O PIB da Carta 1 é: %.2f e o PIB da Carta 2 é: %.2f\n", PIB_Carta1, PIB_Carta2);
        resultado_Q1 = PIB_Carta1 > PIB_Carta2 ? 1 : 0;
        resultado_C1_1Q = PIB_Carta1; // Armazenando o resultado do primeiro quesito da Carta 1
        resultado_C2_1Q = PIB_Carta2; // Armazenando o resultado do primeiro quesito da Carta 2
        break;
    case 5:
        printf("O Número de Pontos Turísticos da Carta 1 é: %d e  Número de Pontos Turísticos da Carta 2 é: %d\n", Numero_de_Pontos_Turisticos_Carta1, Numero_de_Pontos_Turisticos_Carta2);
        resultado_Q1 = Numero_de_Pontos_Turisticos_Carta1 < Numero_de_Pontos_Turisticos_Carta2 ? 1 : 0;
        resultado_C1_1Q = Numero_de_Pontos_Turisticos_Carta1; // Armazenando o resultado do primeiro quesito da Carta 1
        resultado_C2_1Q = Numero_de_Pontos_Turisticos_Carta2; // Armazenando o resultado do primeiro quesito da Carta 2
        break;
    case 6:
        printf("A Densidade Populacional da Carta 1 é: %.2f e a Densidade Populacional da Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);
        resultado_Q1 = Densidade_Populacional_Carta1 > Densidade_Populacional_Carta2 ? 1 : 0;
        resultado_C1_1Q = Densidade_Populacional_Carta1; // Armazenando o resultado do primeiro quesito da Carta 1
        resultado_C2_1Q = Densidade_Populacional_Carta2; // Armazenando o resultado do primeiro quesito da Carta 2
        break;
    case 7:
        printf("O PIB per Capita da Carta 1 é: %.2f e o PIB per Capita da Carta 2 é: %.2f\n", PIB_per_Capita_Carta1, PIB_per_Capita_Carta2);
        resultado_Q1 = PIB_per_Capita_Carta1 > PIB_per_Capita_Carta2 ? 1 : 0;
        resultado_C1_1Q = PIB_per_Capita_Carta1; // Armazenando o resultado do primeiro quesito da Carta 1
        resultado_C2_1Q = PIB_per_Capita_Carta2; // Armazenando o resultado do primeiro quesito da Carta 2
        break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
        printf("Escolha o primeiro quesito a ser comparado:\n"); // Solicita novamente o primeiro quesito
        scanf("%d", &primeiroQuesito);
        break;
}
// Escolha do segundo quesito a ser comparado e armazenamento do resultado
printf("\nEscolha o segundo quesito a ser comparado:\n");
scanf("%d", &segundoQuesito);

// Verificação para garantir que o segundo quesito é diferente do primeiro
// Se o usuário escolher o mesmo quesito, solicitar novamente
        if (primeiroQuesito == segundoQuesito) {
        printf("Você escolheu o mesmo quesito. Tente novamente.\n");
        printf("Escolha o segundo quesito a ser comparado:\n");
        scanf("%d", &segundoQuesito);
    }

// menu para escolher o segundo quesito a ser comparado
 switch(segundoQuesito) {
    case 1:
        printf("O Estado da Carta 1 é: %s e O Estado da Carta 2 é: %s\n", Estado_Carta1, Estado_Carta2);
        break;
    case 2:
        printf("A População da Carta 1 é : %d e a População da Carta 2 é: %d\n", Populacao_Carta1, Populacao_Carta2);
        resultado_Q2 = Populacao_Carta1 > Populacao_Carta2 ? 1 : 0;
        resultado_C1_2Q = Populacao_Carta1; // Armazenando o resultado do segundo quesito da Carta 1
        resultado_C2_2Q = Populacao_Carta2; // Armazendo o resultado do segundo quesito da Carta 2
        break;
    case 3:
        printf("A Área em Km2 da Carta 1 é: %.2f e a Área em Km2 da Carta 2 é: %.2f\n", Area_em_Km2_Carta1, Area_em_Km2_Carta2);
        resultado_Q2 = Area_em_Km2_Carta1 > Area_em_Km2_Carta2 ? 1 : 0;
        resultado_C1_2Q = Area_em_Km2_Carta1; // Armazenando o resultado do segundo quesito da Carta 1
        resultado_C2_2Q = Area_em_Km2_Carta2; // Armazenando o resultado do segundo quesito da Carta 2
        break;
    case 4:
        printf("O PIB da Carta 1 é: %.2f e o PIB da Carta 2 é: %.2f\n", PIB_Carta1, PIB_Carta2);
        resultado_Q2 = PIB_Carta1 > PIB_Carta2 ? 1 : 0;
        resultado_C1_2Q = PIB_Carta1; // Armazenando o resultado do segundo quesito da Carta 1
        resultado_C2_2Q = PIB_Carta2; // Armazenando o resultado do segundo quesito da Carta 2
        break;
    case 5:
        printf("O Número de Pontos Turísticos da Carta 1 é: %d e o Número de Pontos Turísticosl da Carta 2 é: %d\n",Numero_de_Pontos_Turisticos_Carta1, Numero_de_Pontos_Turisticos_Carta2);
        resultado_Q2 = Numero_de_Pontos_Turisticos_Carta1 > Numero_de_Pontos_Turisticos_Carta2 ? 1 : 0;
        resultado_C1_2Q = Numero_de_Pontos_Turisticos_Carta1; // Armazenando o resultado do segundo quesito da Carta 1
        resultado_C2_2Q = Numero_de_Pontos_Turisticos_Carta2; // Armazenando o resultado do segundo quesito da Carta 2
        break;
    case 6:
        printf("A Densidade Populacional da Carta 1 é: %.2f e a Densidade Populacional da Carta 2 é: %.2f\n", Densidade_Populacional_Carta1, Densidade_Populacional_Carta2);
        resultado_Q2 = Densidade_Populacional_Carta1 < Densidade_Populacional_Carta2 ? 1 : 0;
        resultado_C1_2Q = Densidade_Populacional_Carta1; // Armazenando o resultado do segundo quesito da Carta 1
        resultado_C2_2Q = Densidade_Populacional_Carta2; // Armazenando o resultado do segundo quesito da Carta 2
        break;
    case 7:
        printf("O PIB per Capita da Carta 1 é: %.2f e o PIB per Capita da Carta 2 é: %.2f\n", PIB_per_Capita_Carta1, PIB_per_Capita_Carta2);
        resultado_Q2 = PIB_per_Capita_Carta1 >= PIB_per_Capita_Carta2 ? 1 : 01;
        resultado_C1_2Q = PIB_per_Capita_Carta1; // Armazenando o resultado do segundo quesito da Carta 1
        resultado_C2_2Q = PIB_per_Capita_Carta2; // Armazenando o resultado do segundo quesito da Carta 2
        break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
        printf("Escolha o segundo quesito a ser comparado.\n");
        scanf("%d", &segundoQuesito);
        // Repetir o switch para o segundo quesito
        break;

    }  
//variáveis para armazenar os resultados dos quesitos escolhidos de cada carta
carta1 = resultado_C1_1Q + resultado_C1_2Q; // Soma dos resultados dos quesitos da Carta 1
carta2 = resultado_C2_1Q + resultado_C2_2Q; // Soma dos resultados dos quesitos da Carta 2

/* **** Regras para determinar o vencedor ****
1 - resultado1 e resultado 2 são valores booleanos (0 ou 1)
2 - 1 representa que os pontos da Carta 1 são maiores que os da Carta 2.
3 - 0 pode representar que os pontos da Carta 1 são menores que os da Carta 2 em certo quesito
    ou pode representar que os pontos da Carta 1 são iguais aos da Carta 2 em certo quesito.
    Nesse caso em que o resultado1 e resultado2 forem iguais a 0, a mensagem manda verificar o total de cada Carta.
        // Se o resultado1 for verdadeiro (1) e o resultado2 for verdadeiro (1), a Carta 1 vence
        // Se o resultado1 for verdadeiro (1) e o resultado2 for falso (0), empate pois a Carta 1 tem apenas um quesito vencedor
        // Se o resultado1 for falso (0) e o resultado2 for verdadeiro (1), empate pois a Carta 1 tem apenas um quesito vencedor
        // Se ambos forem falsos (0), a Carta 1 perdeu ou houve um empate em ambos os quesitos, 
           e a mensagem pede para verificar o total de cada carta.
        *** Fim das regras para determinar o vencedor ****
*/
        
// Verificação da Carta vencedora
        if (resultado_Q1 && resultado_Q2) {
            printf("O total da Carta 1 é: %d e o total da Carta 2 é: %d. A Carta 1 venceu!\n", carta1, carta2);
        } else if (resultado_Q1 != resultado_Q2) {
            printf("A Carta 1 venceu apenas em um dos quesitos. Empate pelas Regras!\n");
            printf("Resultado do Quesito 1: %d, Resultado do Quesito 2: %d\n", resultado_Q1, resultado_Q2);
        } else {
            printf("A Carta 1 perdeu ou houve um empate em ambos os quesitos! Verifique o total de cada carta!\n");
            printf("O total da Carta 1 é: %d e o total da Carta 2 é: %d.\n", carta1, carta2);
        }
return 0;
    }



      
/*FIM */





/*#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
*/