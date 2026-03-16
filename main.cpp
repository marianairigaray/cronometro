#include <iostream>
#include "bugiganga.cpp"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 11
#define LIN 9
#define COL 57
#define LINF 14
#define COLF 12
#define str 16

using namespace std;

int  num[TAM][TAM]={0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,
                    0,0,2,1,1,1,1,1,1,0,0,
                    0,0,1,1,2,2,2,1,1,0,0,
                    0,0,1,1,1,1,1,1,1,0,0,
                    0,0,2,2,2,2,2,1,1,0,0,
                    0,0,0,0,0,0,0,1,1,0,0,
                    0,0,0,0,0,0,0,1,1,0,0,
                    0,0,0,0,0,0,0,2,2,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,};
//4312
int mari[LIN][COL]={1,0,1,0,1,1,2,0,1,1,0,0,1,1,1,0,2,1,1,1,1,2,2,2,1,1,1,1,2,0,0,2,1,1,1,1,1,1,1,0,2,1,1,1,1,1,1,1,2,0,1,1,1,1,1,1,1,
                    1,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,2,1,1,1,3,3,1,1,1,0,1,1,1,3,3,3,1,1,1,0,3,3,1,1,1,3,3,
                    3,1,1,0,1,1,1,0,0,1,0,0,2,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,
                    0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,
                    0,0,1,0,1,1,3,0,1,1,1,0,1,1,1,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,3,0,0,0,1,1,1,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,1,1,3,3,3,1,1,1,0,1,1,1,3,3,1,1,1,2,0,0,0,1,1,1,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,2,2,1,1,1,2,2,
                    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,
                    };

int fogo[LINF][COLF]={0,0,0,0,0,0,0,0,0,0,0,0,
                      0,0,0,1,0,0,0,0,0,0,0,0,
                      0,0,0,0,0,0,0,0,1,0,0,0,
                      7,7,7,0,1,1,1,1,0,0,0,0,
                      1,7,7,1,1,1,1,0,0,0,0,0,
                      7,7,7,1,1,1,1,0,0,0,0,0,
                      7,1,1,1,1,1,1,0,0,0,0,0,
                      7,1,1,1,1,1,1,1,0,0,0,0,
                      1,1,1,1,1,1,1,1,0,0,0,0,
                      1,1,1,2,1,2,1,1,1,0,0,0,
                      1,1,1,1,1,1,1,1,1,1,1,0,
                      1,1,1,2,2,2,2,2,1,1,1,0,
                      0,1,1,1,1,1,1,1,1,1,1,0,
                      0,0,1,1,1,1,1,1,1,1,0,0};

int bomba[12][19]={0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
                   0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,
                   0,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,
                   0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,
                   0,0,0,2,2,2,2,2,0,0,0,0,0,0,0,0,1,0,0,
                   0,0,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,1,1,
                   0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,
                   2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,
                   2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,
                   2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,
                   0,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,
                   0,0,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,};

FILE *fp; //fazer uma funcao pra cada

//prototipos de funcoes
void mostramari();
void mostrafogo(int m, int corF);
void mostranum(int a, int b, int cn, int cp);
void mostrabomba();
void zeranum();
void zeramari();
void zerafogo();
void desenhanum(int D);
void desenhafogo(int A);
void caminha(int cf);
void bf();
void bomb();
int arq(int cem, int dez, int uni, int cd, int cp, int cf);
int le_num();
int le_digito();
int le_painel();
int le_fundo();
DOS_COLORS colormenu(int nc);
string name_color(int nc);

