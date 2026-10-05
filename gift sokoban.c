#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include"game.c"
#define F2 60
#define MAP_WIDTH 14
#define MAP_HEIGHT 10
#define PLAYER_POSITION pos_y * MAP_WIDTH + pos_x

 void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int r,c,q;
    gotoxy(30,10);
    printf("gift game loading...");
    system("color F");
    gotoxy(30,12);
    for(r=1; r<=20; r++)
    {
        for(q=0; q<=100000000; q++);
        printf("%c",177);
    }
    system("cls");
    getch();
    return mai();
}

int mai()
{
    system("cls");
    system("instruction\\instruction.docx");
    d_mainmenu();
    return 0;
}

void d_mainmenu()
{
    system("cls");
    system("color F");
    int i;
    char ch;
    const char *menu[]= {"   New Game","   Continiour game","   Level","   More Option","   Exit"};
    system("cls");
    window(25,50,20,32);
    gotoxy(33,18);
    printf("GAME MENU");
    for (i=0; i<=4; i++)
    {
        gotoxy(30,22+i+1);
        printf("%s\n\n\n",menu[i]);
    }
  curser(5);
}

void curser(int no)
{
    int count=1;
    char ch='0';
    gotoxy(30,23);
    while(1)
    {
        switch(ch)
        {
        case 80:
            count++;
            if (count==no+1) count=1;
            break;
        case 72:
            count--;
            if(count==0) count=no;
            break;
        }
        highlight(no,count);
        ch=getch();
        if(ch=='\r')
        {
            if(no==5)
            {
        switch(count)
    {
    case 1:
    system("cls");
     load();
    break;
    case 2:
    system("cls");
    gat();
    break;
    case 3:
    system("cls");
    maps();
    break;
    case 4:
    system("cls");
    instruct();
    break;
    case 5:
    system("cls");
    exit(0);
    break;
    default: d_mainmenu();
}

            }
        }
    }
}

void highlight(int no,int count)
{
    if (no==5)
    {
        gotoxy(30,23);
        printf("   New Game         ");
        gotoxy(30,24);
        printf("   Continiour Game  ");
        gotoxy(30,25);
        printf("   Level      ");
        gotoxy(30,26);
        printf("   More option   ");
        gotoxy (30,27);
        printf("   Exit           ");
        switch (count)
        {
        case 1:
            gotoxy(30,23);
            printf(" -> New Game       ");
            break;
        case 2:
            gotoxy(30,24);
            printf(" -> Continiour Game ");
            break;
        case 3:
            gotoxy(30,25);
            printf(" -> Level     ");
            break;
        case 4:
            gotoxy(30,26);
            printf(" -> More option   ");
            break;
        case 5:
            gotoxy (30,27);
            printf(" -> Exit           ");
            break;

        }

    }
    }

void window(int a,int b,int c,int d)
{
    int i;
    system("cls");
    gotoxy(20,10);
    for (i=1; i<=10; i++)
    printf("-");
    printf(" SOKOBAN GAME by ");
    for (i=1; i<=10; i++)
        printf("-");
    printf("\n\n");
    gotoxy(30,11);
    printf("GIFT THE GAMING PRO");
    for (i=a; i<=b; i++)
    {
        gotoxy(i,17);
        printf("\xcd");
        gotoxy(i,19);
        printf("\xcd");
        gotoxy(i,c);
        printf("\xcd");
        gotoxy(i,d);
        printf("\xcd");
    }

    gotoxy(a,17);
    printf("\xc9");
    gotoxy(a,18);
    printf("\xba");
    gotoxy(a,19);
    printf("\xc8");
    gotoxy(b,17);
    printf("\xbb");
    gotoxy(b,18);
    printf("\xba");
    gotoxy(b,19);
    printf("\xbc");
    for(i=c; i<=d; i++)
    {
        gotoxy(a,i);
        printf("\xba");
        gotoxy(b,i);
        printf("\xba");
    }
    gotoxy(a,c);
    printf("\xc9");
    gotoxy(a,d);
    printf("\xc8");
    gotoxy(b,c);
    printf("\xbb");
    gotoxy(b,d);
    printf("\xbc");
}

void GetPosition(int *pos_x, int *pos_y);
void MoveCharacter(int pos_x, int pos_y ,int offset);

char map[]=
{
    "#############\n"
    "#     # xB  #\n"
    "#  x  # xB  #\n"
    "#   B # xB  #\n"
    "#     ####  #\n"
    "#     @  #  #\n"
    "#        #  #\n"
    "#   B    #  #\n"
    "#    x      #\n"
    "#############\n"
};

