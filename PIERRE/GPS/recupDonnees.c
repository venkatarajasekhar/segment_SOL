#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE* fichier = NULL;
	char *donnees;
	char donneesGPS[6][30] = {""};
	int i;
	
	while(1)
	{
		/*---ouverture du fichier contenant la trame GPS---*/
		fichier = fopen("donneeIHM.txt", "r");
		//si fichier pointe bien sur un fichier
		if(fichier != NULL)
		{
			//récupération de la trame écrite dans le fichier
			fgets(donneesGPS[0], 100, fichier);
			//affichage de la trame reçue
			//printf("Données reçues : %s\n", donneesGPS[0]);
			//stockage des différentes données de la trame dans le tableau "donneesGPS"
			for(i=1;i<5;i++)
			{
				if(i == 1)
					donnees = strtok(donneesGPS[0], ",");
				else
					donnees = strtok(NULL, ",");
				strcat(donneesGPS[i], donnees);
			}
			//fermeture du fichier
			fclose(fichier);
		}
		/*---ouverture du fichier contenant le niveau de la batterie---*/
		fichier = fopen("niveauBatterie.txt", "r");
		if(fichier != NULL)
		{
			fgets(donneesGPS[5], 3, fichier);
			fclose(fichier);
		}
		/*---écriture des données dans un fichier dataIHM.txt---*/
		fichier = fopen("/home/pierre/Documents/GPS/testQT/lightmaps/dataIHM.txt", "w");
		if(fichier != NULL)
		{
			fprintf(fichier, "%s\n%s\n%s\n", donneesGPS[1], donneesGPS[2], donneesGPS[3]);	
			fclose(fichier);
		}
		/*---affichage des données---*/
		/*printf("Latitude : %s\n", donneesGPS[1]);
		printf("Longitude : %s\n", donneesGPS[2]);
		printf("Heure : %s\n", donneesGPS[3]);
		printf("Nombre de satellites : %s\n", donneesGPS[4]);
		printf("Niveau de batterie : %s\n", donneesGPS[5]);
		printf("\n");*/
		/*---RàZ des buffers---*/
		for(i=0;i<6;i++)
			strcpy(donneesGPS[i], "");
		/*---attente---*/
		//sleep(1);
	}
	
	return 0;
}
