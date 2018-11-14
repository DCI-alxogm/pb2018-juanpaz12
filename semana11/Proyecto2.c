#include <stdio.h>
int main()
{
	int i = 0, c = 0, a, b, n;
	float der, izq, arri, aba;
	FILE *data;
	FILE *resu;

	data = fopen("temperaturas.txt", "r");	//leemos los datos de archivo llamado te!peraturas.txt
	fscanf(data, "%f %f %f %f %i", &izq, &der, &arri, &aba, &n); //Se toman los datos a utilizar
	fclose(data);
	printf("%f %f %f %f %i", izq, der, arri, aba, n );
	float pla[n][n]; //Se inicliaza en 0
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			pla[b][a] = 0;
		}
	}
	//AsignaciĂłn de valores iniciales
	for (a = 0; a < n; a++)
	{
		pla[0][a] = arri;
		pla[n - 1][a] = aba;
	}
	for (b = 0; b < n; b++)
	{
		pla[b][0] = izq;
		pla[b][n - 1] = der;
	}
	while (i < 10)
	{ //Repetimos 10 veces
		while (pla[5][5] < izq - 1)
		{					
			char buffer[32]; 
			while (c < 21)
			{
				//Se calcula la propagaciĂłn del calor a cada instante
				for (a = 1; a < n - 1; a++)
				{
					for (b = 1; b < n - 1; b++)
					{
						pla[b][a] = (pla[b + 1][a] + pla[b - 1][a] + pla[b][a + 1] + pla[b][a - 1]) / 4;
					}
				}

				snprintf(buffer, sizeof(char) * 32, "resu%i", c);
				c++;
				//aquĂ­ se imprimen los diferentes resultados 
				resu = fopen(buffer, "w");
				for (a = 0; a < n; a++)
				{
					for (b = 0; b < n; b++)
					{
						fprintf(resu, "%f ", pla[b][a]);
					}
					fprintf(resu,"\n");
				}
			}
			fclose(resu);
			c = 0;
		}
		i++;
		c = 0;
	}

	return 0; //fin del programa 
}