int main()
{
   int a=83, b=10, c=71, d=10, e=59, f=10, r=0, n, tecla, cp, cn, escolha, cf, ncn;
   DOS_COLORS cor, corF;

    system("color F0");

   cf=16;
   cn=5;
   gotoxy(60, 22);
   printf("clique em qualquer tecla para comecar...");
   fflush(stdin);
   getche();
   system("cls");

   mostramari();
   for(int i=0; i<5; i++){
    for(int j=3; j>=0; j--){
        zerafogo();
        desenhafogo(j);
        mostrafogo(104, cf);
        Sleep(100);}}
    zeramari();
    mostramari();


    for(int cem=9; cem>=0; cem--){
        for(int dez=9; dez>=0; dez--){
            for(int uni=9; uni>=0; uni--){

                if(le_num()==0){
                    cem=1;
                    dez=0;
                    uni=0;
                    cn = 5;
                    cp=16;
                    cf=16;
                corF = colormenu(cf);
                backcolor(corF);
                system("cls");
                }

                if(cem==9 && dez==9 && uni==9){

                    cem=le_num()/100;
                    dez=(le_num()%100)/10;
                    uni=(le_num()%100)%10;
                    cn = le_digito();
                    cp = le_painel();
                    cf = le_fundo();
                corF = colormenu(cf);
                backcolor(corF);
                system("cls");
                }

                arq(cem, dez, uni, cn, cp, cf);

                zeranum();
                desenhanum(uni);
                mostranum(a, b, cn, cp);
                zeranum();
                desenhanum(dez);
                mostranum(c, d, cn, cp);
                zeranum();
                desenhanum(cem);
                mostranum(e, f, cn, cp);
                zerafogo();
                desenhafogo(uni);
                mostrafogo(104, cf);
                Sleep(1000);

                textcolor(PRETO);
                gotoxy(62, 25);
                printf("Clique na tecla...\n");
                gotoxy(62, 26);
                printf("- ESPACO para pausar\n");
                gotoxy(62, 27);
                printf("- n para escolher um novo numero\n");
                gotoxy(62, 28);
                printf("- c para abrir o menu de cores\n");
                gotoxy(62, 29);
                printf("- s para sair\n");
                gotoxy(62, 30);
                if(kbhit()){
                    tecla=getch();
                    if(tecla==32){
                        gotoxy(74,22);
                        printf("Pause");
                        fflush(stdin); //stdion dispositivo de entrada padrao
                        getche();
                        gotoxy(74,22);
                        printf("         ");
                        }
                    if(tecla=='n'){
                        gotoxy(64,22);
                        printf("Digite um novo numero: ");
                        scanf("%i", &n);
                        gotoxy(44,22);
                        printf("                                                                       ");
                        gotoxy(0,22);
                        printf("                                                                       ");
                        gotoxy(0,23);
                        printf("                                                                       ");
                        gotoxy(0,24);
                        printf("                                                                       ");

                        cem=n/100;
                        dez=(n%100)/10;
                        uni=(n%100)%10+1;
                    }
                    if(tecla=='s'){
                        cem=1;
                        dez=0;
                        uni=0;
                        cn=5;
                        cp=16;
                        cf=16;
                        le_digito();
                        le_painel();
                        le_fundo();
                        arq(cem, dez, uni, cn, cp, cf);
                        exit(0);
                    }

                    if(tecla=='c'){
                        printf("\nCORES:\n1 -> Preto\n2 -> Azul\n3 -> Verde\n4 -> Ciano\n5 -> Vermelho\n6 -> Magenta\n7 -> Marron\n8 -> Cinza Claro\n9 -> Cinza Forte\n10 -> Azul Fraco\n11 -> Verde Fraco\n12 -> Ciano Fraco\n13 -> Vermelho Fraco\n14 -> Magenta Fraco\n15 -> Amarelo\n16 -> Branco\n");
                        gotoxy(62, 30);
                        printf("Escolha o que deseja alterar:\n");
                        gotoxy(62, 31);
                        printf("1 - Cor do digito\n");
                        gotoxy(62, 32);
                        printf("2 - Cor do painel\n");
                        gotoxy(62, 33);
                        printf("3 - Cor do fundo\n");
                        gotoxy(62, 34);
                        scanf("%i", &escolha);
                        gotoxy(62, 30);
                        printf("                               ");
                        gotoxy(62, 31);
                        printf("                               ");
                        gotoxy(62, 32);
                        printf("                               ");
                        gotoxy(62, 33);
                        printf("                               ");
                        gotoxy(62, 34);
                        printf("                               ");
                        if(escolha == 1){
                            gotoxy(62, 30);
                            printf("digite a cor do digito: ");
                            scanf("%i", &cn);
                            cor = colormenu(cn);
                            textcolor(cor);
                            gotoxy(62, 30);
                            printf("                               ");
                        }else if(escolha == 2){
                            gotoxy(62, 30);
                            printf("digite a cor do painel: ");
                            scanf("%i", &cp);
                            cor = colormenu(cp);
                            textcolor(cor);
                            gotoxy(62, 30);
                            printf("                               ");
                        }else if(escolha == 3){
                            gotoxy(62, 30);
                            printf("digite a cor do fundo: ");
                            scanf("%i", &cf);
                            gotoxy(62, 30);
                            printf("                               ");
                            corF = colormenu(cf);
                            backcolor(corF);
                            system("cls");
                        }
                        gotoxy(0,29);
                        printf("\n            \n           \n          \n          \n           \n              \n             \n                \n                 \n                 \n                \n                 \n                 \n                  \n                     \n                    \n             \n             \n");
                    }
                }
        }}}


    mostrabomba();
    caminha(cf);
    bf();
    bomb();
    Sleep(3);
    system("cls");
    system("color 40");
    return 0;
}

