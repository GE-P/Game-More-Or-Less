#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int nombreMystere = 0, nombreEntre = 0, comptage = 0, difficulte = 0, MAX = 0, partie = 0;
  const int MIN = 1;

  do
    {

  printf("//////////////////////");
  printf("\n\n Choisissez un niveau de difficulte :\n\n");
  printf("1.Easy : 1-100\n");
  printf("2.Medium : 1-1000\n");
  printf("3.Hard : 1-10000\n\n");
  printf("Quel est votre choix ?");
  scanf("%d", &difficulte);

  if(difficulte == 1)
  {

  //Generation de nombre aleatoire

  srand(time(NULL));
  MAX = 100;
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

  //Boucle du prog qui se repete tant que NM n'est pas trouve

  do
    {
      //On demande le nombre

      comptage++;
      printf("Quel est le nombre ?[E]");
      scanf("%d", &nombreEntre);

      //On compare le nombre entre avec le nombremystere

      if (nombreMystere > nombreEntre)
	printf("C'est plus !\n\n");
      else if (nombreMystere < nombreEntre)
	printf("C'est moins !\n\n");
      else
	printf("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n",comptage);

    } while (nombreEntre != nombreMystere);
  }

  else if(difficulte == 2)

  {

  //Generation de nombre aleatoire2

  srand(time(NULL));
  MAX = 1000;
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

  //Boucle du prog qui se repete tant que NM n'est pas trouve2

  do
    {
      //On demande le nombre2

      comptage++;
      printf("Quel est le nombre ?[M]");
      scanf("%d", &nombreEntre);

      //On compare le nombre entre avec le nombremystere2

      if (nombreMystere > nombreEntre)
	printf("C'est plus !\n\n");
      else if (nombreMystere < nombreEntre)
	printf("C'est moins !\n\n");
      else
	printf("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n",comptage);

    } while (nombreEntre != nombreMystere);
  }

  else if(difficulte == 3)

  {

  //Generation de nombre aleatoire3

  srand(time(NULL));
  MAX = 10000;
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

  //Boucle du prog qui se repete tant que NM n'est pas trouve3

  do
    {
      //On demande le nombre2

      comptage++;
      printf("Quel est le nombre ?[H]");
      scanf("%d", &nombreEntre);

      //On compare le nombre entre avec le nombremystere3

      if (nombreMystere > nombreEntre)
	printf("C'est plus !\n\n");
      else if (nombreMystere < nombreEntre)
	printf("C'est moins !\n\n");
      else
	printf("Bravo, vous avez trouve le nombre mystere en %d coups !\n\n",comptage);

    } while (nombreEntre != nombreMystere);
  }

  printf("\n//////////////////////\n");
  printf("Souhaitez vous recommencer ?\n\n");
  printf("1.Yes\n");
  printf("2.No\n");
  printf("Quel est votre choix ?");
  scanf("%d", &partie);

    } while (partie == 1);



  return 0;

}
