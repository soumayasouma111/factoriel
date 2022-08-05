#include<stdio.h>
long factorielle(int n)
{
    int fac=1,i;
  if (n == 0)
    return 1;
  else
   for ( i = 1; i <= n; i++)
{
    fac = fac * i;
}
    return fac;
}
 
int main()
{
  int nbr;
 
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);
 
  if (nbr < 0)
    printf("La factorielle des entiers négatifs n'est pas définie.\n");
  else
  {
    printf("%d! = %ld\n", nbr, factorielle(nbr));
  }
 
  return 0;
}