void mostramari(){
int i, j;

    for(i=0; i<COL; i++){
        for(j=0; j<LIN; j++){
            gotoxy(i+50, j+12);
            if(mari[j][i]==1){
                textcolor(PRETO);
                printf("%c", 219);
            }else if(mari[j][i]==2){
                printf("%c", 220);
            }else if(mari[j][i]==3){
                printf("%c", 223);
            }else if(mari[j][i]==5){
            textcolor(WHITE);
            printf("%c", 219);
            }
        }
    }
}

void mostrafogo(int m, int corF){
int i, j;
DOS_COLORS cor;
cor = colormenu(corF);

    for(i=0; i<COLF; i++){
        for(j=0; j<LINF; j++){
            gotoxy(i+m, j+23);
            if(fogo[j][i]==1){
                textcolor(VERMELHO);
                printf("%c", 219);
            }else if(fogo[j][i]==4){
                printf("%c", 223);
            }else if(fogo[j][i]==2){
                textcolor(PRETO);
                printf("%c", 219);
            }else if(fogo[j][i]==0){
                textcolor(cor);
                printf("%c", 219);
            }else if(fogo[j][i]==5){
                textcolor(cor);
                printf("%c", 219);}
        }
    }
}

void mostranum(int a, int b, int cn, int cp){
int i, j;
DOS_COLORS corN, corP;
corN = colormenu(cn);
corP = colormenu(cp);

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            gotoxy(i+a, j+b);
            if(num[j][i]==1){
                textcolor(corN);
                printf("%c", 219);
            }else if(num[j][i]==0){
                textcolor(corP);
                printf("%c", 219);
            }else if(num[j][i]==2){
                textcolor(PRETO);
                printf("%c", 219);
            }
        }
    }
}

void mostrabomba(){
int i, j;

        for(i=0; i<19; i++){
        for(j=0; j<12; j++){
            gotoxy(i+8, j+25);
            if(bomba[j][i]==1){
                textcolor(DARK_GRAY);
                printf("%c", 219);
            }else if(bomba[j][i]==2){
                textcolor(PRETO);
                printf("%c", 219);
            }
        }}
}

void zeranum(){

   for(int i=0;i<TAM;i++)
     for(int j=0;j<TAM;j++)
        num[j][i] = 0;
}

void zeramari(){
int i, j;

   for(i=0;i<COL;i++)
     for(j=0;j<LIN;j++)
        mari[j][i] = 5;
}

void zerafogo(){
int i, j;

    for(i=0; i<COLF; i++){
      for(j=0; j<=2; j++){
        fogo[j][i] = 5;
      }}
        fogo[4][0] = 5;
        fogo[3][1] = 5;
}

