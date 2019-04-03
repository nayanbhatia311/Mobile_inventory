#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

char password_given[10]="123",password_entered[10];
char ch; //use for password field

#define LINEE printf("\t\t--------------------------------------------------------------------\n");
#define LINE printf("\t\t========================================\n");
#define DELAY for(i=0;i<32767;i++) for(j=0;j<32767/2;j++);  //Delay function implementation using for loop
unsigned int i,j; //i and j are used in delay function

void write();void mobile_write(int val);
void read();void mobile_read(int val);void all_read();
void erase();
void search();void mobile_search(int val);
void modify();void mobile_modify();
int password();
void filter();
void rom();void ram();void display();void battery();void price();

struct mob
{
    char model_nm[100];
    float prize;
    float display_size; //size in inch
    int ram;
    int rom;
    float rear_cam;
    float front_cam;
    int battery;

};
struct mob mobile_str; //variables str=structure


int main()
{
    ClearConsoleToColors(17,15);
    int option,result;
    do
    {
        printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
        printf("\n\n\t\tMAIN MENU\n");
        LINE
        printf("\n\t\tENTER CHOICE\n");
        printf("\t\t[0] EXIT\n");
        printf("\t\t[1] WRITE TO THE Advisory\n");
        printf("\t\t[2] READ THE Advisory\n");
        printf("\t\t[3] ERASE THE Advisory\n");
        printf("\t\t[4] SEARCH THE Advisory\n");
        printf("\t\t[5] MODIFY THE Advisory\n");
        printf("\t\t[6] FILTER BY Advisory\n");
        LINE
        printf("\t\t");
        scanf("%d",&option);
        system("cls");
        switch(option){
            case 0:
                printf("\n\tTHANK YOU");
                break;
            case 1:
                 system("cls");
                result=password();
                if(result)
                {
                    printf("\n\tAUTHENTIFICATION SUCCESSFUL");
                    DELAY
                    system("cls");
                    write();
                }
                else
                {
                    printf("\n\tINVALID PASSWORD"); Beep(1000,1000);
                    //Beep(1000,1000);
                    DELAY
                    system("cls");
                }
                break;
            case 2:
                 system("cls");
                result=password();
                if(result)
                {
                    printf("\n\tAUTHENTIFICATION SUCCESSFUL");
                    DELAY
                    system("cls");
                    read();
                }
                else
                {
                    printf("\n\tINVALID PASSWORD"); Beep(1000,1000);
                    DELAY
                    system("cls");
                }
                break;
            case 3:
                 system("cls");
                result=password();
                if(result)
                {
                    printf("\n\tAUTHENTIFICATION SUCCESSFUL");
                    DELAY
                    system("cls");
                    erase();
                }
                else
                {
                    printf("\n\tINVALID PASSWORD"); Beep(1000,1000);
                    DELAY
                    system("cls");
                }
                break;
            case 4:
                system("cls");
                result=password();
                if(result)
                {
                    printf("\n\tAUTHENTIFICATION SUCCESSFUL");
                    DELAY
                    system("cls");
                    search();
                }
                else
                {
                    printf("\n\tINVALID PASSWORD"); Beep(1000,1000);
                    DELAY
                    system("cls");
                }
                break;
            case 5:
                 system("cls");
                result=password();
                if(result)
                {
                    printf("\n\tAUTHENTIFICATION SUCCESSFUL");
                    DELAY
                    system("cls");
                    modify();
                }
                else
                {
                    printf("\n\tINVALID PASSWORD"); Beep(1000,1000);
                    DELAY
                    system("cls");
                }
                break;
            case 6:
                system("cls");
                result=password();
                if(result)
                {
                    printf("\n\tAUTHENTIFICATION SUCCESSFUL");
                    DELAY
                    system("cls");
                    filter();
                }
                else
                {
                    printf("\n\tINVALID PASSWORD"); Beep(1000,1000);
                    DELAY
                    system("cls");
                }
                break;
            default:
                printf("\n\tInvalid option\n");
                DELAY
                system("cls");
            }

    }while(option);

    return 0;
}

