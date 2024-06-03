/*ELSHOURBGY MOHAMED 3H 01/02/2024  VETTORE.FUN.C */
#include <stdio.h>

#define N 10
void caricaVettore(int v[]);
void stampaVettore(int v[]);
void chiediVettore(int v[]);
int ricercaelemento(int v[], int x);
void InvertiAltroVettore(int v1[], int v2[]);
void copiaDoppioAltroVettore(int v1[], int v2[]);
void copiaPari(int v1[], int v2[]);
int trovaMax(int v[]);
int main()
{
	int v2[N];
	int v1[N];
	int v[N];
	int x;
	int x2;
    trovaMax(v);
	copiaPari(v1,v2);
	ricercaelemento(v,x);
	caricaVettore(v);
	stampaVettore(v);

}
void chiediVettore(int v[])
{
	for(int i=0;i<N;i++)
	{
		printf("inserisci un numero\n");
		scanf("%d", &v[i]);
	}
}
void caricaVettore(int v[])
{
	for(int i=0;i<N;i++)
	{
		v[i]=4;
	}
}
void stampaVettore(int v[])
{
	for(int i=0;i<N;i++)
	{
		printf("%d\t", v[i]);
	}

}
int ricercaelemento(int v[], int x) {
    for (int i = 0; i <N; ++i) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}
void InvertiAltroVettore(int v1[], int v2[]) {
    int i, j;
    for (i = 0, j = N - 1; i < N; ++i, --j) {
        v2[j] = v1[i];
    }
}
void copiaDoppioAltroVettore(int v1[], int v2[])
{
	for(int i=0,j=0;i<N;i++)
	{
		v2[j]=v1[i]*2;
		j++;
	}
}
void copiaPari(int v1[], int v2[]) {
    int x = 0;
    int x2 = 0;

    while (v1[x] != 0) {

        if (v1[x] % 2 == 0) {

            v2[x2] = v1[x];
            x2++;
        }
        x++;
    }
}
int trovaMax(int v[]) {
    int max = v[0];


    for (int i = 1; v[i] != 0; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    return max;
}
int trovaIndiceDelMax(int v[]) {
    int max = v[0];
    int x = 0; // Indice del massimo


    for (int i = 1; v[i] != 0; i++) {
        if (v[i] > max) {
            max = v[i];
            x = i;
        }
    }

    return x;
}

