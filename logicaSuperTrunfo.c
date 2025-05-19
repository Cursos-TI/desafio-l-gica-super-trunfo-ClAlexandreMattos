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
   #include <stdio.h>

#include <string.h>



int main (){

    // ESTADO: IMPRIME UMA LETRA DE 'A' a 'H' (REPRESENTANDO UM DOS OITO ESTADOS), TIPO: CHAR (IMPRIME UM CARACTERE) ...

    char estado1, estado2;

   

    // CÓDIGO DA CARTA: IMPRIME A LETRA DO ESTADO SEGUIDA DE UM NÚMERO DE 01 a 04 (EX: A01, B03), TIPO: CHAR [] ARRAY DE CARACTERE OU STRING ...

    char carta1 [4], carta2 [4];

 

    // O NOME DA CIDADE: IMPRIME O NOME DA CIDADE, TIPO: CHAR [] STRING ...

    char cidade1 [50], cidade2 [50];

   

    // O NÚMERO DE HABITANTES DA CIDADE, TIPO: unsigned long int ...  

    unsigned long int populacao1, populacao2;



    // A QUANTIDADE DE PONTOS TURÍSTICOS NA CIDADE, TIPO: INT (IMPRIME UM INTEIRO NO FORMATO DECIMAL) ...

    int pontostu1, pontostu2;

   

    // ÁREA DA CIDADE EM QUILOMETROS QUADRADOS, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...

    float areakm1, areakm2;



    // PIB: PRODUTO INTERNO BRUTO DA CIDADE, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...

    float pib1, pib2;



    // DENSIDADE POPULACIONAL, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...

    float densidade1, densidade2;

   

    // PIB PER CAPITA, TIPO: FLOAT (IMPRIME UM NÚMERO DE PONTO FLUTUANTE PADRÃO) ...

    float percapita1, percapita2;



    // DECLARAÇÃO DAS VARIÁVEIS RESULTADOS PARA A COMPARAÇÃO SIMPLES ...

    int ataque1, ataque2;



    // DECLARAÇÃO DA VARIÁVEL SUPER PODER ...

    float SuperPoder1, SuperPoder2;



    // DECLARAÇÃO DA VARIÁVEL OPÇÃO DO MENU DE INTERAÇÃO DO SWITCH ...

    int opcao1, opcao2;



    // DECLARAÇÃO DA VARIÁVEL RESULTADO DO MENU DE INTEGRAÇÃO DO SWITCH ...

    int resultado1, resultado2;



    //ENTRADA DE DADOS DA PRIMEIRA CARTA !!!



    printf("\n====================DADOS DA PRIMEIRA CARTA====================\n");

    printf("Escolha uma letra entre 'A' a 'H' para representar o Estado: ");

    // O ESPAÇO ANTES DE %c EVITA PROBLEMAS COM BUFFER DE TECLADO ...

    // %c IMPRIME UM ÚNICO CARACTERE ...

    scanf(" %c", &estado1);



    printf("A letra do estado seguida de um número de 01 a 04 (Ex: A01, B03): ");

    // %3s LIMITA A ENTRADA A 3 CARACTERES, EVITANDO ESTOURO DE BUFFER

    scanf("%3s", carta1);

    getchar();// LIMPEZA DO BUFFER DE TECLADO ...

    printf("Digite o nome da cidade: ");

    // FGETS LÊ STRINGS COM ESPAÇOS EM BRANCO ...

    fgets(cidade1, 50, stdin);// LÊ NO MÁXIMO 49 CARACTERES DA ENTRADA PADRÃO (STDIN) ...

    cidade1[strcspn(cidade1, "\n")] = 0; // O FGETS INCLUI O "\n" NA STRING, ENTÃO PODEMOS REMOVÊ-LO SE NECESSÁRIO ...



    printf("Digite o número da população: ");

    // %d IMPRIME UM INTEIRO NO FORMATO DECIMAL ...

    scanf("%lu", &populacao1);



    printf("Digite a área da cidade (em km²): ");

    // %f IMPRIME UM NÚMERO DE PONTO FLUTUANTE NO FORMATO PADRÃO ...

    scanf("%f", &areakm1);



    printf("Digite o PIB da cidade: ");

    scanf("%f", &pib1);



    printf("Digite a quantidade de pontos turisticos: ");

    scanf("%d", &pontostu1);

   

    //CÁLCULO DA DENSIDADE POPULACIONAL ...

    densidade1 = (float)populacao1 / areakm1;



    //MULTIPLICAÇÃO DO PIB POR 1 BILHÃO ...

    //COMO QUEREMOS O VALOR DO PIB EM REAIS (E NÃO EM BILHÕES), MULTIPLICAMOS O NÚMERO FORNECIDO POR 1.000.000.000. OU (1e9) ...

    percapita1 = (pib1 * 1e9) / (float)populacao1;



    printf("\n==============================================================\n");



    //ENTRADA DE DADOS DA SEGUNDA CARTA !!!



    printf("\n(>>>LEMBRE-SE DE NÃO REPETIR OS DADOS DAS CARTAS!!!<<<)\n");



    printf("\n====================DADOS DA SEGUNDA CARTA====================\n");

    printf("Digite uma letra entre 'A' a 'H' para representar o Estado: ");

    // O ESPAÇO ANTES DE %c EVITA PROBLEMAS COM BUFFER DE TECLADO ...

    // %c IMPRIME UM ÚNICO CARACTERE ...

    scanf(" %c", &estado2);



    printf("A letra do estado seguida de um número de 01 a 04 (Ex: A01, B03): ");

    // %3s LIMITA A ENTRADA A 3 CARACTERES, EVITANDO ESTOURO DE BUFFER

    scanf("%3s", carta2);

    getchar();// LIMPEZA DO BUFFER DE TECLADO ...

    printf("Digite o nome da cidade: ");

    // FGETS LÊ STRINGS COM ESPAÇOS EM BRANCO ...

    fgets(cidade2, 50, stdin);// LÊ NO MÁXIMO 49 CARACTERES DA ENTRADA PADRÃO (STDIN) ...

    cidade2[strcspn(cidade1, "\n")] = 0; // O FGETS INCLUI O "\n" NA STRING, ENTÃO PODEMOS REMOVÊ-LO SE NECESSÁRIO ...



    printf("Digite o número da população: ");

    // %d IMPRIME UM INTEIRO NO FORMATO DECIMAL ...

    scanf("%lu", &populacao2);



    printf("Digite a área da cidade (em km²): ");

    // %f IMPRIME UM NÚMERO DE PONTO FLUTUANTE NO FORMATO PADRÃO ...

    scanf("%f", &areakm2);



    printf("Digite o PIB da cidade: ");

    scanf("%f", &pib2);



    printf("Digite a quantidade de pontos turisticos: ");

    scanf("%d", &pontostu2);

   

    //CÁLCULO DA DENSIDADE POPULACIONAL

    densidade2 = (float)(populacao2 / areakm2);

   

    //MULTIPLICAÇÃO DO PIB POR 1 BILHÃO ...

    //COMO QUEREMOS O VALOR DO PIB EM REAIS (E NÃO EM BILHÕES), MULTIPLICAMOS O NÚMERO FORNECIDO POR 1.000.000.000. OU (1e9)...

    percapita2 = (pib2 * 1e9) / (float)populacao2;

   

    printf("\n==============================================================\n");



    //EXIBIÇÃO DAS INFORMAÇÕES DA PRIMEIRA CARTA !!!



    printf("\n==========EXIBIÇÃO DOS DADOS DA PRIMEIRA CARTA==========\n");

    printf("Carta 1: \n");

    printf("Estado: %c\n", estado1);

    printf("Código da Cidade: %s\n", carta1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %lu\n", populacao1);

    printf("Área: %.2f km²\n", areakm1);                // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...

    printf("PIB:R$ %.2f Bilhões de reais\n", pib1);     // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...

    printf("Pontos Turísticos: %d\n", pontostu1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("PIB per Capita: %.2f reais\n", percapita1);

    printf("\n=========================================================\n");



    //EXIBIÇÃO DAS INFORMAÇÕES DA SEGUNDA CARTA !!!



    printf("\n==========EXIBIÇÃO DOS DADOS DA SEGUNDA CARTA===========\n");

    printf("Carta 2: \n");

    printf("Estado: %c\n", estado2);

    printf("Código da cidade: %s\n", carta2);

    printf("Nome da cidade: %s\n", cidade2);

    printf("População: %lu\n", populacao2);

    printf("Área: %.2f km²\n", areakm2);                // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...

    printf("PIB: R$ %.2f Bilhões de reais\n", pib2);     // SAÍDA DE DADOS FLOAT EM 2 CASAS DECIMAIS (%.2f) ...

    printf("Pontos Turísticos: %d\n", pontostu2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("PIB per Capita: %.2f reais\n", percapita2);

    printf("\n=========================================================\n");



    // SOMANDO TODOS OS ATRIBUTOS NÚMERICOS ...

    SuperPoder1 = populacao1 + areakm1 + pib1 + pontostu1 + percapita1 + (1 / densidade1);

    SuperPoder2 = populacao2 + areakm2 + pib2 + pontostu2 + percapita2 + (1 / densidade2);



    printf("\n\n*** MENU DE COMPARAÇÃO DOS ATRIBUTOS ***\n\n");

    printf("1. População!\n");

    printf("2. ÁreaKm²!\n");

    printf("3. PIB!\n");

    printf("4. Pontos Turísticos!\n");

    printf("5. Densidade Populacional!\n");

    printf("6. PIB Per Capita!\n");

    printf("7. Super Poder!\n");

    printf("Escolha uma das opções: ");

    scanf("%d", &opcao1);



    switch(opcao1){

        case 1:

        // COMPARANDO OS ATRIBUTOS: POPULAÇÃO ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n\n");

        printf("Carta 1 - %s (SP): %u\n", cidade1, populacao1);

        printf("Carta 2 - %s (RJ): %u\n", cidade2, populacao2);



        ataque1 = populacao1;

        ataque2 = populacao2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 2:

        // COMPARANDO OS ATRIBUTOS: ÁREAKM² ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREAKM²)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", cidade1, areakm1);

        printf("Carta 2 - %s (RJ): %.2f\n", cidade2, areakm2);



        ataque1 = areakm1;

        ataque2 = areakm2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;



        break;

        case 3:

        // COMPARANDO OS ATRIBUTOS: PIB ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", cidade1, pib1);

        printf("Carta 2 - %s (RJ): %.2f\n", cidade2, pib2);



        ataque1 = pib1;

        ataque2 = pib2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 4:

        // COMPARANDO OS ATRIBUTOS: PONTOS TURÍSTICOS ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n\n");

        printf("Carta 1 - %s (SP): %d\n", cidade1, pontostu1);

        printf("Carta 2 - %s (RJ): %d\n", cidade2, pontostu2);



        ataque1 = pontostu1;

        ataque2 = pontostu2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 5:

        // COMPARANDO OS ATRIBUTOS: DENSIDADE POPULACIONAL

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", cidade1, densidade1);

        printf("Carta 2 - %s (RJ): %.2f\n", cidade2, densidade2);



        ataque1 = densidade1;

        ataque2 = densidade2;

        resultado1 = ataque1 < ataque2 ? 1 : 0;

       

        break;

        case 6:

        // COMPARANDO OS ATRIBUTOS: PIB PER CAPITA ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB PER CAPITA)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", cidade1, percapita1);

        printf("Carta 2 - %s (RJ): %.2f\n", cidade2, percapita2);



        ataque1 = percapita1;

        ataque2 = percapita2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 7:

        // COMPARANDO O SUPER PODER ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: COMPARANDO TODOS OS ATRIBUTOS (SUPER PODER!))\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", cidade1, SuperPoder1);

        printf("Carta 2 - %s (RJ): %.2f\n", cidade2, SuperPoder2);



        ataque1 = SuperPoder1;

        ataque2 = SuperPoder2;

        resultado1 = SuperPoder1 > SuperPoder2 ? 1 : 0;

        break;

        default:

        printf("Opção Inválida, Tente novamente!\n");

    }

    printf("\n\n*** MENU DE COMPARAÇÃO DOS ATRIBUTOS ***\n\n");

    printf("ATENÇÃO! você de escolher um atributo diferente.\n");

    printf("1. População!\n");

    printf("2. ÁreaKm²!\n");

    printf("3. PIB!\n");

    printf("4. Pontos Turísticos!\n");

    printf("5. Densidade Populacional!\n");

    printf("6. PIB Per Capita!\n");

    printf("7. Super Poder!\n");

    printf("Escolha uma das opções: ");

    scanf("%d", &opcao2);

    if(opcao1 == opcao2){

        printf("Mesmo atributo selecionado, por favor tente de novo\n");

    } else {

        switch(opcao2){

            case 1:

            // COMPARANDO OS ATRIBUTOS: POPULAÇÃO ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n\n");

            printf("Carta 1 - %s (SP): %u\n", cidade1, populacao1);

            printf("Carta 2 - %s (RJ): %u\n", cidade2, populacao2);

   

            ataque1 = populacao1;

            ataque2 = populacao2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 2:

            // COMPARANDO OS ATRIBUTOS: ÁREAKM² ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREAKM²)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade1, areakm1);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade2, areakm2);

   

            ataque1 = areakm1;

            ataque2 = areakm2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

   

            break;

            case 3:

            // COMPARANDO OS ATRIBUTOS: PIB ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade1, pib1);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade2, pib2);

   

            ataque1 = pib1;

            ataque2 = pib2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 4:

            // COMPARANDO OS ATRIBUTOS: PONTOS TURÍSTICOS ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n\n");

            printf("Carta 1 - %s (SP): %d\n", cidade1, pontostu1);

            printf("Carta 2 - %s (RJ): %d\n", cidade2, pontostu2);

   

            ataque1 = pontostu1;

            ataque2 = pontostu2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 5:

            // COMPARANDO OS ATRIBUTOS: DENSIDADE POPULACIONAL

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade1, densidade1);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade2, densidade2);

   

            ataque1 = densidade1;

            ataque2 = densidade2;

            resultado2 = ataque1 < ataque2 ? 1 : 0;

           

            break;

            case 6:

            // COMPARANDO OS ATRIBUTOS: PIB PER CAPITA ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB PER CAPITA)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade1, percapita1);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade2, percapita2);

   

            ataque1 = percapita1;

            ataque2 = percapita2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 7:

            // COMPARANDO O SUPER PODER ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: COMPARANDO TODOS OS ATRIBUTOS (SUPER PODER!))\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", cidade1, SuperPoder1);

            printf("Carta 2 - %s (RJ): %.2f\n", cidade2, SuperPoder2);

   

            ataque1 = SuperPoder1;

            ataque2 = SuperPoder2;

            resultado2 = SuperPoder1 > SuperPoder2 ? 1 : 0;

            break;

            default:

            printf("Opção Inválida, Tente novamente!\n");

        }

        if (resultado1 && resultado2){

            printf("\n\nParabéns, você ganhou!\n\n");

        } else if(resultado1 != resultado2){

            printf("Houve um empate!\n");

        } else {

            printf("Infelizmente, você perdeu!");

        }

    }

    return 0;

}
