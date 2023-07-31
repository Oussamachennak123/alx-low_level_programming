
0x07. C - Encore plus de pointeurs, de tableaux et de cordes
C
 Par: Julien Barbier
  Poids: 1
   Le projet commencera 31 juillet 2023 4:00 AM, doit se terminer par 1er août 2023 4:00 AM
    Checker était Libéré à 31 juillet 2023 10:00 AM
     Une révision automatique sera lancée à la date limite.
     Concepts
     Pour ce projet, nous nous attendons à ce que vous examiniez ce concept:

     Pointeurs et tableaux


     Ressources
     Lire ou regarder:

     C - Pointer à Pointer
     C Pointeur à Pointer avec exemple
     Arrays multidimensionnels en C
     Des tableaux bidimensionnels (2D) en programmation C avec exemple
     Objectifs d'apprentissage
     À la fin de ce projet, vous devriez être en mesure de expliquer à quiconque, sans l'aide de Google:

     Général
     Qu'est-ce que les pointeurs vers les pointeurs et comment les utiliser
     Qu'est-ce que les tableaux multidimensionnels et comment les utiliser
     Quelles sont les fonctions de bibliothèque standard C les plus courantes pour manipuler les chaînes
     Droit d'auteur - plagiarisme
     Vous êtes chargé de trouver des solutions pour les tâches ci-dessous vous-même pour atteindre les objectifs d'apprentissage ci-dessus.
     Vous ne pourrez pas atteindre les objectifs de ce projet ou de tout projet suivant en copiant et en colleant le travail de quelqu'un d'autre.
     Vous n'êtes pas autorisé à publier un contenu de ce projet.
     Toute forme de plagiarisme est strictement interdite et entraînera le retrait du programme.
     Exigences
     Général
     Editeurs autorisés: vi, vim, emacs
     Tous vos fichiers seront compilés sur Ubuntu 20.04 LTS en utilisant gcc, en utilisant les options -Wall -Werror -Wextra -pedantic -std=gnu89
     Tous vos fichiers devraient se terminer par une nouvelle ligne
     A README.md fichier, à la racine du dossier du projet est obligatoire
     Votre code devrait utiliser le Betty style. Il sera vérifié en utilisant betty-style.pl et betty-doc.pl
     Vous n'êtes pas autorisé à utiliser des variables mondiales
     Pas plus de 5 fonctions par fichier
     Vous n'êtes pas autorisé à utiliser la bibliothèque standard. Toute utilisation de fonctions comme printf, puts, etc. est interdit
     Vous êtes autorisé à utiliser _putchar
     Vous n'avez pas à pousser _putchar.c, nous allons utiliser notre fichier. Si vous le faites, il n'est pas pris en compte
     Dans les exemples suivants, le main.c Les fichiers sont présentés à titre d'exemples. Vous pouvez les utiliser pour tester vos fonctions, mais vous n'avez pas à les pousser à votre repo (si vous le faites, nous ne les prendrons pas en compte). Nous utiliserons notre propre main.c fichiers à la compilation. Notre main.c les fichiers peuvent être différents de ceux présentés dans les exemples
     Les prototypes de toutes vos fonctions et le prototype de la fonction _putchar doit être inclus dans votre fichier d'en-tête appelé main.h
     N'oubliez pas de pousser votre fichier d'en-tête
     Plus d'info
     Vous n'avez pas besoin d'en apprendre davantage sur les pointeurs vers les fonctions, les réseaux de structures, malloc et free - encore.

     Questions de Quiz
     Super ! Vous avez terminé le quiz avec succès ! Continuez ! (Afficher le quiz)
	Tâches
	0. Memset
	obligatoire
	Écrivez une fonction qui remplit la mémoire d'un octet constant.

	Prototype: char *_memset(char *s, char b, unsigned int n);
	La _memset() fonction remplit la première n octets de la zone de mémoire pointés par s avec le octet constant b
	Renvoie un pointeur vers la zone de mémoire s
	FYI: La bibliothèque standard fournit une fonction similaire: memset. courir man memset pour en savoir plus.

	julien@ubuntu:~/0x07$ cat 0-main.c
#include "main.h"
#include <stdio.h>

	/**
	 *  * simple_print_buffer - prints buffer in hexa
	 *   * @buffer: the address of memory to print
	 *    * @size: the size of the memory to print
	 *     *
	 *      * Return: Nothing.
	 *       */
	void simple_print_buffer(char *buffer, unsigned int size)
{
	        unsigned int i;

		        i = 0;
			        while (i < size)
					        {
							                if (i % 10)
										                {
													                        printf(" ");
																                }
									                if (!(i % 10) && i)
												                {
															                        printf("\n");
																		                }
											                printf("0x%02x", buffer[i]);
													                i++;
															        }
				        printf("\n");
}

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char buffer[98] = {0x00};

	        simple_print_buffer(buffer, 98);
		    _memset(buffer, 0x01, 95);
		        printf("-------------------------------------------------\n");
			    simple_print_buffer(buffer, 98);    
			        return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/0x07$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
Repo:

dépôt GitHub: alx-low_level_programming
Annuaire: 0x07-pointers_arrays_strings
Fichier: 0-memset.c
   
1. memcpy
obligatoire
Écrivez une fonction qui copie la zone de mémoire.

Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
La _memcpy() copies de fonction n octets de la zone de mémoire src à la zone de mémoire dest
Renvoie un pointeur à dest
FYI: La bibliothèque standard fournit une fonction similaire: memcpy. courir man memcpy pour en savoir plus.

julien@ubuntu:~/0x07$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 *  * simple_print_buffer - prints buffer in hexa
 *   * @buffer: the address of memory to print
 *    * @size: the size of the memory to print
 *     *
 *      * Return: Nothing.
 *       */
void simple_print_buffer(char *buffer, unsigned int size)
{
	    unsigned int i;

	        i = 0;
		    while (i < size)
			        {
					        if (i % 10)
							        {
									            printf(" ");
										            }
						        if (!(i % 10) && i)
								        {
										            printf("\n");
											            }
							        printf("0x%02x", buffer[i]);
								        i++;
									    }
		        printf("\n");
}

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char buffer[98] = {0};
	        char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

		    simple_print_buffer(buffer, 98);
		        _memcpy(buffer + 50, buffer2, 10);
			    printf("-------------------------------------------------\n");
			        simple_print_buffer(buffer, 98);    
				    return (0);
}
