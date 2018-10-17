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
    int stoppen;

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
        printf("loading...................................[%d/3]\n",start+1);
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
    bool PrinterLooping4 = true;
    do
    {
        printf("Toets 1 in om verder te gaan: ");
        scanf("%d", &verder);
        if (verder == 1)
        {
            printf("\n");
            streep();
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
                printf("We gaan door naar het volgende onderwerp:\n");
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
                puts("Wat bedoel je?\n");
            }
        } while (true == PrinterLooping2);
    PrinterLooping1 = false;
        }
        else
        {
            do
            {
                printf("Wil je afsluiten? [Yes = 1 No = 2]: ");
                scanf("%d", &stoppen);
                if (stoppen == 2)
                {
                    printf("Programma sluit niet af\n");
                    PrinterLooping4 = false;
                }
                else if (stoppen == 1)
                {
                    printf("Programma sluit af...");
                    return 0;
                }
                else
                {
                    printf("Wat bedoel je?\n");
                }
            } while (true == PrinterLooping4);

        }
    } while (true == PrinterLooping1);
    bool MuisLooping1 = true;
    bool MuisLooping2 = true;
    bool MuisLooping3 = true;
    bool MuisLooping4 = true;
    do
    {
        printf("Toets 1 in om naar dit onderwerp te gaan: ");
        scanf("%d", &verder);
        if (verder == 1)
        {
            printf("\n");
        streep();
            printf("Oke, we gaan het nu over de muis hebben.\n");
            printf("Je mag nu kiezen uit deelonderwerpen\n");
            printf("1 - De geschiedenis van de muis\n");
            printf("2 - Waarvoor is een muis en hoe werkt hij\n");
            printf("3 - Soorten muizen\n");
            printf("Druk op 4 om naar het volgende onderwerp te gaan.\n");
            printf("Druk op 5 om af te sluiten.\n");
            do
            {
                scanf("%d",&choice);

                if (choice == 1)
                {
                    streep();
                        printf("De muis werd in 1963-1964 ontwikkeld door Douglas Engelbart en Bill English.\n");
                        printf("Het apparaat noemden ze: X-Y Position Indicator for a Display System.\n");
                        printf("De daarbij gebruikte eenheid wordt mickey genoemd, naar de beroemde muis van Walt Disney.\n");
                        printf("Het stuurprogramma van de muis kan bijvoorbeeld vastellen dat de muis drie mickeys naar links is geschoven.\n");
                        printf("De eerste muis die standaard met een computer werd meegeleverd, had slechts 1 knop. De computer in kwestie werd gemaakt door Xerox.\n");
                        printf("Dit is voornamelijk bij de Apple Macintosh een standaard gebruik gebleven, omdat de Macintosh werd gemaakt door ex-medewerkers van Xerox.\n");
                        printf("Pas zeer recent is ook Apple gezwicht voor de verleiding van een meerknoppenmuis.\n");
                        printf("De meeste muizen die halverwege de jaren 80 van de 20e voor de IBM en diens klonen, hadden 3 knoppen.\n");
                        printf("Alleen microsoft werkte met 2 knoppen. 1 voor point and click en een voor het oproepen van zogenaamde context afhankelijke menu's\n");
                        printf("Tegenwoordig zijn drie of twee knoppen de norm en alle afwijkingen daarvan uitzonderingen, veelal ontwikkeld voor zeer specifiek toepassingen.\n");
                    streep();
                        printf("Type je volgende keuze in: ");
                }
                else if (choice == 2)
                {
                    streep();
                        printf("De muis is een apparaat dat doormiddel van een balletje of een laser-sensor de de locatie van de muis kan overzetten in de locatie op een scherm.\n");
                        printf("Op die manier kun je makkelijk door je computer heen browsen zonder constant gebonden bend aan vakjes die je met je toestenbord moet selecteren.\n");
                        printf("Hedendaags word de snelheid van je muis vertaald in de eenheid DPI ofwel dots per inch. Dit houdt in dat de muis kan zien hoeveel inch hij moet\n");
                        printf("tellen voor elke pixel, DPI gaat meestal van 800 tot 8000\n");
                    streep();
                        printf("Type je volgende keuze in: ");
                }
                else if (choice == 3)
                {
                    streep();
                        printf("Er zijn verschrikkelijk veel soorten muizen. We gaan er nu een hoop opnoemen en laten zien wat ze allemaal kunnen\n");
                        printf("-Mechanische muis: \n");
                        printf("De muis wordt niet meer zo vaak gebruikt maar is een van de oudste die er is. De muis gebruikt een rubber balletje onder de muis om de computer te besturen.\n\n");
                        printf("-Optische muis: \n");
                        printf("Deze muis is de muis waar we het meeste gebruik van maken, door middel van een sensor onder de muis kun je de computer besturen.\n\n");
                        printf("-Trackball: \n");
                        printf("Deze muis is eigenlijk een bal die je rond beweegt. Zie het als het balletje onder de mechanische muis, alleen dan zonder muis.\n\n");
                        printf("-Pen-tablet: \n");
                        printf("Dit is een tablet waarop je kan tekenen met een speciale pen. Doordat de tablet de locatie van de muis bepaalt op een speciaal soort\nscherm, kan hij heel precies aansturen.\n\n");
                        printf("-Pen-muis: \n");
                        printf("Deze muis is een pen waarmee je op het scherm van je apparaat kan schrijven. Het komt ook voor dat je gewoon op elk oppervlak kan schrijven.\n\n");
                        printf("-Voetmuis: \n");
                        printf("Deze muis wordt bestuurd door je voeten! Het lijkt op de trackball, alleen dan met je voeten.\n\n");
                        printf("-Oogmuis: \n");
                        printf("De oogmuis ofwel Eye-tracker, kan de locatie zien waar je naar kijkt. Op die manier kunnen ze de muis op de plek van je ogen houden.\n\n");
                        printf("-Webcam: \n");
                        printf("Webcam's zijn al best lang in gebruik als track-systemen. De webcam kijkt hoe je beweegt en zet dat om in een locatie. Vaak wordt dat gedaan doormiddel van wijzen.\n");
                        printf("Misschien wel de bekendste webcam-tracker apparatuur is de Kinect\n\n");
                        printf("-Touchpads: \n");
                        printf("De touchpads worden voornamelijk gebruikt op laptops. Het is een gevoelig vierkant op je latop waar je met je vinger over kunt wrijven om de muis te bewegen.\n\n");
                    streep();
                        printf("Type je volgende keuze in: ");
                }
                else if (choice == 4)
                {
                    printf("We gaan door naar het volgende onderwerp:\n");
                    MuisLooping2 = false;
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
                            MuisLooping3 = false;
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
                    } while (true == MuisLooping3);
                }
                else
                {
                    puts("Wat bedoel je?\n");
                }
            } while (true == MuisLooping2);
    MuisLooping1 = false;
    }
        else
        {
            do
            {
                printf("Wil je afsluiten? [Yes = 1 No = 2]: ");
                scanf("%d", &stoppen);
                if (stoppen == 2)
                {
                    printf("Programma sluit niet af\n");
                    MuisLooping4 = false;
                }
                else if (stoppen == 1)
                {
                    printf("Programma sluit af...");
                    return 0;
                }
                else
                {
                    printf("Wat bedoel je?\n");
                }
            } while (true == MuisLooping4);
        }
    }while (true == MuisLooping1);

    bool MonitorLooping1 = true;
    bool MonitorLooping2 = true;
    bool MonitorLooping3 = true;
    bool MonitorLooping4 = true;
    do
    {
        printf("Toets 1 in om naar dit onderwerp te gaan: ");
        scanf("%d", &verder);
        if (verder == 1)
            {
                printf("\n");
            streep();
                printf("Oke, we gaan het nu over de monitor hebben.\n");
                printf("Je mag nu kiezen uit deelonderwerpen\n");
                printf("1 - De geschiedenis van de monitor\n");
                printf("2 - Waarvoor is een monitor en hoe werkt hij\n");
                printf("3 - Soorten monitoren\n");
                printf("Druk op 4 om naar het volgende onderwerp te gaan.\n");
                printf("Druk op 5 om af te sluiten.\n");
                do
                {
                    scanf("%d",&choice);

                    if (choice == 1)
                    {
                    streep();
                        printf("De eerste monitoren waren ingebouwd in de computer. We hebben het dan over de jaren '30 tot de jaren '60.\n");
                        printf("Pas toen de tv werd uitgevonden, begon de tijd van losse monitoren. De eerste tv's waren dan ook de eerste monitoren voor home pc's\n");
                        printf("De eerste personal computers werkten met monochrome monitoren, dat wil zeggen, ze toonden alleen groen gekleurde of alleen oranje\n");
                        printf("gekleurde karakters. De mogelijkheden die deze beeldschermen boden voor het interactief werken, hebben een revolutie betekend in het\n");
                        printf("gebruik van de computer. De monitoren brandden snel in, dat wil zeggeen als een bepaalde afbeelding voor een langere tijd werd geprojecteerd\n");
                        printf("op het scherm, de oplichtende fosforlaag werd aangetast. Als je dan het beeldscherm uitzette, was de afbeelding voor altijd vaag zichtbaar.\n");
                        printf("Vanaf ongeveer 1985 tot begin 2000 veranderde het gebruik van beeldbuismonitors naar kleurenschermen. De beeldschermen konden ook in steeds\n");
                        printf("grotere afmetingen worden gemaakt. Omdat de eerste beeldschermen een vaste verhouding hadden van 4:3 was het voldoende om alleen de diagonale\n");
                        printf("afmetingen aan te geven. Tegenwoordig geven we vaak de verhouding erbij.\n");
                    streep();
                        printf("Type je volgende keuze in: ");
                    }
                    else if (choice == 2)
                    {
                    streep();
                        printf("Een monitor laat de output van je grafische kaart zien. Je kan door je monitor ongestoord door je computer heen browsen.\n");
                        printf("Je hebt Active displays zoals Liquid crystal display(LCD), Cathodoluminescence(CRT,FED,VFD,SED), Electroluminescence(EL,LED,OLED),\n");
                        printf("Photoluminescence(PDP), Incandescence(Numitron). Daarnaast heb je nog Passive displays zoals LCD, Electrophoresis, Electrochromism, Electrowetting,\n");
                        printf("Electromechanical modulation(flap display,flip-disk display,DMD,IMOD,FTIR). Active displays zijn beeldschermen die licht uitzenden.\n");
                        printf("Passive displays weerkaatsen licht. Al deze begrippen hierboven worden bij soorten beeldschermen uitgelegt.\n");
                    streep();
                        printf("Type je volgende keuze in: ");
                    }
                    else if (choice == 3)
                    {
                        streep();
                        printf("\tActive Displays:\n");
                        printf("-LCD: \n");
                        printf("Een LCD scherm, Liquid crystal display, is bij een actief scherm een schijf met kristalletjes die het licht uit een 4 lampjes in de hoek weten te\n");
                        printf("weerkaatsen op een manier waarop het kleur krijgt. LCD is een van de meest voorkomende soorten beeldschermen.\n\n");
                        printf("-Cathodoluminescence: \n");
                        printf("Je hebt bij deze vorm van monitoren te maken met het principe dat electronen zich gaan buigen op een bepaald materiaal, en zich zo omwerken tot\n");
                        printf("fotonen, die zich in golflengte beweegt dat de mens hem kan zien als licht. Alle monitoren onder dit segment berusten op dit principe.\n\n");
                        printf("-Electroluminescence: \n");
                        printf("Bij deze vorm wordt er gebruik gemaakt van het feit dat als elektronen zich door een materiaal beweegt fotononen uitzend. Waar fotonen worden uitgezonden\n");
                        printf("word dus ook licht uitgezonden. De monitoren werken dus op hele kleine ledjes.\n\n");
                        printf("-Photoluminescence: \n");
                        printf("Deze monitoren staan ook wel bekend als Plasma-monitors. Deze monitors hebben een materiaal in zich zitten dat fotonen kan opnemen en ombuigen. Dit noemen\n");
                        printf("we electromagnetic radiation.\n\n");
                        printf("-Incandescence: \n");
                        printf("Bij Incandescence is het principe heel makkelijk. Een materiaal wordt zo heet opgewarmd dat het gaat gloeien. Op die manier zend hij licht uit.\n\n");
                        printf("\tPassive Displays:\n");
                        printf("-LCD: \n");
                        printf("Bij een passive display is een LCD scherm een soort van spiegel die ligt opvangt en weer weet te weerkaatsen.\n\n");
                        printf("-Electrophoresis: \n");
                        printf("Electrophoresis is een activiteit in het scherm die het licht opvangt in een vloeistof en zo het licht versterkt door er een electromagnetisch veld bij te zetten.\n\n");
                        printf("-Electrochromism: \n");
                        printf("Electrochromism is eigenlijk heel makkelijk. Sommige materialen veranderen van kleur bij een bepaalde reactie. Dit zorgt ervoor dat er in het hele beeldscherm\n");
                        printf("electriciteit loopt. zodat op elke plek het materiaal een andere kleur kan aannemen.\n\n");
                        printf("-Electrowetting: \n");
                        printf("Bij Electrowetting wordt er een materiaal in gezet dat bij spanning licht weerkaatst en bij geen spanning geen licht weerkaatst. Dat komt omdat er op de metalen\n");
                        printf("een dun vloeibaar materiaal op wordt gedaan dat bij spanning weerkaatst.\n\n");
                        printf("-Electromechanical modulation: \n");
                        printf("Bij Electromechanical modulation worden er spiegeltjes in je display gezet die alle kleuren hebben. De kleur die ze moeten hebben wordt naar het licht gedraaid.\n\n");
                    streep();
                        printf("Type je volgende keuze in: ");
                    }
                    else if (choice == 4)
                    {
                        printf("We gaan door naar het volgende onderwerp:\n");
                    MonitorLooping2 = false;
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
                                MonitorLooping3 = false;
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
                        } while (true == MonitorLooping3);
                    }
                    else
                    {
                        printf("Wat bedoel je?\n");
                    }
                } while (MonitorLooping2 == true);
     MonitorLooping1 = false;
            }
            else
        {
            do
            {
                printf("Wil je afsluiten? [Yes = 1 No = 2]: ");
                scanf("%d", &stoppen);
                if (stoppen == 2)
                {
                    printf("Programma sluit niet af\n");
                    MonitorLooping4 = false;
                }
                else if (stoppen == 1)
                {
                    printf("Programma sluit af...");
                    return 0;
                }
                else
                {
                    printf("Wat bedoel je?\n");
                }
            } while (true == MonitorLooping4);
        }

    }while (MonitorLooping1 = true);
    return 0;
}
