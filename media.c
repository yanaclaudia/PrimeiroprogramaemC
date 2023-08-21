#include <stdio.h>

int main(void) 
{
  float n1;
  float n2;
  float media;

  printf("\n\n Digite suas notas");
  scanf("%f", &n1);
  scanf("%f", &n2);

  media = (n1 + n2)/ 2;

  printf ("\n\n -> Sua media é: %f\n", media);
  return 0;
}