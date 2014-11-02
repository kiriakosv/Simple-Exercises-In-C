//=======================================================================
// Copyright (c) 2014 Kiriakos Velissariou
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#include<stdio.h>
#include<string.h>
#define n 50    //arithmos diamerismatwn
#define TRUE 1

int total_expenses = 0, total_surface = 0; //katholikes metavlites xrhsimes gia parakatw synarthseis

struct apartment  // domi pou antistoixei se ena diamerisma 
{
  char owner[50];
  int number;
  int size;
  int floor;
};

struct apartment block_of_flats[n];   // pinakas pou anaparista thn polykatoikia 

void surface_per_floor(void)    // epistrefei thn synolikh epifaneia ana orofo
{
  int floor_surface = 0, i, j;

  for (i = 1; i < 6; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (block_of_flats[j].floor == i)
      {
        floor_surface += block_of_flats[j].size;
      }
    }
    printf("Floor number %d surface: %d m^2\n", i, floor_surface);
    floor_surface = 0;
  }
}

void print_money_per_apartment(void)   // diavazei to poso kai epistrefei gia kathe diamerisma ta koinoxrhsta pou tou analogoun
{
  int i;
  float money_per_person = 0;

  printf("Plese enter the total expenses of all the apartments in euros: ");
  scanf("%d", &total_expenses);
  for (i = 0; i < 50; i++)
  {
    money_per_person = total_expenses * (float)block_of_flats[i].size / total_surface;
    printf("Apartment owner: %s\n", block_of_flats[i].owner);
    printf("Expenses: %.2f euros\n", money_per_person);
    printf("-----------------------------------------\n");
  }
}

void print_specific_apartment(void) 
  /* typwnei gia sygkekrimeno diamerisma pou exei epilegei apo ton xrhsth to onoma
  tou idiokthth kai to meros twn exodwn pou tou analogoun */
{
  int apartment_number = 0, i;
  float money_per_person = 0;

  if (total_expenses == 0) // Total expenses are unknown
  {
    printf("Please choose number 2 first\n");
    return;
  }
  while ((apartment_number < 1) || (apartment_number > 50))   // elegxei ean o xrhsths exei dwsei arithmo pou antistoixei se diamerisma
  {
	printf("Choose an apartment by its number (1 - 50): ");
	scanf("%d", &apartment_number);
	if ((apartment_number < 1) || (apartment_number > 50))
	{
		printf("Invalid apartment number!\n");
	}
  }
  
  for (i = 0; i < 50; i++)
  {
    if (block_of_flats[i].number == apartment_number)
    {
      money_per_person = total_expenses * (float)block_of_flats[i].size / total_surface;
      printf("You chose apartment number %d\n", apartment_number);
      printf("Owner of the apartment: %s\n", block_of_flats[i].owner);
      printf("Apartment expenses: %.2f euros\n", money_per_person);
      break;
    }
  }
}
      
void biggest_apartment_per_floor(void)  // prints the owner of the biggest apartment per floor
{
  int max, i, j;
  char max_owner[50];
  
  for (i = 1; i < 6; i++)
  {
    max = 0;
    for (j = 0; j < 50; j++)
    {
      if (block_of_flats[j].floor == i && block_of_flats[j].size > max)
      {
        max = block_of_flats[j].size;
        strcpy(max_owner, block_of_flats[j].owner);
      }
    }
    printf("Floor number %d\n", i);
    printf("Name of owner with the biggest apartment: %s\n", max_owner);
    printf("-----------------------------------------\n");
  }
}