void desenhanum(int D){

    //J = LINHA, I = COLUNA

    switch(D){
        case 9:
            for(int i=2;i<9;i++){
                num[2][i] = 1;
                num[3][i] = 2;
                num[4][i] = 1;
                num[5][i] = 2;
                num[7][i] = 1;
                num[8][i] = 2;}
            for(int j=2; j<5; j++){
                num[j][2]=1;
                num[j][3]=1;}
            for(int j=2; j<8; j++){
                num[j][7]=1;
                num[j][8]=1;}
            num[8][7]=2;
            num[8][8]=2;
            break;
        case 8:
            for(int i=2;i<9;i++){
                num[2][i] = 1;
                num[3][i] = 2;
                num[4][i] = 1;
                num[5][i] = 2;
                num[7][i] = 1;
                num[8][i] = 2;}
           for(int j=3; j<8; j++){
                num[j][2] = 1;
                num[j][3] = 1;
                num[j][7] = 1;
                num[j][8] = 1;}
            break;
        case 7:
            for(int i=2; i<9; i++){
                num[2][i]=1;
                num[3][i]=2;}
            for(int j=2; j<8; j++){
                num[j][7]=1;
                num[j][8]=1;}
            num[8][7]=2;
            num[8][8]=2;
            break;
        case 6:
            for(int i=2;i<9;i++){
                num[2][i] = 1;
                num[3][i] = 2;
                num[4][i] = 1;
                num[5][i] = 2;
                num[7][i] = 1;
                num[8][i] = 2;}
            for(int j=3; j<8; j++){
                num[j][2]=1;
                num[j][3]=1;}
            for(int j=4; j<8; j++){
                num[j][7]=1;
                num[j][8]=1;}
            break;
        case 5:
            for(int i=2; i<9; i++){
                num[2][i] = 1;
                num[3][i] = 2;
                num[4][i] = 1;
                num[5][i] = 2;
                num[7][i] = 1;
                num[8][i] = 2;}
            for(int j=3; j<5; j++){
                num[j][2]=1;
                num[j][3]=1;}
            for(int j=4; j<8; j++){
                num[j][7]=1;
                num[j][8]=1;}
            break;
        case 4:
            for(int i=2; i<9; i++){
                num[4][i]=1;
                num[5][i]=2;}
            for(int j=2; j<8; j++){
                num[j][7]=1;
                num[j][8]=1;}
                num[8][7]=2;
                num[8][8]=2;
            for(int j=2; j<5; j++){
                num[j][2]=1;
                num[j][3]=1;}
            break;
        case 3:
            for(int i=2; i<9; i++){
                num[2][i]=1;
                num[3][i]=2;
                num[5][i]=1;
                num[6][i]=2;
                num[7][i]=1;
                num[8][i]=2;}
            for(int j=3; j<8; j++){
                num[j][7]=1;
                num[j][8]=1;}
            break;
        case 2:
            for(int i=2; i<9; i++){
                num[2][i]=1;
                num[3][i]=2;
                num[5][i]=1;
                num[6][i]=2;
                num[7][i]=1;
                num[8][i]=2;}
            for(int j=3; j<6; j++){
                num[j][7]=1;
                num[j][8]=1;}
            for(int j=6; j<8; j++){
                num[j][2]=1;
                num[j][3]=1;}
            break;
        case 1:
            for(int i=2; i<4; i++){
                num[2][i]=1;
                num[3][i]=2;}
            for(int i=4; i<7; i++)
                for(int j=2; j<8; j++)
                    num[j][i]=1;
            for(int i=2; i<9; i++){
                num[7][i]=1;
                num[8][i]=2;}
            break;
        case 0:
           for(int i=2;i<9;i++){
                num[2][i] = 1;
                num[3][i] = 2;
                num[7][i] = 1;
                num[8][i] = 2;}
           for(int j=3; j<8; j++){
                num[j][2] = 1;
                num[j][3] = 1;
                num[j][7] = 1;
                num[j][8] = 1;}
           break;
    }
}

void desenhafogo(int A){
//J = LINHA, I = COLUNA
    switch(A){
        case 4:
            fogo[3][1]=1;
            fogo[0][2]=1;
            fogo[1][9]=1;
        break;
        case 8:
            fogo[4][0]=1;
            fogo[1][3]=1;
            fogo[2][8]=1;
        break;
        case 7:
            fogo[3][1]=1;
            fogo[0][2]=1;
            fogo[1][9]=1;
        break;
        case 5:
            fogo[4][0]=1;
            fogo[1][3]=1;
            fogo[2][8]=1;
        break;
        case 1:
            fogo[4][0]=1;
            fogo[1][3]=1;
            fogo[2][8]=1;
        break;
        case 0:
            fogo[3][1]=1;
            fogo[0][2]=1;
            fogo[1][9]=1;
        break;
    }

}

void caminha(int cf){
int corF=cf;

    for(int c=104; c>=25; c--){
        zerafogo();
        mostrafogo(c, corF);
    }
}

void bf(){

int i, j;
        for(i=19; i>=5; i--){
        for(j=12; j>=0; j--){
            gotoxy(i+8, j+25);
            Sleep(1);
            if(bomba[j][i]==1){
                textcolor(VERMELHO);
                printf("%c", 219);
            }
        }}
}

void bomb(){
int i, j;
        for(i=0; i<19; i++){
        for(j=0; j<12; j++){
            gotoxy(i+8, j+25);
            if(bomba[j][i]==2){
                textcolor(VERMELHO);
                printf("%c", 219);
            }
        }}
}

int arq(int cem, int dez, int uni, int cd, int cp, int cf){
int temp, tempoinicial=100;
string cor_do_digito;
string cor_do_painel;
string cor_do_fundo;
cor_do_digito = name_color(cd);
cor_do_painel = name_color(cp);
cor_do_fundo = name_color(cf);
int tam_cd, tam_cp, tam_cf, cor_dig;

    fp=fopen ("arquivo.txt", "w");
    if (!fp){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }

    temp = (cem*100) + (dez*10) + uni;

    fprintf(fp, "tempo = %i\n", temp);
    fprintf(fp, "tempo inicial = %i\n", tempoinicial);
    fprintf(fp, "cor do digito: ");

    tam_cd = cor_do_digito.size();

    for(int i=0; i<tam_cd; i++){
        fputc(cor_do_digito[i], fp);
    }

    fprintf(fp, "\ncor do painel: ");

    tam_cp = cor_do_painel.size();

    for(int j=0; j<tam_cp; j++){
        fputc(cor_do_painel[j], fp);
    }

    fprintf(fp, "\ncor do fundo: ");

    tam_cf = cor_do_fundo.size();

    for(int k=0; k<tam_cf; k++){
        fputc(cor_do_fundo[k], fp);
    }

    fclose (fp);
}