void instruct()
{
    int f;
    system("color A5");
    printf("\n\npress\n\n");
    printf("1. for game instruction\n");
    printf("2. for game tutorial\n");
    printf("3. to change game\n");

    scanf("%d",&f);
    system("cls");
    if (f==1)
    return instruction();
    else if (f==2)
    return tuto();
    else if (f==3)
    return tex();
    else
    mai();
}

void tuto()
{
    system("cls");
    system("tuto\\tuto.avi");
    system("pause");
    d_mainmenu();
}

int instruction()
{
    system("cls");
    system("color F");
    printf("\t\t GAME INSTRUCTION\n\n\n");
    printf("- The 'B' represent the box\n\n");
    printf("- The 'x' represent where to place the box\n\n");
    printf("- The '@' represent the player\n\n");
    printf("- The '#' represent the wall\n\n");
    printf("* For the direction you can used the arrow key\n\n");
    printf("- \t\t\t OR \n\n");
    printf("*  when using the QWERTY keyboard or AZERTY keyboard,\n");
    printf("- press 'w' or 'z' to move up\n");
    printf("- press 'a' or 'q' to shift left\n");
    printf("- press 'd' to shift right\n");
    printf("- press 's'  to move down\n");
    printf("- press 'F2' for game option\n\n");
    system("pause");
    system("cls");
    return mai();
}

void tex(){
    char a;
    system("cls");
    system("color F");
    printf("-if you have play too much my sokoban choose this option\n\n");
    printf("\n-this option consist to change directly to the another game\n\n\n");
    printf("Are you sure you realy want to change game ('Y' for yes and 'N' for no )");
    scanf("%s",&a);
    switch(a){
        case 'y':
        case 'Y':
            system("cls");
            progate();
        case 'N':
        case 'n':
            system("cls");
            close();
            mai();
    }
}

void gat(){
 FILE *fp;
 system("cls");
 fp=fopen("save\\save data.dat","rb");
 while(fread(&map,sizeof(map),10,fp)==1)
{
 printf("%s",map);

}
  return body();
  fclose(fp);
}

void maps(){
    int x;
    system("color A");
    printf("choose the level of the game\t\n");
    printf("1.level 1\n");
    printf("2.level 2\n");
    printf("3.level 3\n");
    scanf("%d",&x);
    if (x==1)
        body();
        else if (x==2)
        bod();
        else if (x==3)
        body1();
    else
    mai();
}

void MoveCharacter(int pos_x, int pos_y ,int offset){
    if(map[PLAYER_POSITION + offset] != '#'){
        if(((map[PLAYER_POSITION + offset]== 'B') ||
                (map[PLAYER_POSITION + offset]== 'O')) &&
                (map[PLAYER_POSITION + offset * 2]!= '#' ||
                 map[PLAYER_POSITION + offset * 2]!= 'B' ||
                 map[PLAYER_POSITION + offset * 2]!= 'O' ))
        {
            map[PLAYER_POSITION]=' ';
            pos_x += offset;
            if(map[PLAYER_POSITION + offset] == ' ')
                map[PLAYER_POSITION + offset] = 'B';
            else if (map[PLAYER_POSITION + offset] == 'x')
                map[PLAYER_POSITION + offset] = 'O';
            else
            {
                map[PLAYER_POSITION - offset] = '@';
                return;
            }
            map[PLAYER_POSITION] = '@';
        }
        else
        {
            map[PLAYER_POSITION] = ' ';
            pos_x += offset;
            map[PLAYER_POSITION] = '@';
        }
    }
}

void GetPosition(int *pos_x, int *pos_y){
    int cell;
    int row,col;
    for(row=0; row<MAP_HEIGHT; row++)
    {
        for(col=0; col<MAP_WIDTH; col++)
        {
            cell=row * MAP_WIDTH + col;
            if (map[cell] == '@')
            {
                *pos_x = col;
                *pos_y =row;
            }
        }
    }
}

int dest_squares[10];
int GetDestSquares(){
    int count=0, cell;
    int row,col;
    for(row=0;row<MAP_HEIGHT;row++)
    {
        for(col=0;col<MAP_WIDTH;col++)
        {
            cell=row * MAP_WIDTH + col;
            if(map[cell] == 'x' || map[cell] == '0')
              dest_squares[count++] =cell;
        }
    }
    return count;
}

int load()
{
    int r,c,q;
    gotoxy(30,10);
    printf("level 1..");
    system("color F");
    gotoxy(30,12);
    for(r=1; r<=8; r++)
    {
        for(q=0; q<=1000000000; q++);
        printf("%c",177);
    }
    system("cls");
    return body();
}