void main(void)
{
  int i, user_choice;

  /* kataxwrisi stoixeiwn */
  struct apartment no1;
  struct apartment no2;
  struct apartment no3;
  struct apartment no4;
  struct apartment no5;
  struct apartment no6;
  struct apartment no7;
  struct apartment no8;
  struct apartment no9;
  struct apartment no10;
  struct apartment no11;
  struct apartment no12;
  struct apartment no13;
  struct apartment no14;
  struct apartment no15;
  struct apartment no16;
  struct apartment no17;
  struct apartment no18;
  struct apartment no19;
  struct apartment no20;
  struct apartment no21;
  struct apartment no22;
  struct apartment no23;
  struct apartment no24;
  struct apartment no25;
  struct apartment no26;
  struct apartment no27;
  struct apartment no28;
  struct apartment no29;
  struct apartment no30;
  struct apartment no31;
  struct apartment no32;
  struct apartment no33;
  struct apartment no34;
  struct apartment no35;
  struct apartment no36;
  struct apartment no37;
  struct apartment no38;
  struct apartment no39;
  struct apartment no40;
  struct apartment no41;
  struct apartment no42;
  struct apartment no43;
  struct apartment no44;
  struct apartment no45;
  struct apartment no46;
  struct apartment no47;
  struct apartment no48;
  struct apartment no49;
  struct apartment no50;
  strcpy(no1.owner, "Papadopoulos");
  no1.number = 1;
  no1.size = 40;
  no1.floor = 1;
  block_of_flats[0] = no1;
  strcpy(no2.owner, "Dimitriou");
  no2.number = 2;
  no2.size = 70;
  no2.floor = 1;
  block_of_flats[1] = no2;
  strcpy(no3.owner, "Alexandrou");
  no3.number = 3;
  no3.size = 48;
  no3.floor = 1;
  block_of_flats[2] = no3;
  strcpy(no4.owner, "Anastasiou");
  no4.number = 4;
  no4.size = 59;
  no4.floor = 1;
  block_of_flats[3] = no4;
  strcpy(no5.owner, "Vasilakis");
  no5.number = 5;
  no5.size = 25;
  no5.floor = 1;
  block_of_flats[4] = no5;
  strcpy(no6.owner, "Papandreou");
  no6.number = 6;
  no6.size = 30;
  no6.floor = 1;
  block_of_flats[5] = no6;
  strcpy(no7.owner, "Michalopoulos");
  no7.number = 7;
  no7.size = 55;
  no7.floor = 1;
  block_of_flats[6] = no7;
  strcpy(no8.owner, "Eleftheriou");
  no8.number = 8;
  no8.size = 43;
  no8.floor = 1;
  block_of_flats[7] = no8;
  strcpy(no9.owner, "Arvanitis");
  no9.number = 9;
  no9.size = 32;
  no9.floor = 1;
  block_of_flats[8] = no9;
  strcpy(no10.owner, "Nikolopoulos");
  no10.number = 10;
  no10.size = 24;
  no10.floor = 1;
  block_of_flats[9] = no10;
  strcpy(no11.owner, "Sotiriou");
  no11.number = 11;
  no11.size = 43;
  no11.floor = 2;
  block_of_flats[10] = no11;
  strcpy(no12.owner, "Emmanouil");
  no12.number = 12;
  no12.size = 50;
  no12.floor = 2;
  block_of_flats[11] = no12;
  strcpy(no13.owner, "Michos");
  no13.number = 13;
  no13.size = 80;
  no13.floor = 2;
  block_of_flats[12] = no13;
  strcpy(no14.owner, "Papaioannou");
  no14.number = 14;
  no14.size = 54;
  no14.floor = 2;
  block_of_flats[13] = no14;
  strcpy(no15.owner, "Dimas");
  no15.number = 15;
  no15.size = 32;
  no15.floor = 2;
  block_of_flats[14] = no15;
  strcpy(no16.owner, "Konstantinidis");
  no16.number = 16;
  no16.size = 48;
  no16.floor = 2;
  block_of_flats[15] = no16;
  strcpy(no17.owner, "Panousopoulos");
  no17.number = 17;
  no17.size = 25;
  no17.floor = 2;
  block_of_flats[16] = no17;
  strcpy(no18.owner, "Athanasiadis");
  no18.number = 18;
  no18.size = 30;
  no18.floor = 2;
  block_of_flats[17] = no18;
  strcpy(no19.owner, "Pafilis");
  no19.number = 19;
  no19.size = 47;
  no19.floor = 2;
  block_of_flats[18] = no19;
  strcpy(no20.owner, "Katsivelis");
  no20.number = 20;
  no20.size = 39;
  no20.floor = 2;
  block_of_flats[19] = no20;
  strcpy(no21.owner, "Diamantidis");
  no21.number = 21;
  no21.size = 50;
  no21.floor = 3;
  block_of_flats[20] = no21;
  strcpy(no22.owner, "Nikolaidis");
  no22.number = 22;
  no22.size = 48;
  no22.floor = 3;
  block_of_flats[21] = no22;
  strcpy(no23.owner, "Hatziioannou");
  no23.number = 23;
  no23.size = 25;
  no23.floor = 3;
  block_of_flats[22] = no23;
  strcpy(no24.owner, "Eythimiou");
  no24.number = 24;
  no24.size = 23;
  no24.floor = 3;
  block_of_flats[23] = no24;
  strcpy(no25.owner, "Ilias");
  no25.number = 25;
  no25.size = 81;
  no25.floor = 3;
  block_of_flats[24] = no25;
  strcpy(no26.owner, "Pitaras");
  no26.number = 26;
  no26.size = 40;
  no26.floor = 3;
  block_of_flats[25] = no26;
  strcpy(no27.owner, "Proestakis");
  no27.number = 27;
  no27.size = 32;
  no27.floor = 3;
  block_of_flats[26] = no27;
  strcpy(no28.owner, "Lytras");
  no28.number = 28;
  no28.size = 47;
  no28.floor = 3;
  block_of_flats[27] = no28;
  strcpy(no29.owner, "Mitsis");
  no29.number = 29;
  no29.size = 60;
  no29.floor = 3;
  block_of_flats[28] = no29;
  strcpy(no30.owner, "Nikas");
  no30.number = 30;
  no30.size = 39;
  no30.floor = 3;
  block_of_flats[29] = no30;
  strcpy(no31.owner, "Apostolakis");
  no31.number = 31;
  no31.size = 47;
  no31.floor = 4;
  block_of_flats[30] = no31;
  strcpy(no32.owner, "Tritsis");
  no32.number = 32;
  no32.size = 80;
  no32.floor = 4;
  block_of_flats[31] = no32;
  strcpy(no33.owner, "Xanthopoulos");
  no33.number = 33;
  no33.size = 23;
  no33.floor = 4;
  block_of_flats[32] = no33;
  strcpy(no34.owner, "Michelakos");
  no34.number = 34;
  no34.size = 34;
  no34.floor = 4;
  block_of_flats[33] = no34;
  strcpy(no35.owner, "Floros");
  no35.number = 35;
  no35.size = 40;
  no35.floor = 4;
  block_of_flats[34] = no35;
  strcpy(no36.owner, "Michalakas");
  no36.number = 36;
  no36.size = 52;
  no36.floor = 4;
  block_of_flats[35] = no36;
  strcpy(no37.owner, "Spathas");
  no37.number = 37;
  no37.size = 49;
  no37.floor = 4;
  block_of_flats[36] = no37;
  strcpy(no38.owner, "Douros");
  no38.number = 38;
  no38.size = 44;
  no38.floor = 4;
  block_of_flats[37] = no38;
  strcpy(no39.owner, "Papadakis");
  no39.number = 39;
  no39.size = 57;
  no39.floor = 4;
  block_of_flats[38] = no39;
  strcpy(no40.owner, "Ermolaou");
  no40.number = 40;
  no40.size = 42;
  no40.floor = 4;
  block_of_flats[39] = no40;
  strcpy(no41.owner, "Sarantakis");
  no41.number = 41;
  no41.size = 50;
  no41.floor = 5;
  block_of_flats[40] = no41;
  strcpy(no42.owner, "Nikopoulou");
  no42.number = 42;
  no42.size = 25;
  no42.floor = 5;
  block_of_flats[41] = no42;
  strcpy(no43.owner, "Mastrogianni");
  no43.number = 43;
  no43.size = 28;
  no43.floor = 5;
  block_of_flats[42] = no43;
  strcpy(no44.owner, "Tzoras");
  no44.number = 44;
  no44.size = 39;
  no44.floor = 5;
  block_of_flats[43] = no44;
  strcpy(no45.owner, "Remakis");
  no45.number = 45;
  no45.size = 70;
  no45.floor = 5;
  block_of_flats[44] = no45;
  strcpy(no46.owner, "Doulkidis");
  no46.number = 46;
  no46.size = 45;
  no46.floor = 5;
  block_of_flats[45] = no46;
  strcpy(no47.owner, "Terzopoulos");
  no47.number = 47;
  no47.size = 28;
  no47.floor = 5;
  block_of_flats[46] = no47;
  strcpy(no48.owner, "Miltiadou");
  no48.number = 48;
  no48.size = 60;
  no48.floor = 5;
  block_of_flats[47] = no48;
  strcpy(no49.owner, "Deiximos");
  no49.number = 49;
  no49.size = 42;
  no49.floor = 5;
  block_of_flats[48] = no49;
  strcpy(no50.owner, "Panoutsos");
  no50.number = 50;
  no50.size = 50;
  no50.floor = 5;
  block_of_flats[49] = no50;
  /*telos kataxwrhshs stoixeiwn*/

  printf("-------------Instructions--------------\n");
  printf("Print surface per floor: Press 1\n");
  printf("Print all the apartments with owner and expenses: Press 2\n");
  printf("Print the expenses of a specific apartment: Press 3\n");
  printf("Print the owner of the biggest apartment per floor: Press 4\n");
  printf("Terminate program: Press 0\n");
  printf("---------------------------------------\n");

  for (i = 0; i < 50; i++)  // euresh ths synolikhs epifaneias olwn twn diamerismatwn.
  {
    total_surface += block_of_flats[i].size;
  }

  while(TRUE)
  {
    printf("Enter choice: ");
    scanf("%d", &user_choice);
    if (user_choice == 1)
    {
      surface_per_floor();
    }
    else if (user_choice == 2)
    { 
      print_money_per_apartment();
    }
    else if (user_choice == 3)
    {
      print_specific_apartment();
    }
    else if (user_choice == 4)
    {
      biggest_apartment_per_floor();
    }
    else if (user_choice == 0)
    {
      break;
    }
    else
    {
      printf("Invalid choice.\n");
      continue;
    };
  }
  printf("Program terminated\n");
  return;


}
