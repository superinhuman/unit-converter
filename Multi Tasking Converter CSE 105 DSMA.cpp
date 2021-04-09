#include<stdio.h>
#include<stdlib.h>

/*--------Temperature conversion--------*/
int CelciustoFahrenheit(float *,float *);
int CelciustoRankine(float *, float *);
int FahrenheittoCelcius(float *, float *);
int RankinetoCelcius(float *, float *);

/*-----------Weight conversion------------*/
int OunceToGram(float *, float *);
int GramToOunce(float *, float *);
int PoundToKilogram(float *, float *);
int KilogramToPound(float *, float *);

/*---------Length conversion------------------*/
int FeetToMeter(float *, float *);
int MeterToFeet(float *, float *);
int NauticalmileToKilometer(float *, float *);
int KilometerToNauticalmile(float *, float *);

/*---------------Currency conversion------------*/
int US_DollarToEuro(float *, float *);
int EuroToUS_Dollar(float *, float *);
int BRITISH_PoundToEuro(float *, float *);
int EuroToBRITISH_Pound(float *, float *);

void Temperature_Conversion(void);
void Weight_Conversion(void);
void Length_Conversion(void);
void Currency_Conversion(void);

//Function definitoin
           //Temperature conversion

int CelciustoFahrenheit(float *celcius, float *fahrenheit)
{
  *fahrenheit = (*celcius * 1.8) + 32;
  return(*fahrenheit);
}

int CelciustoRankine(float *celcius, float *rankine)
{
  *rankine = (*celcius + 273.15) * 1.8;
  return(*rankine);
}

int FahrenheittoCelcius(float *fahrenheit, float *celcius)
{
  *celcius = ((*fahrenheit - 32) * 5) / 9;
  return(*celcius);
}

int RankinetoCelcius(float *rankine, float *celcius)
{
  *celcius = ((*rankine - 491.67) * 5 ) / 9;
  return(*celcius);
}

                //Weight conversion

int OunceToGram(float *oz, float *gm)
{
  *gm = (*oz) * 28.3495;
  return(*gm);
}
int GramToOunce(float *gm, float *oz)
{
  *oz = (*gm) * 0.0353;
  return(*oz);
}

int PoundToKilogram(float *lb, float *kg)
{
  *kg = (*lb) * 0.453592;
  return(*kg);
}
int KilogramToPound(float *kg, float *lb)
{
  *lb = (*kg) * 2.2046;
  return(*lb);
}

            //Length conversion

int FeetToMeter(float *ft, float *m)
{
  *m = (*ft) * 0.3048;
  return(*m);
}

int MeterToFeet(float *m, float *ft)
{
  *ft = (*m) * 3.281;
  return(*m);
}

int NauticalmileToKilometer(float *nm, float *km)
{
  *km = (*nm) * 1.852;
  return(*km);
}

int KilometerToNauticalmile(float *km, float *nm)
{
  *nm = (*km) * 0.5310;
  return(*nm);
}

            //Currency conversion

int US_DollarToEuro(float *ud, float *euro)
{
  *euro = (*ud) * 0.89;
  return(*euro);
}

int EuroToUS_Dollar(float *euro, float *ud)
{
  *ud = (*euro) * 1.1236;
  return(*ud);
}

int BRITISH_PoundToEuro(float *bp, float *euro)
{
  *euro = (*bp) * 1.35;
  return(*euro);
}

int EuroToBRITISH_Pound(float *euro, float *bp)
{
  *bp = (*euro) * 0.7407;
  return(*bp);
}

                //Temperature conversion
