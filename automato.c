#define _REJEITA 0
#define _ACEITA 1


char PALAVRA[] = {"1,2,3"};
char ERRO[] = {"ERRO !"};

#define TAM_PALAVRA 5

int scanner(PALAVRA) {
    char c;
    for (int i = 0; i < TAM_PALAVRA; i++) {
        c = PALAVRA[i];
    }

    q0:
        if (c==0) goto q8;
        else if (c=="+" || c=="-") goto q1;
        else if (c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8 || c==9) goto q3;
        else if ("FIM DA PALAVRA") return (_ACEITA);
        else return (_REJEITA);
    q1:
        if (c==1 || c==2 || c==3 || c==4 || c=5 || c==6 || c==7 || c==8 || c==9) goto q2:
        else if ("FIM DA PALAVRA") return (_ACEITA);
        else return (_REJEITA);
    q2:
        if (c==0 || c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8 || c==9) goto q2;
        else if (c==",") goto q6;
        else if ("FIM DA PALAVRA") return (_ACEITA);
        else return (_REJEITA);
    q3:
        if (c==0 || c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8 || c==9) goto q3;
        else if (c==",") goto q4;
        else if ("FIM DA PALAVRA") return (_ACEITA);
        else return (_REJEITA);
    q4:
        if (c==0 || c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8 || c==9) goto q5;
        else if ("FIM DA PALAVRA") return (_ACEITA);
        else return (_REJEITA);
    q5:
        if (c==0 || c==1 || c==2 || c==3 || c==4 || c==5 || c==6 || c==7 || c==8 || c==9) goto q5;
        else if ("FIM DA PALAVRA") return (_ACEITA);
        else return (_REJEITA);
    q6:
        
    q7:

    q8:

    q10:

    q11:

}