int body(){
    system("cls");
    FILE *ptr;
    ptr=fopen("save\\save data.dat","w+");
    int key=-1;
    int i;
    int dest_count;
    int dest_num=GetDestSquares();
    int pos_x=0, pos_y=0;
    while(key !=27){
        system("cls");
        printf("%s\n",map);
        GetPosition(&pos_x, &pos_y);
        key=getch();
        switch(key)
        {
        case 72 :
        case 'z':
        case 'Z':
        case 'W':
        case 'w':
            MoveCharacter(pos_x, pos_y, - MAP_WIDTH);
            break;
        case 80 :
        case 's':
        case 'S':
            MoveCharacter(pos_x, pos_y,MAP_WIDTH);
            break;
        case 'q':
        case 'Q':
        case 75 :
        case 'A':
        case 'a':
            MoveCharacter(pos_x, pos_y, -1);
            break;
        case 'd':
        case 77 :
        case 'D':
            MoveCharacter(pos_x, pos_y, 1);
            break;
        case 'c':
        case  F2:
              choos();

        }
           dest_count = 0;
        for(i=0;i<10;i++){
            if(map[dest_squares[i]] =='O')
            {
                dest_count++;
            }
            if(map[dest_squares[i]] == ' ')
                map[dest_squares[i]] = 'x';
        }
       if(dest_count==dest_num){
            key=27;
            system("cls");
            printf("You win!\n\n");
            system("pause\n\n\n");
            choose();
       }
        }
      fclose(ptr);
    return 0;
}

void choos()
{
           system("cls");
           int k;
           FILE *ptr;
           ptr=fopen("save\\save data.dat","w+");
           printf("\t\t\t GAME OPTION \n\n\n");
           printf("press\n");
            printf("1. to save game\n");
            printf("2. to continiour game\n");
            printf("3. to go to main menu\n");
            printf("4. to exit\n");
            scanf("%d",&k);
            fscanf(ptr,"%d",&k);
         switch(k){
        case 1:
            system("cls");
            fprintf(ptr,"%s\n",map);
            printf("The game have being saved");
            getch();
            body();
            break;
        case 2:
            system("cls");
            body();
            break;
        case 3:
            system("cls");
            mai();
            break;
        case 4:
            system("cls");
            exit(0);
        break;
         }
         fclose(ptr);
}

void choose()
{
            system("cls");
            int k;
            FILE *ptr;
            ptr=fopen("save\\save data.dat","w+");
            printf("press\n");
            printf("1. to save game\n");
            printf("2. to go to main menu\n");
            printf("3. to go to next level\n");
            printf("4. to exit\n");
            scanf("%d",&k);
            fscanf(ptr,"%d",&k);
         switch(k){
        case 1:
            system("cls");
            fprintf(ptr,"%s\n",map);
            printf("The game have being saved");
            getch();
            choose();
            break;
        case 2:
            system("cls");
            mai();
            break;
        case 3:
            system("cls");
            load0();
            break;
        case 4:
            system("cls");
            exit(0);
        break;
         }

       fclose(ptr);
}

char map0[]={
    "#############\n"
    "#   Bx Bx Bx#\n"
    "###         #\n"
    "# ########  #\n"
    "#  Bx # x   #\n"
    "#  Bx #  B  #\n"
    "#  ######   #\n"
    "#  # B      #\n"
    "#   @x      #\n"
    "#############\n"
};

void MoveCharacter0(int pos_x, int pos_y ,int offset){
    if(map0[PLAYER_POSITION + offset] != '#'){
        if(((map0[PLAYER_POSITION + offset]== 'B') ||
                (map0[PLAYER_POSITION + offset]== 'O')) &&
                (map0[PLAYER_POSITION + offset * 2]!= '#' ||
                 map0[PLAYER_POSITION + offset * 2]!= 'B' ||
                 map[PLAYER_POSITION + offset * 2]!= 'O' ))
        {
            map0[PLAYER_POSITION]=' ';
            pos_x += offset;
            if(map0[PLAYER_POSITION + offset] == ' ')
                map0[PLAYER_POSITION + offset] = 'B';
            else if (map0[PLAYER_POSITION + offset] == 'x')
                map0[PLAYER_POSITION + offset] = 'O';
            else
            {
                map0[PLAYER_POSITION - offset] = '@';
                return;
            }
            map0[PLAYER_POSITION] = '@';
        }
        else
        {
            map0[PLAYER_POSITION] = ' ';
            pos_x += offset;
            map0[PLAYER_POSITION] = '@';
        }
    }
}

