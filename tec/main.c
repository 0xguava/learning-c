#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void get_data(int x, char input[x]);
void engg_year(int x,char input[]);
void get_branch(char x[],char input[]);

int main(){
  int x,roll_no,yr,ch; char path[15],br[5];
  FILE *data;
  char name[50], branch[50], year[5], town[25];

  do {
    system("clear");
    printf("1.Enter data\n2.View data\nEnter choice(1/2): ");
    scanf("%d",&ch);

    system("clear");

    printf("Enter your Roll number: ");
    scanf("%d",&roll_no);

    printf("Years\n");
    printf("1.Ist\n2.IInd\n3.IIIrd\n4.IVth\n");
    printf("Enter year in Engineering(1/2/3/4): ");
    scanf("%d",&yr);
    engg_year(yr,year);
    if(yr!=1 && yr!=2 && yr!=3 && yr!=4){
      break;
    }

    printf("Enter Branch(R/N/M/S/U)in Caps only: ");
    scanf("%s",br);
    if(strcmp(br, "R")!=0 && strcmp(br, "N")!=0 && strcmp(br, "M")!=0 && strcmp(br, "S")!=0 && strcmp(br, "U1")!=0 && strcmp(br, "U2")!=0){
      printf("Invalid Input.\n");
      break;
    }

    system("clear");

    snprintf(path,sizeof(path),"data/%d%s-%d.txt",yr,br,roll_no);//Creates data file inside data directory, so data directory must be created before execution of code.

    switch(ch){
      case 1:{
        data = fopen(path, "a");
        if (data == NULL){
          printf("Technical error.\n");
          break;
        }
        printf("Enter Name: ");
        getchar();
        get_data(sizeof(name),name);
        printf("Enter Town of Residence: ");
        get_data(sizeof(town),town);
        get_branch(br, branch);
        fprintf(data,"Name: %s",name);
        fprintf(data,"Roll number: %d\n",roll_no);
        fprintf(data,"Branch: %s\n",branch);
        fprintf(data,"Year: %s\n",year);
        fprintf(data,"Town of Residence: %s\n",town);

        break;
      }

      case 2:{
        data = fopen(path, "r");
        if (data == NULL){
          printf("Enter data first.\n");
          break;
        }
        getchar();
        while(fgets(name,sizeof(name),data)){
          printf("%s",name);
        }
        break;
      }

      default: printf("Invalid Input.\n");
    }

    fclose(data);

    printf("To Repeat Enter 1: ");
    scanf("%d",&x);
    
  } while (x == 1);

  return 0;
}

void get_data(int x, char input[x]){
  /* function which gets string data from user */
  fgets(input,x,stdin);
}

void engg_year(int x,char input[]){
  switch(x){
    case 1:
      strcpy(input,"Ist");
      break;
    case 2:
      strcpy(input,"IInd");
      break;
    case 3:
      strcpy(input,"IIIrd");
      break;
    case 4:
      strcpy(input,"IVth");
      break;
    default: printf("Invalid input.\n");
  } 
}

void get_branch(char x[],char input[]){
  if(strcmp(x,"R") == 0){
    strcpy(input, "Computer Science Engineering");
  }else if(strcmp(x,"N") == 0){
    strcpy(input, "Information Technology");
  }else if(strcmp(x,"S") == 0){
    strcpy(input, "Electrical Engineering");
  }else if(strcmp(x,"M") == 0){
    strcpy(input, "Mechanical Engineering");
  }else if(strcmp(x,"U1") == 0 || strcmp(x,"U2") == 0){
    strcpy(input, "Electronics and Telecommunication Engineering");
  }else{
    printf("Invalid Input.\n");
  }
}
