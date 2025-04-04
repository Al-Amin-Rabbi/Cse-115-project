#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<conio.h>
#include <time.h>
//details of squad from file==alamin
//search player==alamin
//add player==alamin
//delete player==alamin
//edit player==alamin
//best 11==alamin
//details of the best 11==alamin
//special details==alamin
//sajano==alamin
//opening==alamin
void delay(int);
void interact(void);
void squad(int);
void playersDetails(int);
void playerSearch(int);
void addPlayer(int);
void DeletePlayer(int);
void editPlayer(int);
void best11(int);
void special(int);
void detailsOfBest11(int);

typedef struct
{
    char namef[100];
    char namel[100];
    int age;
    double strikeRate;
    int runs;
    int wickets;
    double average;
} players;
int n;
int main()
{
    char userpapon[100],usernannu[100];
    int  passpapon,passnannu;
    int password;
    char username[100];
    int passn;
    char usern[100];
    FILE *num;
    num=fopen("Numbers.txt","r");
    fscanf(num,"%d",&n);
    fclose(num);
    FILE *pass;
    pass=fopen("user_pass.txt","r");
    for (int i=0; i<2; i++)
    {
        if(i==0)
        {
            fscanf(pass,"%s %d",userpapon,&passpapon);
        }
        else if(i==1)
        {
            fscanf(pass,"%s %d",usernannu,&passnannu);
        }
    }
    fclose(pass);
    pass=fopen("user.txt","r");
    fscanf(pass,"%s %d",usern,&passn);
    fclose(pass);
    printf("\t\t\tYou have entered the programme\n");
    printf("LOADING ");
    for(int i=0;i<4;i++)
    {
    delay(1);
    printf(" . ");
    }
    printf("\nBe a new user or The Board President or The Chief Selector\n");
    int z;
    printf("Do you want to be a new user (1/0) :");
    scanf("%d",&z);
    if(z==0)
    {
    printf("The username :");
    scanf("%s",username);
    printf("password :");
    scanf("%d",&password);
    printf("LOADING ");
    for(int i=0;i<4;i++)
    {
    delay(1);
    printf(" . ");
    }
    }
    else if (z==1)
    {
    printf("The username :");
    scanf("%s",username);
    printf("password(must be integers) :");
    scanf("%d",&password);
    pass=fopen("user.txt","w");
    fprintf(pass,"%s %d",username,password);
    fclose(pass);
    pass=fopen("user.txt","r");
    fscanf(pass,"%s %d",usern,&passn);
    fclose(pass);
    }
    if(strcmp(username,userpapon)==0 && password==passpapon)

    {
        int pass;
        pass=passpapon;
        while(1)
        {
            int x;
            printf("\n\t\t\t\tYou have enter to the SL series squad for bangladesh\n");
            printf("\t\t\t___________________________________________________________________");
            printf("\n\t\t\tfor disclaimer if you want to stop the programme press 0\n");
            interact();
            printf("\t\t\tPick what you want to see: ");
            scanf("%d",&x);
            clrscr();
            switch(x)
            {
            case 1:
                squad(n);
                break;

            case 2:
                playersDetails(n);
                break;
            case 3:
                playerSearch(n);
                break;
            case 4:
                addPlayer(n);
                break;
            case 5:
                DeletePlayer(n);
                break;
            case 6:
                editPlayer(n);
                break;
            case 7:
                special(n);
                break;
            case 8:
                best11(n);
                break;
            case 9:
                detailsOfBest11(n);
                break;
            case 0:
                return 0;
                break ;
            }
            if (x==4)
            {
                num=fopen("Numbers.txt","w");
                n++;
                fprintf(num,"%d",n);
                fclose(num);
            }
            else if(x==5)
            {
                num=fopen("Numbers.txt","w");
                n--;
                fprintf(num,"%d",n);
                fclose(num);
            }
        }
    }
    else if(strcmp(username,usernannu)==0 && password==passnannu)
    {
        int pass;
        pass=passnannu;
        while(1)
        {
            int x;
            printf("\n\t\t\t\tYou have enter to the SL series squad for bangladesh\n");
            printf("\t\t\t___________________________________________________________________");
            printf("\n\t\t\tfor disclaimer if you want to stop the programme press 0\n");
            interact();
            printf("\t\t\tPick what you want to see: ");
            scanf("%d",&x);
          //  clrscr();
            switch(x)
            {
            case 1:
                squad(n);
                break;

            case 2:
                playersDetails(n);
                break;
            case 3:
                playerSearch(n);
                break;
            case 4:
                addPlayer(n);
                break;
            case 5:
                printf("blocked\n");
                break;
            case 6:
                editPlayer(n);
                break;
            case 7:
                special(n);
                break;
            case 8:
                best11(n);
                break;
            case 9:
                detailsOfBest11(n);
                break;
            case 0:
                return 0;
                break ;
            }
            if (x==4)
            {
                num=fopen("Numbers.txt","w");
                n++;
                fprintf(num,"%d",n);
                fclose(num);
            }
            else if(x==5)
            {
                num=fopen("Numbers.txt","w");
                n--;
                fprintf(num,"%d",n);
                fclose(num);
            }
        }
    }
    else if(strcmp(username,usern)==0 && password==passn)
        {
        int pass;
        pass=passn;
        while(1)
        {
            int x;
            printf("\n\t\t\t\tYou have enter to the SL series squad for bangladesh\n");
            printf("\t\t\t___________________________________________________________________");
            printf("\n\t\t\tfor disclaimer if you want to stop the programme press 0\n");
            interact();
            printf("\t\t\tPick what you want to see: ");
            scanf("%d",&x);
          //  clrscr();
            switch(x)
            {
            case 1:
                squad(n);
                break;
            case 2:
                playersDetails(n);
                break;
            case 3:
                playerSearch(n);
                break;
            case 4:
                printf("blocked");
                break;
            case 5:
                printf("blocked");
                break;
            case 6:
                printf("blocked");
                break;
            case 7:
                special(n);
                break;
            case 8:
                printf("blocked");
                break;
            case 9:
                detailsOfBest11(n);
                break;
            case 0:
                return 0;
                break ;
            }
            if (x==4)
            {
                num=fopen("Numbers.txt","w");
                n++;
                fprintf(num,"%d",n);
                fclose(num);
            }
            else if(x==5)
            {
                num=fopen("Numbers.txt","w");
                n--;
                fprintf(num,"%d",n);
                fclose(num);
            }
        }
    }
    else
    printf("Wrong password or username");

}
void interact(void)
{
    printf("1.See the squad \n");
    printf("2.Details of the player\n");
    printf("3.Search any player\n");
    printf("4.To add the any player if injury occur\n");
    printf("5.To delete a player from the list because of injury\n");
    printf("6.To edit any player's information from the list\n");
    printf("7.Special details of the players\n");
    printf("8.Select Best 11 for the Match\n");
    printf("9.Details of The Best 11 \n");
}
void squad(int n)
{
    int x=1;
    char name[20][100];
    FILE *ps;
    ps=fopen("Players_name.txt","r");
    for(int i=0; i<n; i++)
    {
        fgets(name[i],100,ps);
    }

    fclose(ps);
    for(int i=0; i<n; i++)
    {
        printf("Player %d :%s ",x,name[i]);
        printf("\n");
        x++;
    }
}
void playersDetails(int n)
{
    players pd[20];
    FILE *pl;
    pl=fopen("players_data.txt","r");
    for(int i=0; i<n; i++)
    {
        fscanf(pl,"%s %s %d %lf %d %d %lf",pd[i].namef,pd[i].namel,&pd[i].age,&pd[i].strikeRate,&pd[i].runs,&pd[i].wickets,&pd[i].average);
    }

    fclose(pl);
    for(int i=0; i<n; i++)
    {
        printf("\t\t\t%s %s\n\t\tAge of the player :%d Years\n\t\tStrike rate of the player :%.2f\n\t\tRuns of the player :%d\n\t\tWickets of the player :%d\n\t\tAverage of the player :%.2f",pd[i].namef,pd[i].namel,pd[i].age,pd[i].strikeRate,pd[i].runs,pd[i].wickets,pd[i].average);
        printf("\n\n\n");
    }

}
void playerSearch(int n)
{
    players pd[20];
    FILE *pl;
    pl=fopen("players_data.txt","r");
    for(int i=0; i<n; i++)
    {
        fscanf(pl,"%s %s %d %lf %d %d %lf",pd[i].namef,pd[i].namel,&pd[i].age,&pd[i].strikeRate,&pd[i].runs,&pd[i].wickets,&pd[i].average);
    }

    fclose(pl);

    char searchf[50];
    char searchl[50];
    int ind;
    int flag=0;
    printf("First Name of The Player :");
    scanf("%s",searchf);
    printf("Last Name of The Player :");
    scanf("%s",searchl);
    for (int i=0; i<n; i++)
    {
        if((strcmp(searchf,pd[i].namef))==0 && ((strcmp(searchl,pd[i].namel))==0))
        {
            ind=i;
            printf("Name of the player :%s %s\nAge of the player :%d Years\nStrike rate of the player :%.2f\nRuns of the player :%d\nWickets of the player :%d\nAverage of the player :%.2f",pd[i].namef,pd[i].namel,pd[i].age,pd[i].strikeRate,pd[i].runs,pd[i].wickets,pd[i].average);
            printf("\n\n");
            flag=1;
        }
    }
    if(flag==0)
        printf("Not found in the squad for SL series\n\n");
}
void addPlayer(int n)
{
        players pd[20];
        FILE *pl;
        pl=fopen("players_data.txt","r");
        for(int i=0; i<n; i++)
        {
            fscanf(pl,"%s %s %d %lf %d %d %lf",pd[i].namef,pd[i].namel,&pd[i].age,&pd[i].strikeRate,&pd[i].runs,&pd[i].wickets,&pd[i].average);
        }

        fclose(pl);
        printf("First Name of The Player :");
        scanf("%s",pd[n].namef);
        printf("\nLast Name of The Player :");
        scanf("%s",pd[n].namel);
        printf("\nAge of the player :");
        scanf("%d",&pd[n].age);
        printf("\nStrike rate of the player :");
        scanf("%lf",&pd[n].strikeRate);
        printf("\nRuns of the player :");
        scanf("%d",&pd[n].runs);
        printf("\nWickets of the player :");
        scanf("%d",&pd[n].wickets);
        printf("\nAverage of the player :");
        scanf("%lf",&pd[n].average);
        n++;
        pl=fopen("players_data.txt","w");
        for(int i=0; i<n; i++)
        {
            fprintf(pl,"%s %s %2d %.2f %d %d %.2f \n",pd[i].namef,pd[i].namel,pd[i].age,pd[i].strikeRate,pd[i].runs,pd[i].wickets,pd[i].average);
        }

        fclose(pl);
}
void DeletePlayer(int n)
{
        players pd[20];
        FILE *pl;
        pl=fopen("players_data.txt","r");
        for(int i=0; i<n; i++)
        {
            fscanf(pl,"%s %s %d %lf %d %d %lf",pd[i].namef,pd[i].namel,&pd[i].age,&pd[i].strikeRate,&pd[i].runs,&pd[i].wickets,&pd[i].average);
        }

        fclose(pl);

        char searchf[50];
        char searchl[50];
        int ind;
        int flag=0;
        printf("First Name of The Player :");
        scanf("%s",searchf);
        printf("Last Name of The Player :");
        scanf("%s",searchl);
        for (int i=0; i<n; i++)
        {
            if((strcmp(searchf,pd[i].namef))==0 && ((strcmp(searchl,pd[i].namel))==0))
            {
                ind=i;
                flag=1;
            }
        }
        if(flag==0)
            printf("Not found in the squad for SL series\n\n");
        for(int i=ind; i<n; i++)
        {
            strcpy(pd[i].namef,pd[i+1].namef);
            strcpy(pd[i].namel,pd[i+1].namel);
            pd[i].age=pd[i+1].age;
            pd[i].strikeRate=pd[i+1].strikeRate;
            pd[i].runs=pd[i+1].runs;
            pd[i].wickets=pd[i+1].wickets;
            pd[i].average=pd[i+1].average;
        }
        n--;
        pl=fopen("players_data.txt","w");
        for(int i=0; i<n; i++)
        {
            fprintf(pl,"%s %s %2d %.2f %d %d %.2f \n",pd[i].namef,pd[i].namel,pd[i].age,pd[i].strikeRate,pd[i].runs,pd[i].wickets,pd[i].average);
        }

        fclose(pl);
}
void editPlayer(int n)
{
        int ind=100;
        int edit;
        players pd[20];
        FILE *pl;
        char searchf[50];
        char searchl[50];
        pl=fopen("players_data.txt","r");
        for(int i=0; i<n; i++)
        {
            fscanf(pl,"%s %s %d %lf %d %d %lf",pd[i].namef,pd[i].namel,&pd[i].age,&pd[i].strikeRate,&pd[i].runs,&pd[i].wickets,&pd[i].average);
        }
        fclose(pl);
        printf("First Name of The Player you want to edit :");
        scanf("%s",searchf);
        printf("Last Name of The Player you want to edit :");
        scanf("%s",searchl);
        for (int i=0; i<n; i++)
        {
            if((strcmp(searchf,pd[i].namef))==0 && ((strcmp(searchl,pd[i].namel))==0))
            {
                ind=i;
            }
        }
        if(ind!=100)
        {
            printf("Do you want to edit the name of the player(1/0) :");
            scanf("%d",&edit);
            if(edit==1)
            {
                printf("First Name of The Player :");
                scanf("%s",pd[ind].namef);
                printf("\nLast Name of The Player :");
                scanf("%s",pd[ind].namel);
            }
            printf("\nDo you want to edit the age of the player(1/0) :");
            scanf("%d",&edit);
            if(edit==1)
            {
                printf("\nAge of the player :");
                scanf("%d",&pd[ind].age);
            }
            printf("\nDo you want to edit the Strike rate of the player(1/0) :");
            scanf("%d",&edit);
            if(edit==1)
            {
                printf("\nStrike rate of the player :");
                scanf("%lf",&pd[ind].strikeRate);
            }
            printf("\nDo you want to edit the Runs of the player(1/0) :");
            scanf("%d",&edit);
            if(edit==1)
            {
                printf("\nRuns of the player :");
                scanf("%d",&pd[ind].runs);
            }
            printf("\nDo you want to edit the Wickets of the player(1/0) :");
            scanf("%d",&edit);
            if(edit==1)
            {
                printf("\nWickets of the player :");
                scanf("%d",&pd[ind].wickets);
            }
            printf("\nDo you want to edit the Average of the player(1/0) :");
            scanf("%d",&edit);
            if(edit==1)
            {
                printf("\nAverage of the player :");
                scanf("%lf",&pd[ind].average);
            }
            pl=fopen("players_data.txt","w");
            for(int i=0; i<n; i++)
            {
                fprintf(pl,"%s %s %2d %.2f %d %d %.2f \n",pd[i].namef,pd[i].namel,pd[i].age,pd[i].strikeRate,pd[i].runs,pd[i].wickets,pd[i].average);
            }

            fclose(pl);
        }
        else
            printf("Not Found in the srilanka series");
}
void special(int n)
{
    char specialDetails[20][1000];
    FILE *ps;
    ps=fopen("specialDetail.txt","r");
    for(int i=0; i<n; i++)
    {
        fgets(specialDetails[i],1000,ps);
    }

    fclose(ps);
    for(int i=0; i<n; i++)
    {
        printf("%s ",specialDetails[i]);
        printf("\n");
    }
}
void best11(int n)
{
    players pd[20];
    FILE *pl;
    pl=fopen("players_data.txt","r");
    for(int i=0; i<n; i++)
    {
        fscanf(pl,"%s %s %d %lf %d %d %lf",pd[i].namef,pd[i].namel,&pd[i].age,&pd[i].strikeRate,&pd[i].runs,&pd[i].wickets,&pd[i].average);
    }
    fclose(pl);
    printf("To select best 11 see the special details of the players \n");
    special(n);
    int select,count=1;
    pl=fopen("best11.txt","w");
    for(int i=0;i<n;i++)
    {
       printf("\nDo you want %s %s in the best 11 (1/0) :",pd[i].namef,pd[i].namel);
       scanf("%d",&select);
       if(select==1)
       {
           fprintf(pl,"%s %s\n",pd[i].namef,pd[i].namel);
           count++;
           if(count==12)
           {break;}
       }
    }
    fclose(pl);
}

