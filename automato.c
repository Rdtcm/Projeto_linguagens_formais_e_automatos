#include <stdio.h>

#define _REJEITA 0
#define _ACEITA 1


char PALAVRA[] = {"1,2,3"};
char ERRO[] = {"ERRO !"};

#define TAM_PALAVRA 5

int scanner(char *palavra) {
    char *p = palavra;
    char c;

    if (*p == '\0') return _ACEITA;
    c = *p++;
    goto q0;

q0:
    if (c == '0') goto q8;
    else if (c == '+' || c == '-') goto q1;
    else if (c >= '1' && c <= '9') goto q3;
    else return _REJEITA;

q1:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '1' && c <= '9') goto q2;
    else return _REJEITA;

q2:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q2;
    else if (c == ',') goto q6;
    else return _REJEITA;

q3:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q3;
    else if (c == ',') goto q4;
    else return _REJEITA;

q4:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q5;
    else return _REJEITA;

q5:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q5;
    else return _REJEITA;

q6:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q7;
    else return _REJEITA;

q7:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q7;
    else return _REJEITA;

q8:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c == ',') goto q10;
    else return _REJEITA;

q10:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q11;
    else return _REJEITA;

q11:
    if (*p == '\0') return _ACEITA;
    c = *p++;
    if (c >= '0' && c <= '9') goto q11;
    else return _REJEITA;

    return _REJEITA; // se sair do loop sem aceitar
}

// int main() {
//     int resultado = scanner(PALAVRA);
//     if (resultado == _ACEITA) {
//         printf("Palavra aceita\n");
//     } else {
//         printf("Palavra rejeitada\n");
//     }
//     return 0;
// }