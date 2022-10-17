#include <stdio.h>
#include <conio.h>
#include <process.h>

void main()
{
    int i,j,r,c;
    char name[10],command[20];
    FILE *fp;
//clrscr();
    printf("Enter any file-name:");
    scanf("%s",name);
    fp=fopen(name,"w");
    if(fp==NULL)
    {
        printf("Unable to open File...");
    }
    printf("Plz. enter the row(height) and col(with) of the rectangle: ");
    scanf("%d%d",&r,&c);
    fprintf(fp,"User entered Height(ROW)=%d and Width(COL)=%d\n\n",r,c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==1 && i==1)
            {
                fprintf(fp,"+");
            }
            else if(j==c && i==1)
            {
                fprintf(fp,"+");
            }
            else if(j==1 && i==r)
            {
                fprintf(fp,"+");
            }
            else if(j==c && i==r)
            {
                fprintf(fp,"+");
            }
            else if(i>1 && i<r)
            {
                if(j>1 && j<c)
                {fprintf(fp," ");  }
                else // when j==1 OR j==c
                {fprintf(fp,"|");  }
            }

            else
                fprintf(fp,"-");
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
    printf("Output saved to file: %s",name);
    printf("\nPress any key to open and print the file...");
    sprintf(command,"start %s",name); // start command to start default viewer of the system
    system(command);
    sprintf(command,"NOTEPAD /p %s",name);
    system(command);
    getch();
}