void detailsOfBest11(int n)
{
    players pd[20];
    FILE *pl;
    pl=fopen("players_data.txt","r");
    for(int i=0; i<n; i++)
    {
        fscanf(pl,"%s %s %d %lf %d %d %lf",pd[i].namef,pd[i].namel,&pd[i].age,&pd[i].strikeRate,&pd[i].runs,&pd[i].wickets,&pd[i].average);
    }

    fclose(pl);
    players best[11];
    pl=fopen("best11.txt","r");
    for(int i=0; i<11; i++)
    {
        fscanf(pl,"%s %s",best[i].namef,best[i].namel);
    }
    fclose(pl);
    for(int i=0; i<11; i++)
   {
       for(int j=0; j<n; j++)
        {
           if((strcmp(best[i].namef,pd[j].namef))==0 && ((strcmp(best[i].namel,pd[j].namel))==0))
           {
               printf("Name of the player :%s %s\nAge of the player :%d Years\nStrike rate of the player :%.2f\nRuns of the player :%d\nWickets of the player :%d\nAverage of the player :%.2f",pd[j].namef,pd[j].namel,pd[j].age,pd[j].strikeRate,pd[j].runs,pd[j].wickets,pd[j].average);
               printf("\n\n");
           }
       }
   }
}
void clrscr()
{
    system("cls");
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