void write()
{
    int option;
    do{

            printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
            printf("\n\n\t\tWRITE MENU\n");
            LINE
            printf("\n\t\tENTER THE MODELS COMPANY\n");
            printf("\n\t\t[0] EXIT THE PROGRAM\n");
            printf("\t\t[1] EXIT\n");
            printf("\t\t[2] SAMSUNG\n");
            printf("\t\t[3] VIVO\n");
            printf("\t\t[4] OPPO\n");
            printf("\t\t[5] NOKIA\n");
            LINE
            scanf("%d",&option);
            system("cls");
            switch(option)
            {
                case 0:
                    system("cls");
                    printf("\n\tTHANK YOU");
                    exit(0);
                case 1:
                    system("cls");
                    printf("\n\tEXITING WRITE MENU");
                    DELAY
                    system("cls");
                    break;
                case 2:
                    mobile_write(1);
                    system("cls");
                    break;
                case 3:
                    mobile_write(2);
                    system("cls");
                    break;
                case 4:
                    mobile_write(3);
                    system("cls");
                    break;
                case 5:
                    mobile_write(4);
                    system("cls");
                    break;
                default:
                    printf("\n\tInvalid option");
                    DELAY
                    system("cls");
            }

    }while(option!=1);

}

void mobile_write(int val)
{

      fflush(stdin);

      printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
      printf("\n\n\t\tWRITE MENU\n");
      LINE
        printf("\n\t\tEnter model name\n\t\t");
        gets(mobile_str.model_nm);  //gets not working // solved by using fflush(stdin) as suggested by mam

        printf("\t\tEnter price\n\t\t");
        scanf("%f",&mobile_str.prize);

        printf("\t\tEnter display size\n\t\t");
        scanf("%f",&mobile_str.display_size);

        printf("\t\tEnter ram\n\t\t");
        scanf("%d",&mobile_str.ram);

        printf("\t\tEnter rom\n\t\t");
        scanf("%d",&mobile_str.rom);

        printf("\t\tRear camera (in megapixel)\n\t\t");
        scanf("%f",&mobile_str.rear_cam);

        printf("\t\tFront camera (in megapixel)\n\t\t");
        scanf("%f",&mobile_str.front_cam);

        printf("\t\tBattery (MHz)\n\t\t");
        scanf("%d",&mobile_str.battery);
        LINE

        // Storing the above data inside a file
        FILE *ptr;
        if(val==1)
        ptr=fopen("samsung.txt","ab+");
        else if(val==2)
        ptr=fopen("vivo.txt","ab+");
        else if(val==3)
        ptr=fopen("oppo.txt","ab+");
        else if(val==4)
        ptr=fopen("nokia.txt","ab+");
        if(ptr==NULL)
        {
            printf("\n\t\tERROR,TERMINATE THE PROCESS...");
            exit(0);
        }
        else
        {
        fwrite(&mobile_str,sizeof(mobile_str),1,ptr);
        }
        fclose(ptr);

        printf("\n\t\tDATA ENTERED SUCCESSFULLY");
        DELAY

}