void GetPosition0(int *pos_x, int *pos_y){
    int cell;
    int row,col;
    for(row=0; row<MAP_HEIGHT; row++)
    {
        for(col=0; col<MAP_WIDTH; col++)
        {
            cell=row * MAP_WIDTH + col;
            if (map0[cell] == '@')
            {
                *pos_x = col;
                *pos_y =row;
            }
        }
    }
}

int dest_squares0[10];
int DestSquares0(){
    int count=0, cell;
    int row,col;
    for(row=0;row<MAP_HEIGHT;row++)
    {
        for(col=0;col<MAP_WIDTH;col++)
        {
            cell=row * MAP_WIDTH + col;
            if(map0[cell] == 'x' || map0[cell] == '0')
              dest_squares0[count++] =cell;
        }
    }
    return count;
}

int load0()
{
    int r,c,q;
    gotoxy(30,10);
    printf("level 2..");
    system("color F");
    gotoxy(30,12);
    for(r=1; r<=8; r++)
    {
        for(q=0; q<=1000000000; q++);
        printf("%c",177);
    }
    system("cls");
    return bod();
}

int bod(){
    system("cls");
    FILE *ptr;
    ptr=fopen("save\\save data.dat","w+");
    int key=-1;
    int i;
    int dest_count0;
    int dest_num0=DestSquares0();
    int pos_x=0, pos_y=0;
    while(key !=27){
        system("cls");
        printf("%s\n",map0);
        GetPosition0(&pos_x, &pos_y);
        key=getch();
        switch(key)
        {
        case 72 :
        case 'z':
        case 'Z':
        case 'W':
        case 'w':
            MoveCharacter0(pos_x, pos_y, - MAP_WIDTH);
            break;
        case 80 :
        case 's':
        case 'S':
            MoveCharacter0(pos_x, pos_y,MAP_WIDTH);
            break;
        case 'q':
        case 'Q':
        case 75 :
        case 'A':
        case 'a':
            MoveCharacter0(pos_x, pos_y, -1);
            break;
        case 'd':
        case 77 :
        case 'D':
            MoveCharacter0(pos_x, pos_y, 1);
            break;
        case F2:
              choos0();

        }
           dest_count0 = 0;
        for(i=0;i<10;i++){
            if(map0[dest_squares0[i]] =='O')
            {
                dest_count0++;
            }
            if(map0[dest_squares0[i]] == ' ')
                map0[dest_squares0[i]] = 'x';
        }
       if(dest_count0==dest_num0){
            key=27;
            system("cls");
            printf("You win!\n\n");
            system("pause\n\n\n");
            choose0();
       }
        }
      fclose(ptr);
    return 0;
}

void choos0()
{
           system("cls");
           int k;
           FILE *ptr;
           ptr=fopen("save\\save data.dat","w+");
           printf("\t\t\t GAME OPTION \n\n\n");
           printf("press\n");
            printf("1. to save game\n");
            printf("2. to continiour game\n");
            printf("3. to go to main menu\n");
            printf("4. to exit\n");
            scanf("%d",&k);
            fscanf(ptr,"%d",&k);
         switch(k){
        case 1:
            system("cls");
            fprintf(ptr,"%s\n",map0);
            printf("The game have being saved");
            getch();
            bod();
            break;
        case 2:
            system("cls");
            bod();
            break;
        case 3:
            system("cls");
            mai();
            break;
        case 4:
            system("cls");
            exit(0);
        break;
         }
         fclose(ptr);
}

void choose0()
{
            system("cls");
            int k;
            FILE *ptr;
            ptr=fopen("save\\save data.dat","w+");
            printf("press\n");
            printf("1. to save game\n");
            printf("2. to go to main menu\n");
            printf("3. to go to next level\n");
            printf("4. to exit\n");
            scanf("%d",&k);
            fscanf(ptr,"%d",&k);
         switch(k){
        case 1:
            system("cls");
            fprintf(ptr,"%s\n",map0);
            printf("The game have being saved");
            getch();
            choose0();
            break;
        case 2:
            system("cls");
            mai();
            break;
        case 3:
            system("cls");
            load1();
            break;
        case 4:
            system("cls");
            exit(0);
        break;
         }

       fclose(ptr);
}


char map1[]=
{
    "#############\n"
    "#      ######\n"
    "#          ##\n"
    "###B  # xB  #\n"
    "#   x # xB B#\n"
    "#  ####### x#\n"
    "#  #  @  ####\n"
    "#  # ### #  #\n"
    "#     # B#  #\n"
    "# B  x#    x#\n"
    "#############\n"
};