int le_digito(){
int retorno_c_digito, retorno_tempo;

    fp=fopen ("arquivo.txt", "r");
    if (!fp){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }

    char cor_d[30];
    fscanf(fp, "tempo = %i", &retorno_tempo);
    fscanf(fp, "\ntempo inicial = %i", &retorno_tempo);
    fscanf(fp, "\ncor do digito: %s", &cor_d);

    fclose (fp);

    retorno_c_digito = atoi(cor_d);

    return retorno_c_digito;
}

int le_painel(){
int retorno_c_digito, retorno_c_painel, retorno_tempo;

    fp=fopen ("arquivo.txt", "r");
    if (!fp){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }

    char cor_d[30], cor_p[30];
    fscanf(fp, "tempo = %i", &retorno_tempo);
    fscanf(fp, "\ntempo inicial = %i", &retorno_tempo);
    fscanf(fp, "\ncor do digito: %s", &cor_d);
    fscanf(fp, "\ncor do painel: %s", &cor_p);

    fclose (fp);

    retorno_c_painel = atoi(cor_p);

 return retorno_c_painel;
}

int le_fundo(){
int retorno_c_digito, retorno_c_painel, retorno_c_fundo, retorno_tempo;

    fp=fopen ("arquivo.txt", "r");
    if (!fp){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }

    char cor_d[30], cor_p[30], cor_f[30];
    fscanf(fp, "tempo = %i", &retorno_tempo);
    fscanf(fp, "\ntempo inicial = %i", &retorno_tempo);
    fscanf(fp, "\ncor do digito: %s", &cor_d);
    fscanf(fp, "\ncor do painel: %s", &cor_p);
    fscanf(fp, "\ncor do fundo: %s", &cor_f);

    fclose (fp);

    retorno_c_fundo = atoi(cor_f);

 return retorno_c_fundo;
}

int le_num(){
int retorno_tempo;

   fp=fopen ("arquivo.txt", "r");
    if (!fp){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }

    fscanf(fp, "tempo = %i", &retorno_tempo);

    fclose (fp);

 return retorno_tempo;
}

DOS_COLORS colormenu(int nc){

DOS_COLORS color;

    switch(nc){
        case 1:
            color = PRETO;
            break;
        case 2:
            color = AZUL;
            break;
        case 3:
            color = VERDE;
            break;
        case 4:
            color = CIANO;
            break;
        case 5:
            color = VERMELHO;
            break;
        case 6:
            color = MAGENTA;
            break;
        case 7:
            color = MARRON;
            break;
        case 8:
            color = LIGHT_GRAY;
            break;
        case 9:
            color = DARK_GRAY;
            break;
        case 10:
            color = LIGHT_BLUE;
            break;
        case 11:
            color = LIGHT_GREEN;
            break;
        case 12:
            color = LIGHT_CYAN;
            break;
        case 13:
            color = LIGHT_RED;
            break;
        case 14:
            color = LIGHT_MAGENTA;
            break;
        case 15:
            color = YELLOW;
            break;
        case 16:
            color = WHITE;
            break;
        default:
            color = WHITE;
            break;
    }

    return color;
}

string name_color(int nc){
string cor;

switch(nc){
        case 1:
            cor = "1.Preto";
            break;
        case 2:
            cor = "2.Azul";
            break;
        case 3:
            cor = "3.Verde";
            break;
        case 4:
            cor = "4.Ciano";
            break;
        case 5:
            cor = "5.Vermelho";
            break;
        case 6:
            cor = "6.Magenta";
            break;
        case 7:
            cor = "7.Marrom";
            break;
        case 8:
            cor = "8.Cinza_claro";
            break;
        case 9:
            cor = "9.Cinza_escuro";
            break;
        case 10:
            cor = "10.Azul_claro";
            break;
        case 11:
            cor = "11.Verde_claro";
            break;
        case 12:
            cor = "12.Ciano_claro";
            break;
        case 13:
            cor = "13.Vermelho_claro";
            break;
        case 14:
            cor = "14.Magenta_claro";
            break;
        case 15:
            cor = "15.Amarelo";
            break;
        case 16:
            cor = "16.Branco";
            break;
        default:
            cor = "16.Branco";
            break;
    }

return cor;
}