void erase()
{
    int option;
    char ch;
    do{

    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
    printf("\n\n\t\tERASE MENU\n");
    LINE
    printf("\n\t\tENTER THE MODELS COMPANY\n");

            printf("\n\t\t[0] EXIT\n");
            printf("\t\t[1] SAMSUNG\n");
            printf("\t\t[2] VIVO\n");
            printf("\t\t[3] OPPO\n");
            printf("\t\t[4] NOKIA\n");
            printf("\t\t[5] ENTIRE DATABASE\n");
            LINE
    fflush(stdin);
    scanf("%d",&option);
    system("cls");
        switch(option)
            {
                case 0:
                    system("cls");
                    printf("\n\tEXITING");
                    DELAY
                    system("cls");
                    break;
                case 1:
                    system("cls");
                    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
                    printf("\n\n\t\tERASE MENU\n");
                    LINE
                    printf("\n\t\tARE YOU SURE YOU WANT TO DELETE ALL DATA(Y/N):\n\t\t");
                    fflush(stdin);
                    scanf("%c",&ch);


                    if(ch=='Y'||ch=='y')
                    {
                        remove("samsung.txt");
                        printf("\t\tSamsung database deleted succesfully");
                        DELAY
                        system("cls");
                    }
                    else if(ch=='N'||ch=='n')
                    {
                        printf("\t\tProcess cancelled");
                        DELAY
                        system("cls");
                    }
                    else
                    {
                        printf("\t\tInvalid option");
                        DELAY
                        system("cls");
                    }
                    break;
                case 2:
                    system("cls");
                    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
                    printf("\n\n\t\tERASE MENU\n");
                    LINE
                    printf("\n\t\tARE YOU SURE YOU WANT TO DELETE ALL DATA(Y/N):\n\t\t");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch=='Y'||ch=='y')
                    {
                        remove("vivo.txt");
                        printf("\t\tVivo database deleted succesfully");
                        DELAY
                        system("cls");
                    }
                    else if(ch=='N'||ch=='n')
                    {
                        printf("\t\tProcess cancelled");
                        DELAY
                        system("cls");
                    }
                    else
                    {
                        printf("\t\tInvalid option");
                        DELAY
                        system("cls");
                    }
                    break;
                case 3:
                    system("cls");
                    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
                    printf("\n\n\t\tERASE MENU\n");
                    LINE
                    printf("\n\t\tARE YOU SURE YOU WANT TO DELETE ALL DATA(Y/N):\n\t\t");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch=='Y'||ch=='y')
                    {
                        remove("oppo.txt");
                        printf("\t\tOppo database deleted succesfully");
                        DELAY
                        system("cls");
                    }
                    else if(ch=='N'||ch=='n')
                    {
                        printf("\t\tProcess cancelled");
                        DELAY
                        system("cls");
                    }
                    else
                    {
                        printf("\t\tInvalid option");
                        DELAY
                        system("cls");

                    }
                    break;
                case 4:
                    system("cls");
                    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
                    printf("\n\n\t\tERASE MENU\n");
                    LINE
                    printf("\n\t\tARE YOU SURE YOU WANT TO DELETE ALL DATA(Y/N):\n\t\t");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch=='Y'||ch=='y')
                    {
                        remove("nokia.txt");
                        printf("\t\tNokia database deleted succesfully");
                        DELAY
                        system("cls");
                    }
                    else if(ch=='N'||ch=='n')
                    {
                        printf("\t\tProcess cancelled");
                        DELAY
                        system("cls");
                    }
                    else
                    {
                        printf("\t\tInvalid option");
                        DELAY
                        system("cls");

                    }
                    break;
                case 5:
                    system("cls");
                    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
                    printf("\n\n\t\tERASE MENU\n");
                    LINE
                    printf("\n\t\tARE YOU SURE YOU WANT TO DELETE ALL DATA(Y/N):\n\t\t");
                    fflush(stdin);
                    scanf("%c",&ch);
                    if(ch=='Y'||ch=='y')
                    {
                        remove("samsung.txt");
                        remove("vivo.txt");
                        remove("oppo.txt");
                        remove("nokia.txt");
                        printf("\t\tEntire database deleted succesfully");
                        DELAY
                        system("cls");
                    }
                    else if(ch=='N'||ch=='n')
                    {
                        printf("\t\tProcess cancelled");
                        DELAY
                        system("cls");
                    }
                    else
                    {
                        printf("\t\tInvalid option");
                        DELAY
                        system("cls");

                    }
                    break;


            }
    }while(option);

}


