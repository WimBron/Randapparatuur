#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

int main()
{
    int verder;
    int verder2;
    int choice;
    int devil;

    putchar('B');
    putchar('o');
    putchar('o');
    putchar('t');
    putchar('i');
    putchar('n');
    putchar('g');
    putchar(':');
    putchar('.');
        Sleep(1000);
    putchar('.');
        Sleep(1000);
    putchar('.');
        Sleep(1000);
    putchar('.');
        Sleep(1000);
    putchar('\n');
    puts("starting up program: "); //startup design
        Sleep(1000);
    puts("loading...................................[1/10]");
        Sleep(1000);
    puts("loading...................................[2/10]");
        Sleep(1000);
    puts("loading...................................[3/10]");
        Sleep(1000);
    puts("loading...................................[4/10]");
        Sleep(1000);
    puts("loading...................................[5/10]");
        Sleep(1000);
    puts("loading...................................[6/10]");
        Sleep(1000);
    puts("loading...................................[7/10]");
        Sleep(1000);
    puts("loading...................................[8/10]");
        Sleep(1000);
    puts("loading...................................[9/10]");
        Sleep(1000);
    puts("loading...................................[10/10]");
        Sleep(1000);
    puts("\n");
    puts("loading text: ");
        Sleep(1000);
    puts("loading...................................[1/3]");
        Sleep(1000);
    puts("loading...................................[2/3]");
        Sleep(1000);
    puts("loading...................................[3/3]\n");
        Sleep(1000);
    puts("Sync");
        Sleep(2000);
    puts("Done!\n");
    puts("-----------------------------------------------------------------------------------\n");
        Sleep(2000);
    printf("Hallo, dit is een programma dat gaat over randapparatuur.\n"); //intro
    printf("We gaan het over verschillende onderdelen hebben maar eerst is het handiger\n");
    printf("om het te hebben over wat randapparatuur nou daadwerkelijk is!\n\n");
    puts("-----------------------------------------------------------------------------------\n");
        Sleep(1000);
    puts("\n");
    bool continueLooping = true;
    bool continueLooping2 = true;
    bool continueLooping3 = true;
    do
    {
        printf("Toets 1 in om verder te gaan: ");
        scanf("%d", &verder);
        if (verder == 1)
        {
            printf("Oke, we beginnen met de printer.\n");
            printf("Je mag nu kiezen uit deelonderwerpen\n");
            printf("1 - De geschiedenis van de printer\n");
            printf("2 - Waarvoor is een printer\n");
            printf("3 - Soorten printers\n");
            do
            {
                scanf("%d",&choice);

            switch(choice)
            {
                case 1:
                    puts("Je koos voor 1\n");
                    break;
                case 2:
                    puts("Je koos voor 2\n");
                    break;
                case 3:
                    puts("Je koos voor 3\n");
                    break;
                default:
                    puts("Oke, dan gaan we verder.");
                    continueLooping3 = false
            };
            } while (true == continueLooping3);

            continueLooping = false;
        }
        else
        {

            do
                {
                    printf("Wil je afsluiten? [Yes = 1 No = 2]: ");
                    scanf("%d", &verder2);
                    if (verder2 == 2)
                    {
                        printf("Programma sluit niet af\n");
                        continueLooping2 = false;
                    }
                    else if (verder2 == 1)
                    {
                        printf("Programma sluit af...");
                        return 0;
                    }
                    else
                    {
                        printf("Wat bedoel je?\n");
                    }

                } while (true == continueLooping2);
        }

    } while (true == continueLooping);
    return 0;
}