int dest_squares1[10];
int DestSquares1(){
    int count=0, cell;
    int row,col;
    for(row=0;row<MAP_HEIGHT;row++)
    {
        for(col=0;col<MAP_WIDTH;col++)
        {
            cell=row * MAP_WIDTH + col;
            if(map1[cell] == 'x' || map1[cell] == '0')
              dest_squares1[count++] =cell;
        }
    }
    return count;
}

void choos1()
{
           system("cls");
           int k;
           FILE *ptr;
           ptr=fopen("save\\save data.dat","w+");
           printf("\t\t\t GAME OPTION \n\n\n");
           printf("press\n");
            printf("1. to save game\n");
            printf("2. to continiour game\n");
            printf("3. to go to main menu\n");
            printf("4. to exit\n");
            scanf("%d",&k);
            fscanf(ptr,"%d",&k);
         switch(k){
        case 1:
            system("cls");
            fprintf(ptr,"%s\n",map1);
            printf("The game have being saved");
            getch();
            body1();
            break;
        case 2:
            system("cls");
            body1();
            break;
        case 3:
            system("cls");
            mai();
            break;
        case 4:
            system("cls");
            exit(0);
        break;
         }
         fclose(ptr);
}

void MoveCharacter1(int pos_x, int pos_y ,int offset){
    if(map1[PLAYER_POSITION + offset] != '#'){
        if(((map1[PLAYER_POSITION + offset]== 'B') ||
                (map1[PLAYER_POSITION + offset]== 'O')) &&
                (map1[PLAYER_POSITION + offset * 2]!= '#' ||
                 map1[PLAYER_POSITION + offset * 2]!= 'B' ||
                 map1[PLAYER_POSITION + offset * 2]!= 'O' ))
        {
            map1[PLAYER_POSITION]=' ';
            pos_x += offset;
            if(map1[PLAYER_POSITION + offset] == ' ')
                map1[PLAYER_POSITION + offset] = 'B';
            else if (map1[PLAYER_POSITION + offset] == 'x')
                map1[PLAYER_POSITION + offset] = 'O';
            else
            {
                map1[PLAYER_POSITION - offset] = '@';
                return;
            }
            map1[PLAYER_POSITION] = '@';
        }
        else
        {
            map1[PLAYER_POSITION] = ' ';
            pos_x += offset;
            map1[PLAYER_POSITION] = '@';
        }
    }
}

void GetPosition1(int *pos_x, int *pos_y){
    int cell;
    int row,col;
    for(row=0; row<MAP_HEIGHT; row++)
    {
        for(col=0; col<MAP_WIDTH; col++)
        {
            cell=row * MAP_WIDTH + col;
            if (map1[cell] == '@')
            {
                *pos_x = col;
                *pos_y =row;
            }
        }
    }
}

int load1()
{
    int r,c,q;
    gotoxy(30,10);
    printf("level 3..");
    system("color F");
    gotoxy(30,12);
    for(r=1; r<=8; r++)
    {
        for(q=0; q<=1000000000; q++);
        printf("%c",177);
    }
    system("cls");
    return body1();
}

int body1(){
    int key=-1;
    int i;
    int dest_count1;
    int dest_num1=DestSquares1();
    int pos_x=0, pos_y=0;;
    while(key !=27){
        system("cls");
        system("color 0");
        system("color E2");
        printf("%s\n",map1);
        GetPosition1(&pos_x, &pos_y);
        key =getch();
    switch(key)
        {
        case 72 :
        case 'z':
        case 'Z':
        case 'W':
        case 'w':
            MoveCharacter1(pos_x, pos_y, - MAP_WIDTH);
            break;
        case 80 :
        case 's':
        case 'S':
            MoveCharacter1(pos_x, pos_y,MAP_WIDTH);
            break;
        case 'q':
        case 'Q':
        case 75 :
        case 'A':
        case 'a':
            MoveCharacter1(pos_x, pos_y, -1);
            break;
        case 'd':
        case 77 :
        case 'D':
            MoveCharacter1(pos_x, pos_y, 1);
            break;
        case F2:
              choos1();
        }
          dest_count1 = 0;
        for(i=0;i<10;i++){
            if(map1[dest_squares1[i]] =='O')
            {
                dest_count1++;
            }
            if(map1[dest_squares1[i]] == ' ')
                map1[dest_squares1[i]] = 'x';
        }
       if(dest_count1==dest_num1){
            key=27;
            system("cls");
            printf("You win!\n\n");
            printf("congratulation You have completed the game\n\n");
            system("pause\n\n\n");
            exit(0);
       }
    }
    return 0;
}

