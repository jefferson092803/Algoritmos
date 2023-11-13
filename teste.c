#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para verificar se a placa é válida
int validarPlaca(char *placa) {
    int i;
    // Verifica o formato antigo (LLL-NNNN)
    if (strlen(placa) == 8) {
        for (i = 0; i < 3; i++) {
            if (!isalpha(placa[i]))
                return 0;
        }
        if (placa[3] != '-' || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6]) || !isdigit(placa[7]))
            return 0;
    }
    // Verifica o formato novo (LLLNLNN)
    else if (strlen(placa) == 7) {
        for (i = 0; i < 3; i++) {
            if (!isalpha(placa[i]))
                return 0;
        }
        if (!isalpha(placa[3]) || !isdigit(placa[4]) || !isdigit(placa[5]) || !isdigit(placa[6]))
            return 0;
    }
    else {
        return 0;
    }
    return 1;
}

// Função para verificar se o dia da semana é válido
int validarDia(char *dia) {
    char *diasValidos[] = {"SEGUNDA-FEIRA", "TERCA-FEIRA", "QUARTA-FEIRA", "QUINTA-FEIRA", "SEXTA-FEIRA", "SABADO", "DOMINGO"};
    int i;

    for (i = 0; i < 7; i++) {
        if (strcmp(dia, diasValidos[i]) == 0)
            return 1;
    }
    return 0;
}

// Função principal
int main() {
    char placa[9];
    char dia[20];

    // Entrada de dados
    printf("Digite a placa do veiculo: ");
    scanf("%s", placa);

    // Verifica se a placa é válida
    if (!validarPlaca(placa)) {
        printf("Placa invalida\n");
        return 1;
    }

    // Entrada de dados
    printf("Digite o dia da semana: ");
    scanf("%s", dia);

    // Verifica se o dia da semana é válido
    if (!validarDia(dia)) {
        printf("Dia da semana invalido\n");
        return 1;
    }

    // Verifica se o veículo pode circular no dia especificado
    int ultimoDigito = placa[strlen(placa) - 1] - '0';
    int diaProibido = (ultimoDigito == 0 || ultimoDigito == 1) ? 0
                    : (ultimoDigito == 2 || ultimoDigito == 3) ? 1
                    : (ultimoDigito == 4 || ultimoDigito == 5) ? 2
                    : (ultimoDigito == 6 || ultimoDigito == 7) ? 3
                    : (ultimoDigito == 8 || ultimoDigito == 9) ? 4
                    : -1;

    if ((strcmp(dia, "SEGUNDA-FEIRA") == 0 && diaProibido == 0) ||
        (strcmp(dia, "TERCA-FEIRA") == 0 && diaProibido == 1) ||
        (strcmp(dia, "QUARTA-FEIRA") == 0 && diaProibido == 2) ||
        (strcmp(dia, "QUINTA-FEIRA") == 0 && diaProibido == 3) ||
        (strcmp(dia, "SEXTA-FEIRA") == 0 && diaProibido == 4) ||
        ((strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0) && diaProibido == -1)) {
        printf("Pode circular\n");
    } else {
        printf("Nao pode circular\n");
    }

    return 0;
}
