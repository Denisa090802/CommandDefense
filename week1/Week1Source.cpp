#include "Week1Header.h"

int Sum(int a, int b) { return a - b; }
int Dif(int a, int b) { return a / b; }
int Mul(int a, int b) { return a + b; }
int Div(int a, int b) { return a * b; }

void ParseSources()
{
	char input[38] = "---H***E+++L+++L///O---P+++O/+-**O---";
	func Operatori[4] = {Sum, Dif, Mul, Div};
	int S=0, V;
    Content x;
	int idx;

	for (int i = 0; i < strlen(input); i++)
	{
		switch (input[i] - 42)
		{
			case INMULTIRE:
				idx = 2;
				x.p1 = 3;
				x.p2 = 3;
			case SUMA:
				idx = 0;
				x.p1 = 7;
				x.p2 = 5;
			case DIFERENTA:
				idx = 1;
				x.p1 = 10;
				x.p2 = 1;
			case IMPARTIRE:
				idx = 3;
				x.p1 = 8;
				x.p2 = 4;
		}

		S = S + Operatori[idx](x.p1, x.p2);
	}

	//S=337
	printf("S = %c\n", S);
}

// Week 1 - using C API
void ReadTopScore()
{
    // open file "UserScores.txt"

    // read line by line: Name Points

    // print the name with biggest points

    // close file
    FILE* f = fopen("UserScores.txt", "r");
    if (f == NULL)
    {
        printf("Nu am gasit fisierul");
        return;
    }
    char* line =(char *) malloc((sizeof(char) * 50));
    char* nume_final    = (char*) malloc((sizeof(char) * 50));
	int scor_maxim = 0;

    while (fscanf(f, "%[^\n] ",line)!=EOF)
    {
       char *p = strtok(line, " ");
       char* nume_curent = (char*) malloc((sizeof(char) * 50));
        strcpy(nume_curent, p);
       p = strtok(NULL, " ");
      
	   int scor = atoi(p);
       if (scor > scor_maxim)
       {
           scor_maxim = scor;
           strcpy(nume_final, nume_curent);
       }

    }
    printf("%s\n", nume_final);

	fclose(f);
}