int password()
{

        printf("\n\tEnter the password provided by the service operator\n\t");
        fflush(stdin);

            for(i=0; ;)      //need a proper terminating condition //maybe something to do with dynamically memory //solved using ch=='\r' condition
            {
                ch=getch();
                if(ch=='\r') //when enter is pressed \r is stored instead of \n //if getche was used, we could echo the password
                    break;
                if(ch=='\b')
                {
                    if(i>0)
                    {

                    printf("\b");
                    printf(" ");
                    printf("\b");
                    i--;
                    }
                    continue;
                }
                //printf("aa");
                password_entered[i] = ch;
                ch = '*' ;
                printf("%c",ch);
                i++;
            }
            password_entered[i] = '\0';

            if(strcmp(password_given,password_entered) == 0)
            {
                return 1;

            }
            else
            {
                return 0;

            }

}

 void read()
{
    int option;
    do{
            printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
            printf("\n\n\t\tREAD MENU\n");
            LINE
            printf("\n\t\tENTER THE MODELS COMPANY\n");
            printf("\n\t\t[0] EXIT THE PROGRAM\n");
            printf("\t\t[1] EXIT\n");
            printf("\t\t[2] SAMSUNG\n");
            printf("\t\t[3] VIVO\n");
            printf("\t\t[4] OPPO\n");
            printf("\t\t[5] NOKIA\n");
            printf("\t\t[6] ALL\n");
            LINE
        fflush(stdin);
        scanf("%d",&option);
        system("cls");
        switch(option)
        {
        case 0:
            system("cls");
            printf("\n\tTHANK YOU");
            exit(0);
        case 1:
            system("cls");
            printf("\n\tEXITING Screen Read");
            DELAY
            system("cls");
            break;
        case 2:
            mobile_read(1);
            system("cls");
            break;
        case 3:
            mobile_read(2);
            system("cls");
            break;
        case 4:
            mobile_read(3);
            system("cls");
            break;
        case 5:
            mobile_read(4);
            system("cls");
            break;
        case 6:
            all_read();
            system("cls");
            break;
        default:
            system("cls");
            printf("\n\tInvalid option");
            DELAY
            system("cls");

        }
    }while(option!=1);
}