void Temperature_Conversion(void)
{
  int choice;
  char ch;
  float fahrenheit, celcius, rankine;
  do
  {
    //system("clear");
    printf("\n\t\t * Temperature Converter *  \n");
    printf("\n\t\t+---+----------------------+  ");
    printf("\n\t\t| 0.|       Exit           |  ");
    printf("\n\t\t+---+----------------------+  ");
    printf("\n\t\t| 1.|Celcius to Fahrenheit |  ");
    printf("\n\t\t| 2.|Celcius to Rankine    |  ");
    printf("\n\t\t+---+----------------------+  ");
    printf("\n\t\t| 3.|Fahrenheit to Celcius |  ");
    printf("\n\t\t+---+----------------------+  ");
    printf("\n\t\t+---+----------------------+  ");
    printf("\n\t\t|10.|Rankine to Celcius    |  ");
     printf("\n\t\t+---+----------------------+  ");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
	 case 0:
	   printf("\n\n\t\tExit from Temperature Converter...\n\n");
           return;
         break;

      //Celcius
      case 1:
         printf("\n\t......Celcius to Fahrenheit Converter......\n");
         printf("\n\tEnter the value of celcius: ");
         scanf("%f",&celcius);
         if (celcius < (-273.15)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Celcius is -273.15...\n"); }
         else {
           CelciustoFahrenheit(&celcius, &fahrenheit);
           printf("\n\tTemperature in Fahrenheit : %f \n", fahrenheit); }
         break;
         case 2:
         printf("\n\t......Celcius to Rankine Converter......\n");
         printf("\n\tEnter the value of Celcius: ");
         scanf("%f",&celcius);
         if(celcius < (-273.15)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Celcius is -273.15....\n"); }
         else {
           CelciustoRankine(&celcius, &rankine);
           printf("\n\tTemperature in Rankine : %f \n",rankine); }
         break;

      //Fahrenheit
      case 3:
         printf("\n\t......Fahrenheit to Celcius Converter......\n");
         printf("\n\tEnter the value of Fahrenheit: ");
         scanf("%f",&fahrenheit);
         if(fahrenheit < (-458)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Fahrenheit is -459.67....\n"); }
         else {
           FahrenheittoCelcius(&fahrenheit, &celcius);
           printf("\n\tTemperature in Celcius : %f \n",celcius); }
         break;

      //Rankine
      case 4:
         printf("\n\t......Rankine to Celcius Converter......\n");
         printf("\n\tEnter the value of Rankine: ");
         scanf("%f",&rankine);
         if(rankine < 0) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Rankine is zero....\n"); }
         else {
           RankinetoCelcius(&rankine, &celcius);
           printf("\n\tTemperature in Celcius : %f \n",celcius); }
         break;
      default:
         printf("\n\t\tYou choose wrong option...\n\tPlease read the Menu carefully before enter your choice...\n");
         break;
    }
    getchar();
    printf("\n\n\tDo you want to continue Temperature Converter???\n\tIf Yes,press 'y', else 'n'.\n");
   ch = getchar();
  }while(ch!='n');

  return;
}

           //Weight conversion
void Weight_Conversion(void)
{
  int choice;
  float kg, oz, gm, lb ; // gr, mg,st, cwt,
  char ch;

  do
  {
    //system("clear");
    printf("\n\t\t       - Weight Converter -        \n");
    printf("\n\t\t+---+-----------------------------+  ");
    printf("\n\t\t| 0.|      Exit                   |  ");
    printf("\n\t\t+---+-----------------------------+  ");
    printf("\n\t\t| 1.|Ounce To Gram                |  ");
    printf("\n\t\t| 2.|Gram To Ounce                |  ");
    printf("\n\t\t| 3.|Pound To Kilogram            |  ");
    printf("\n\t\t| 4.|Kilogram To Pound            |  ");
    printf("\n\t\t+---+-----------------------------+  ");

    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 0:
        printf("\n\n\tExit from Weight Converter....\n\n");
        return;
        break;
     case 1:
        printf("\n\t......Ounce To Gram Converter......\n");
        printf("\n\tEnter the value Ounce : ");
        scanf("%f",&oz);
        OunceToGram(&oz, &gm);
        printf("\n\tWeight in Gram : %f \n", gm);
        break;

      case 2:
        printf("\n\t......Gram To Ounce Converter......\n");
        printf("\n\tEnter the value Gram : ");
        scanf("%f",&gm);
        GramToOunce(&gm, &oz);
        printf("\n\tWeight in Ounce : %f \n", oz);
        break;

      case 3:
        printf("\n\t......Pound To Kilogram Converter......\n");
        printf("\n\tEnter the value Pound : ");
        scanf("%f",&lb);
        PoundToKilogram(&lb, &kg);
        printf("\n\tWeight in Kilogram : %f \n", kg);
        break;

      case 4:
        printf("\n\t......Kilogram To Pound Converter......\n");
        printf("\n\tEnter the value Kilogram : ");
        scanf("%f",&kg);
        KilogramToPound(&kg, &lb);
        printf("\n\tWeight in Pound : %f \n", lb);
        break;
      default:
        printf("\n\t\tYou choose wrong option......\n\tPlease read the Menu carefully before enter your choice...\n");
        break;
    }
    getchar();
    printf("\n\n\tDo you want to continue Weight Converter??\n\tIf Yes,press 'y', else 'n'.\n");
    ch = getchar();
  }while(ch != 'n');

  return;
}

           //Length conversion
void Length_Conversion(void)
{
  int choice;
  float m, ft, km, nm; //inch, cm, mile,
  char ch;

  do
  {
    //system("clear");
    printf("\n\t\t     !! Length Converter !!     \n");
    printf("\n\t\t+---+-------------------------+  ");
    printf("\n\t\t| 0.|      Exit               |  ");
    printf("\n\t\t+---+-------------------------+  ");
    printf("\n\t\t| 1.|Feet To Meter            |  ");
    printf("\n\t\t| 2.|Meter To Feet            |  ");
    printf("\n\t\t|3.|Nauticalmile To Kilometer|  ");
    printf("\n\t\t|4.|Kilometer To Nauticalmile|  ");
    printf("\n\t\t+---+-------------------------+  ");

    printf("\n\n\tEnter your choice: ");
    scanf("%d",&choice);
        switch(choice)
    {
      case 0:
	printf("\n\n\tExit from Length Converter....\n\n");
        return;
        break;
     case 1:
        printf("\n\t......Feet To Meter Converter......\n");
        printf("\n\tEnter the value Feet : ");
        scanf("%f",&ft);
        FeetToMeter(&ft, &m);
        printf("\n\tLength in Meter : %f \n", m);
        break;

      case 2:
        printf("\n\t......Meter To Feet Converter......\n");
        printf("\n\tEnter the value Meter : ");
        scanf("%f",&m);
        MeterToFeet(&m, &ft);
        printf("\n\tLength in Feet : %f \n", ft);
        break;

      case 3:
        printf("\n\t......Nauticalmile To Kilometer Converter......\n");
        printf("\n\tEnter the value Nauticalmile : ");
        scanf("%f",&nm);
        NauticalmileToKilometer(&nm, &km);
        printf("\n\tLength in Kilometer : %f \n", km);
        break;

      case 4:
        printf("\n\t......Kilometer To Nauticalmile Converter......\n");
        printf("\n\tEnter the value kilometer : ");
        scanf("%f",&km);
        KilometerToNauticalmile(&km, &nm);
        printf("\n\tLength in Nauticalmile : %f \n", nm);
        break;

      default:
        printf("\n\t\tYou choose wrong option...\n\t\tPlease read the Menu carefully before enter your choice...\n");
        break;
    }
    getchar();
    printf("\n\n\t\tDo you want to continue Length Converter??\n\t\tIf Yes,press 'y', else 'n'.\n");
    ch = getchar();
  }while(ch != 'n');

  return;
}
//currency converter
void Currency_Conversion(void)
{
  int choice;
  char ch;
  float ud, euro, bp;
  do
  {
   // system("clear");
    printf("\n\t\t      + Currency Converter +      \n");
    printf("\n\t\t+---+-----------------------------+  ");
    printf("\n\t\t| 0.|       Exit                  |  ");
    printf("\n\t\t+---+-----------------------------+  ");
    printf("\n\t\t| 1.|US_Dollar To Euro            |  ");
    printf("\n\t\t| 2.|Euro To US_Dollar            |  ");
    printf("\n\t\t| 3.|BRITISH_Pound To Euro        |  ");
    printf("\n\t\t| 4.|Euro To BRITISH_Pound        |  ");
    printf("\n\t\t+---+-----------------------------+  ");

    printf("\n\n\tEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 0:
	printf("\n\n\tExit from Currency Converter....\n\n");
        return;
        break;

      case 1:
        printf("\n\t......US_Dollar To Euro Converter......\n");
        printf("\n\tEnter the value US_Dollar : ");
        scanf("%f",&ud);
        US_DollarToEuro(&ud, &euro);
        printf("\n\tValue in Euro : %f \n", euro);
        break;

      case 2:
        printf("\n\t......Euro To US_Dollar Converter......\n");
        printf("\n\tEnter the value Euro : ");
        scanf("%f",&euro);
        EuroToUS_Dollar(&euro, &ud);
        printf("\n\tValue in US_Dollar : %f \n", ud);
        break;

      case 3:
        printf("\n\t......BRITISH_Pound To Euro Converter......\n");
        printf("\n\tEnter the value BRITISH_Pound : ");
        scanf("%f",&bp);
        BRITISH_PoundToEuro(&bp, &euro);
        printf("\n\tValue in Euro : %f \n", euro);
        break;

      case 4:
        printf("\n\t......Euro To BRITISH_Pound Converter......\n");
        printf("\n\tEnter the value Euro : ");
        scanf("%f",&euro);
        EuroToBRITISH_Pound(&euro, &bp);
        printf("\n\tValuet in BRITISH_Pound : %f \n", bp);
        break;

    default:
        printf("\n\t\tYou choose wrong option...\n\n\t\tPlease read the Menu carefully before enter your choice...\n");
        break;
    }
   getchar();
   printf("\n\n\tDo you want to continue Currency Converter??\n\tIf Yes,press 'y', else 'n'.\n");
    ch = getchar();
  }while(ch != 'n');

  return;
}

int main(void)
{
  int choice;
  char ch;

  do
  {
    //system("clear");
    printf("\n\n\t\t\tWelcome to CONVERTER CALCULATOR...\n\n\n\n\n\n");
    printf("\n\t\t        :: M E N U ::   ");
    printf("\n\t\t+---+-----------------------+  ");
    printf("\n\t\t| 0.|      Exit             |  ");
    printf("\n\t\t+---+-----------------------+  ");
    printf("\n\t\t| 1.|Temperature Converter  |  ");
    printf("\n\t\t| 2.|Weight Converter       |  ");
    printf("\n\t\t| 3.|Length Converter       |  ");
    printf("\n\t\t| 4.|Currency Converter     |  ");
    printf("\n\t\t+---+-----------------------+  ");

    printf("\n\n\tEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 0:
        printf("\n\n\t\tYou choose Exit from CONVERTER CALCULATOR...\n\n");
        break;

      case 1:
        Temperature_Conversion();
        break;

      case 2:
        Weight_Conversion();
        break;

     case 3:
        Length_Conversion();
        break;

     case 4:
        Currency_Conversion();
        break;

      default:
        printf("\n\t\tSorry!!\n\n\t\tPlease read the Menu carefully before enter choice...\n");
        break;
    }
    getchar();
    printf("\n\n\n\n\n\n\n\t\tDo you want to continue CONVERTER CALCULATOR??\n\t\tIf Yes,press 'y', else 'n'.\n");
    ch = getchar();
  }while(ch != 'n');

  //system ("clear");
  printf("\n\n\n\n\n\t\tGood Bye...\n\n\n\t\tThanks for using it...\n\n\n\n\n\n\n\n");
  return(1);
}
