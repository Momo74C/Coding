#include  <stdio.h>
#include  <limits.h>
#include  <time.h>
#define N 2

int sordina(int v[]);
int caricaRand(int v[]);
int main()
{
    int vet[N],r,ris;
    srand(time(NULL));
    r=caricaRand(vet);
    ris=ordina(vet);
}
int caricaRand(int v[])
{
    
     for (int i=0; i<N; i++)
	 {
        v[i] = rand() % 91 + 10;
     }
}
void sordina(int v[])
{
  int i, j, aux;
  for(i=0; i<N-1; i++)
  {
    for(j=i+1; j<N; j++)
	{
      if(v[i] > v[j])
	  {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }
}