void mobile_read(int val)
 {
     system("cls");
     printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
     printf("\n\n\t\tREAD MENU\n");
     LINE
     FILE *fptr;
     //char ch;
    if(val==1)
    {fptr = fopen("samsung.txt", "r");
    printf("\n\t\t>>>>SAMSUNG\n");
    LINE
    }
    else if(val==2)
    {fptr = fopen("vivo.txt", "r");
    printf("\n\t\t>>>>VIVO\n");
    LINE
    }
    else if(val==3)
    {fptr = fopen("oppo.txt", "r");
    printf("\n\t\t>>>>OPPO\n");
    LINE
    }
    else if(val==4)
    {fptr = fopen("nokia.txt", "r");
    printf("\n\t\t>>>>NOKIA\n");
    LINE
    }
    if (fptr == NULL)
    {
        printf("\n\t\tCannot open file \n");
        DELAY
    }

    while(fread(&mobile_str,sizeof(mobile_str),1,fptr) == 1){

        printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%f\n",mobile_str.prize);



        printf("\t\tDisplay size:%f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

        LINEE
    }
    printf("\n");
    LINE

    fclose(fptr);
    getch();
}


 void all_read()
{
 mobile_read(1);
 mobile_read(2);
 mobile_read(3);
 mobile_read(4);

}

void search()
{
    int option;
    do{


            printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
            printf("\n\n\t\tSEARCH MENU\n");
            LINE
            printf("\n\t\tENTER THE MODELS COMPANY\n");
            printf("\n\t\t[0] EXIT THE PROGRAM\n");
            printf("\t\t[1] EXIT\n");
            printf("\t\t[2] SAMSUNG\n");
            printf("\t\t[3] VIVO\n");
            printf("\t\t[4] OPPO\n");
            printf("\t\t[5] NOKIA\n");
            LINE
            scanf("%d",&option);
            system("cls");
            switch(option)
            {
                case 0:
                    system("cls");
                    printf("\n\tTHANK YOU");
                    exit(0);
                case 1:
                    system("cls");
                    printf("\n\tEXITING ");
                    DELAY
                    system("cls");
                    break;
                case 2:
                    mobile_search(1);
                    system("cls");
                    break;
                case 3:
                    mobile_search(2);
                    system("cls");
                    break;
                case 4:
                    mobile_search(3);
                    system("cls");
                    break;
                case 5:
                    mobile_search(4);
                    system("cls");
                    break;
                default:
                    printf("\n\tInvalid option");
                    DELAY
                    system("cls");
            }

    }while(option!=1);

}

void mobile_search(int val){

    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
    printf("\n\n\t\tSEARCH MENU\n");
    LINE

    char model_name[100];
    int isFound = 0;
    printf("\n\t\tENTER THE MODEL NAME TO BE SEARCHED: ");
    fflush(stdin);
    gets(model_name);
    FILE *ptr;
    if(val==1)
    ptr = fopen("samsung.txt","rb");
    else if(val==2)
    ptr = fopen("vivo.txt","rb");
    else if(val==3)
    ptr = fopen("oppo.txt","rb");
    else if(val==4)
    ptr = fopen("nokia.txt","rb");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(strcmp(model_name,mobile_str.model_nm) == 0){
            isFound = 1;
            break;
        }
    }
    if(isFound == 1){
        printf("\t\tThe record is Found\n");
         printf("\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%f\n",mobile_str.prize);

        printf("\t\tDisplay size:%f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }else{
        printf("\n\t\t Sorry, No record found in the database");
    }

    fclose(ptr);
    getch();
}

void modify()
{
    int option;
    do{


            printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
            printf("\n\n\t\tSEARCH MENU\n");
            LINE
            printf("\n\t\tENTER THE MODELS COMPANY\n");
            printf("\n\t\t[0] EXIT THE PROGRAM\n");
            printf("\t\t[1] EXIT\n");
            printf("\t\t[2] SAMSUNG\n");
            printf("\t\t[3] VIVO\n");
            printf("\t\t[4] OPPO\n");
            printf("\t\t[5] NOKIA\n");
            LINE
            scanf("%d",&option);
            system("cls");
            switch(option)
            {
                case 0:
                    system("cls");
                    printf("\n\tTHANK YOU");
                    exit(0);
                case 1:
                    system("cls");
                    printf("\n\tEXITING ");
                    DELAY
                    system("cls");
                    break;
                case 2:
                    mobile_modify(1);
                    system("cls");
                    break;
                case 3:
                    mobile_modify(2);
                    system("cls");
                    break;
                case 4:
                    mobile_modify(3);
                    system("cls");
                    break;
                case 5:
                    mobile_modify(4);
                    system("cls");
                    break;
                default:
                    printf("\n\tInvalid option");
                    DELAY
                    system("cls");
            }

    }while(option!=1);
}


void mobile_modify(int val){

     printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
     printf("\n\n\t\tSEARCH MENU\n");
     LINE

    char model_name[100];
    int isFound = 0;
    printf("\n\t\tENTER THE MODEL NAME TO BE MODIFIED: ");
    fflush(stdin);
    gets(model_name);
    FILE *ptr;
    if(val==1)
    ptr = fopen("samsung.txt","rb+");
    else if(val==2)
    ptr = fopen("vivo.txt","rb+");
    else if(val==3)
    ptr = fopen("oppo.txt","rb+");
    else if(val==4)
    ptr = fopen("nokia.txt","rb+");
    while(fread(&mobile_str, sizeof(mobile_str),1,ptr) == 1){
        if(strcmp(model_name, mobile_str.model_nm) == 0){
            fflush(stdin);

        printf("\t\tEnter model name\n\t\t");
        gets(mobile_str.model_nm);  //gets not working // solved by using fflush(stdin) as suggested by mam

        printf("\t\tEnter price\n\t\t");
        scanf("%f",&mobile_str.prize);

        printf("\t\tEnter display size\n\t\t");
        scanf("%f",&mobile_str.display_size);

        printf("\t\tEnter ram\n\t\t");
        scanf("%d",&mobile_str.ram);

        printf("\t\tEnter rom\n\t\t");
        scanf("%d",&mobile_str.rom);

        printf("\t\tRear camera (in megapixel)\n\t\t");
        scanf("%f",&mobile_str.rear_cam);

        printf("\t\tFront camera (in megapixel)\n\t\t");
        scanf("%f",&mobile_str.front_cam);

        printf("\t\tBattery (MHz)\n\t\t");
        scanf("%d",&mobile_str.battery);

            fseek(ptr,-sizeof(mobile_str), SEEK_CUR);
            fwrite(&mobile_str,sizeof(mobile_str), 1, ptr);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("\t\tNo Record Found");
    }
    fclose(ptr);
    DELAY
}

void filter()
{
    int option;
    do{

            printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
            printf("\n\n\t\tFILTER MENU\n");
            LINE
            printf("\n\t\tENTER THE OPTION\n");
            printf("\t\t[0] EXIT THE PROGRAM\n");
            printf("\t\t[1] EXIT\n");
            printf("\t\t[2] SORT BY PRICE\n");
            printf("\t\t[3] SORT BY BATTERY IN (MH)\n");
            printf("\t\t[4] SORT BY DISPLAY SIZE (IN INCHES)\n");
            printf("\t\t[5] SORT BY RAM\n");
            printf("\t\t[6] SORT BY ROM\n");
            LINE
            scanf("%d",&option);
            system("cls");

    switch(option)
    {
        case 0:
                system("cls");
                printf("\n\tTHANK YOU");
                exit(0);
        case 1:
                system("cls");
                printf("\n\tEXITING");
                DELAY
                system("cls");
                break;
        case 2:
                price();
                system("cls");
                break;
        case 3:
                battery();
                system("cls");
                break;
        case 4:
                display();
                system("cls");
                break;
        case 5:
                ram();
                system("cls");
                break;
        case 6:
                rom();
                system("cls");
                break;
        default:
                printf("\n\tInvalid option");
                DELAY
                system("cls");
            }

        }while(option!=1);

}

void price(){
    fflush(stdin);
    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
     printf("\n\n\t\tFILTER\n");
     LINE
    float budget,budget1;
    int count=0;
    printf("\n\t\t ENTER THE PRICE RANGE  : \n\t\t");
      printf("\n\t\t MINIMUM PRICE  : \n\t\t");
    scanf("%f",&budget);
      printf("\n\t\t MAXIMUM RANGE  : \n\t\t");
     scanf("%f",&budget1);
    LINE
    printf("\n\t\t>>>>SAMSUNG\n");
    LINE

    FILE *ptr;
    ptr = fopen("samsung.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
            if(budget<=mobile_str.prize && budget1>=mobile_str.prize ){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);

            LINE
            printf("\n\t\t>>>>VIVO\n");
            LINE
    ptr = fopen("vivo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(budget<=mobile_str.prize && budget1>=mobile_str.prize ){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
            LINE
            printf("\n\t\t>>>>OPPO\n");
            LINE
    ptr = fopen("oppo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(budget<=mobile_str.prize && budget1>=mobile_str.prize ){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
            LINE
            printf("\n\t\t>>>>NOKIA\n");
            LINE
    ptr = fopen("nokia.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(budget<=mobile_str.prize && budget1>=mobile_str.prize ){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
   LINE
    printf("\n\t\t There are total %d Mobiles That are in YOUR budget.......",count,budget);
        DELAY

    fclose(ptr);
    getch();
}

void display(){

    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
     printf("\n\n\t\tFILTER\n");
     LINE
     char chh;
    float siz;
    int count=0;
    printf("\n\t\tENTER DISPLAY SIZE : \n\t\t");
    fflush(stdin);
    scanf("%f",&siz);
    LINE
    printf("\n\t\tSAMSUNG\n");
    LINE
    FILE *ptr;
    ptr = fopen("samsung.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(siz>=mobile_str.display_size){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
        fclose(ptr);
     LINE
    printf("\n\t\tVIVO\n");
    LINE
    ptr = fopen("vivo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(siz>=mobile_str.display_size){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
    LINE
    printf("\n\t\tOPPO\n");
    LINE
    ptr = fopen("oppo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(siz>=mobile_str.display_size){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
    LINE
    printf("\n\t\tOPPO\n");
    LINE
    ptr = fopen("nokia.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(siz>=mobile_str.display_size){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
   LINE
    printf("\n\t\t There are total %d Mobiles having display size less than equal to %.2f .......",count,siz);
        DELAY

    fclose(ptr);

    getch();
}

void battery(){

    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
     printf("\n\n\t\tFILTER\n");
     LINE
     char chh;
    int battery;

    int count=0;
    printf("\n\t\tBattery CAPACITY : \n\t\t");
    fflush(stdin);
    scanf("%d",&battery);
    LINE
            printf("\n\t\tSAMSUNG\n");
            LINE
    FILE *ptr;
    ptr = fopen("samsung.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){

        if(battery<=mobile_str.battery){

         count++;
         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }

    fclose(ptr);
    LINE
            printf("\n\t\tVIVO\n");
            LINE
    ptr = fopen("vivo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(battery<=mobile_str.battery){
            count++;
         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
    LINE
            printf("\n\t\tOPPO\n");
            LINE
    ptr = fopen("oppo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(battery<=mobile_str.battery){
            count++;
         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
    LINE
            printf("\n\t\tNOKIA\n");
            LINE
    ptr = fopen("nokia.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(battery<=mobile_str.battery){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
   LINE
    printf("\n\t\t There are total %d Mobiles Having Battery storage more than/equal to %d .......",count,battery);
        DELAY

    fclose(ptr);

    getch();
}


void ram(){

    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
     printf("\n\n\t\tFILTER\n");
     LINE
     char chh;
    int ram;
    int count=0;
    printf("\n\t\tENTER RAM : \n\t\t");
    fflush(stdin);
    scanf("%d",&ram);
     LINE
            printf("\n\t\tSAMSUNG\n");
            LINE
    FILE *ptr;
    ptr = fopen("samsung.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
            if(ram>=mobile_str.ram){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
    LINE
            printf("\n\t\tVIVO\n");
            LINE

    ptr = fopen("vivo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(ram>=mobile_str.ram){
            count++;


         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
    LINE
            printf("\n\t\tOPPO\n");
            LINE

    ptr = fopen("oppo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(ram>=mobile_str.ram){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
    fclose(ptr);
    LINE
            printf("\n\t\tNOKIA\n");
            LINE

    ptr = fopen("nokia.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(ram>=mobile_str.ram){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
   LINE
    printf("\n\t\t There are total %d Mobiles Having RAM storage less than equal to %d .......",count,ram);
        DELAY

    fclose(ptr);

    getch();
}

void rom(){

    printf("\n\n\t\t>>>>>>> SMARTPHONE ADVISORY <<<<<<<\n");
     printf("\n\n\t\tFILTER\n");
     LINE
     char chh;
    int rom;
    int count=0;
    printf("\n\t\tENTER ROM : \n\t\t");
    fflush(stdin);
    scanf("%d",&rom);
     LINE
            printf("\n\t\tSAMSUNG\n");
            LINE
    FILE *ptr;
    ptr = fopen("samsung.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
            if(rom>=mobile_str.rom){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
     fclose(ptr);
     LINE
            printf("\n\t\tVIVO\n");
            LINE
    ptr = fopen("vivo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(rom>=mobile_str.rom){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
     fclose(ptr);
    LINE
            printf("\n\t\tOPPO\n");
            LINE
    ptr = fopen("oppo.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(rom>=mobile_str.rom){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%.2f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
     fclose(ptr);
     LINE
            printf("\n\t\tNOKIA\n");
            LINE
    ptr = fopen("nokia.txt","rb+");
    while(fread(&mobile_str,sizeof(mobile_str),1,ptr) == 1){
        if(rom>=mobile_str.rom){
            count++;

         printf("\n\t\tModel name:%s\n",mobile_str.model_nm);

        printf("\t\tPrice:%.2f\n",mobile_str.prize);



        printf("\t\tDisplay size:%.2f\n",mobile_str.display_size);

        printf("\t\tRam:%d\n",mobile_str.ram);


        printf("\t\tRom:%d\n",mobile_str.rom);


        printf("\t\tRear camera (in megapixel):%.2f\n",mobile_str.rear_cam);


        printf("\t\tFront camera (in megapixel):%f\n",mobile_str.front_cam);


        printf("\t\tBattery (MHz):%d\n",mobile_str.battery);

    }
    }
   LINE
    printf("\n\t\t There are total %d Mobiles Having ROM storage less than equal to %d .......",count,rom);
        DELAY

    fclose(ptr);

    getch();
}

void ClearConsoleToColors(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     ///Get the handle to the current output buffer...
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     ///This is used to reset the carat/cursor to the top left.
     COORD coord = {0, 0};
     ///A return value... indicating how many chars were written
     ///   not used but we need to capture this since it will be
     ///   written anyway (passing NULL causes an access violation).
     DWORD count;
     ///This is a structure containing all of the console info
     /// it is used here to find the size of the console.
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     ///Here we will set the current color
     SetConsoleTextAttribute(hStdOut, wColor);
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          ///This fills the buffer with a given character (in this case 32=space).
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
          ///This will set our cursor position for the next print statement.
          SetConsoleCursorPosition(hStdOut, coord);
     }
     return;
}

void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}

COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int x, int y){
    coord.X = x; coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
