#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

void streep()
{
    puts("-----------------------------------------------------------------------------------\n");
}

void slp()
{
    Sleep(1000);
}

int main()
{
    int start;
    int verder;
    int verder2;
    int choice;

    putchar('B');
    putchar('o');
    putchar('o');
    putchar('t');
    putchar('i');
    putchar('n');
    putchar('g');
    putchar(':');
    putchar('.');
        slp();
    putchar('.');
        slp();
    putchar('.');
        slp();
    putchar('.');
        slp();
    putchar('\n');
    puts("starting up program: "); //startup design
    for(start=0;start<10;start=start+1)
    {
        printf("loading...................................[%d/10]\n",start+1);
        slp();
    }
    puts("\n");
    puts("Loading text...");
    for(start=0;start<3;start=start+1)
    {
        printf("loading...................................[%d/10]\n",start+1);
        slp();
    }
    puts("Sync");
        Sleep(2000);
    puts("Done!\n");
    streep();
    printf("Hallo, dit is een programma dat gaat over randapparatuur.\n"); //intro
    printf("We gaan het over verschillende onderdelen hebben maar eerst is het handiger\n");
    printf("om het te hebben over wat randapparatuur nou daadwerkelijk is!\n\n");
    streep();
        slp();
    puts("\n");
    bool PrinterLooping1 = true;
    bool PrinterLooping2 = true;
    bool PrinterLooping3 = true;
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
            printf("Druk op 4 om naar het volgende onderwerp te gaan.\n");
            printf("Druk op 5 om af te sluiten.\n");
            do
            {
                scanf("%d",&choice);

            if (choice == 1)
            {
                streep();
                    printf("Rond 1400 werd de eerste druktechniek uitgevonden.\n");
                    printf("Mensen gebruikten grote stukken hout met ingekerfde letters.\n");
                    printf("Deze letters doopte ze dan in de inkt, om hem vervolgens op het papier te stempelen.\n");
                    printf("Rond 1600 werd de eerste echte drukpers uitgevonden. Deze zorgde ervoor dat je snel pamfletten kon printen.\n");
                    printf("Rond 1800 gaat men gebruik maken van de stoomdrukpers, die vooral gebruikt werd voor kranten.\n");
                    printf("Ook word rond deze tijd de kleurenprinter geintroduceerd.\n");
                    printf("In 1969-1970 worden de eerste echte printers uitgebracht. Mensen herkende deze door het typische kettingpapier.\n");
                    printf("In de loop van de tijd kwamen er steeds meer printers en ook steeds meer gewone particulieren begonnen de\n");
                    printf("apparaten in huis te halen. Tegenwoordig is zelfs de 3D printer voor particulieren beschikbaar.\n");
                streep();
                    printf("Type je volgende keuze in: ");
            }
            else if (choice == 2)
            {
                streep();
                    printf("Een printer is een apparaat dat de uitvoer van een computer, scanner of digitale camera afdrukt op (foto)papier.\n");
                    printf("Printers voor thuisgebruik zijn vaak geïntegreerd met een scanner.\n");
                    printf("Vaak kan men dan ook het gescande tegelijk afdrukken, zonder dat er een computer nodig is, en het apparaat dus gebruiken als kopieerapparaat.\n");
                    printf("Dit wordt wel een all-in-one printer genoemd.\n");
                streep();
                    printf("Type je volgende keuze in: ");
            }
            else if (choice == 3)
            {
                streep();
                    printf("Dezer dagen heb je heel veel verschillende soorten printers. We gaan ze allemaal even noemen\n");
                    printf("en vertellen wat ze allemaal doen.\n");
                    printf("-Margrietwielprinters: \n");
                    printf("Margrietwielprinters maken, net als moderne typemachines, gebruik van een schijf met daarop alle letters.\n\n");
                    printf("-Regeldrukkers: \n");
                    printf("Een regeldrukker bestaat uit een snel draaiende ketting, metalen band of rol waarop alle letters één of meer keren als type (letter in reliëf) voorkomen.\n\n");
                    printf("-Matrixprinters: \n");
                    printf("Matrixprinters bouwen de tekst op door met kleine pinnetjes, door een inktlint, op papier te drukken.\n\n");
                    printf("-Thermische printers: \n");
                    printf("Thermische printers zetten de tekst op papier door gebruik te maken van hittegevoelig papier. Dit papier bevat chemicaliën die bij verhitting een verbinding aangaan;\n dit is te zien als een verkleuring op het papier. De verhitting vindt plaats door middel van een printkop.\n\n");
                    printf("-Thermische overdrachtsprinters: \n");
                    printf("Thermische overdrachtsprinters brengen kleurstoffen, in de vorm van een gekleurde was, met behulp van warmte van een reservoir of folie over op papier.\n\n");
                    printf("-Inkjetprinter: \n");
                    printf("De werking van een inkjetprinter is grotendeels hetzelfde als die van matrixprinters, maar in plaats van met naaldjes de tekst op papier te zetten, worden er\n minuscule inktdruppels op het papier gespoten.\n\n");
                    printf("-Laser- en ledprinters: \n");
                    printf("Een laserprinter maakt gebruik van een fysisch proces waarbij het papier over verschillende rollen geleid wordt, waarbij eerst gedeeltes van een lichtgevoelige\n drum elektrisch geladen worden met behulp van een pulserende laser die via een snel roterende spiegel (laserprinter) of een ledbalk (ledprinter) de drum bestrijkt.\n\n");
                    printf("-3D-printer:\n");
                    printf("Een nieuwe ontwikkeling is de 3D-variant van een printer: de 3D-printer. Hiermee zijn 3D-objecten te maken. Tot voor kort waren 3D-printers duur en werden\n alleen commercieel toegepast. Door open source projecten daalt de prijs snel en worden ze ook voor de (handige) consument betaalbaar.\n");
                streep();
                    printf("Type je volgende keuze in: ");
            }
            else if (choice == 4)
            {
                printf("We gaan door naar het volgende onderwerp:");
                PrinterLooping2 = false;
            }
            else if (choice == 5)
            {
                do
                {
                    printf("Wil je afsluiten? [Yes = 1 No = 2]: ");
                    scanf("%d", &verder2);
                    if (verder2 == 2)
                    {
                        printf("Programma sluit niet af\n");
                        PrinterLooping3 = false;
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

                } while (true == PrinterLooping3);
            }
            else
            {
                puts("Oke, dan gaan we verder.");
                PrinterLooping3 = false;
            }
            } while (true == PrinterLooping2);

            PrinterLooping1 = false;
    }} while (true == PrinterLooping1);
    return 0;
}
