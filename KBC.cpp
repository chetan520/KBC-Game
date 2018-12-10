#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<iomanip.h>
#include<fstream.h>
#include<string.h>
struct high{
		char name[20];
		int rec;
		public:
		void getdata();
		void putdata();
	   };
void high :: getdata()
	   {
	   cout<<"                           !!!! HIGH SCORE !!!!\n\n" ;
	   textcolor(BLUE);cprintf("                     Enter your name :");textcolor(15);
	   gets(name);
	   }
void high :: putdata()
	   {
			  cout<<"\n                  "<<name<<"                         "<<rec<<"\n";
	   }
int main()
{       randomize();
	char n;
	clrscr();
	int i,help=2;
	//========================================
	high score[10];
	fstream file;
	//========================================
	// clear data***************************************
     /*	file.open("sco.txt",ios::out);
      //	for(i=0;i<5;i++)
      //	{
	score[0].rec=-250;
	file.write((char *)&score[i],sizeof(score[i]));
     //	}   */
      // clear data ****************************************
	for(i=0;i<=8;i++)cout<<"\n";
	textbackground(BLUE);
	textcolor(15);cprintf("                  ");textbackground(15);cprintf("      ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("   ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf("     ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf("       ");textbackground(BLUE);cprintf("    ");textbackground(15);cprintf("  ");textbackground(BLUE);cprintf("    ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("   ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("                  ");
	textcolor(15);cprintf("                  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("       ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("   ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("         ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("      ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("   ");textbackground(15);cprintf("  ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("                  ");
	textcolor(15);cprintf("                  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("       ");textbackground(15);cprintf("     ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf("   ");textbackground(BLUE);cprintf("       ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("     ");textbackground(15);cprintf("      ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf(" ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf(" ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("                  ");
	textcolor(15);cprintf("                  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("       ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("   ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("         ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("     ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("    ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf("  ");textbackground(BLUE);cprintf("                  ");
	textcolor(15);cprintf("                  ");textbackground(15);cprintf("      ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("   ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf("     ");textbackground(BLUE);cprintf("     ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("     ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("    ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("  ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("   ");textbackground(15);cprintf(" ");textbackground(BLUE);cprintf("                  ");
	textbackground(0);
	sleep(1);
	clrscr();
	for(i=0;i<=8;i++)cout<<"\n";
	sleep(1);
	cout<<"\n";
	textcolor(6);cprintf("                    ######       ######   ###     ###  ");cout<<"\n";
	textcolor(6);cprintf("                    #            #       #   #   #   # ");cout<<"\n";
	textcolor(15);cprintf("                    #       ==   #####      #    #   # "); cout<<"\n";
	textcolor(GREEN);cprintf("                    #                 #    #     #   # ");cout<<"\n";
	textcolor(GREEN);cprintf("                    ######       #####    #####   ###  ");cout<<"\n";textcolor(15);
	for( i=0;i<=6;i++)
	{cout<<"\n";}
	cout<<setw(65)<<"-";sleep(1);
	textcolor(6);cprintf("C");textcolor(15);sleep(1);
	cprintf("H");sleep(1);
	textcolor(6);cprintf("E");textcolor(15);sleep(1);
	cprintf("T");sleep(1);
	textcolor(6);cprintf("A");textcolor(15);sleep(1);
	cprintf("N");sleep(1);
	textcolor(6);cprintf(" M");textcolor(15);sleep(1);
	cprintf("A");sleep(1);
	textcolor(6);cprintf("L");textcolor(15);sleep(1);
	cprintf("I\n ");sleep(2);
	clrscr();
	//*********************************************************
	clrscr();
	for(i=0;i<=15;i++)cout<<"\n";
	for(i=0;i<=37;i++)
		{
		textcolor(BLUE);cprintf("Z");textcolor(15);cprintf("Z");
		}
	cout<<"\n\n";
	textcolor(15);cprintf("                             !!");textcolor(BLUE);cprintf(" WELLCOME TO KBC ");textcolor(15);cout<<"!!\n ";
	cout<<"\n";
	textcolor(15);cprintf("                            !!");textcolor(BLUE);cprintf(" KAUN BANEGA CHETAN ");textcolor(WHITE);cout<<"!!";
	cout<<"\n\n";
	for(i=0;i<=37;i++)
		{
		textcolor(BLUE);cprintf("Z");textcolor(15);cprintf("Z");
		}
	for(i=0;i<=8;i++)cout<<"\n";
	for(i=0;i<=12;i++)cout<<"  ";
	system("pause");
	clrscr();
	// ****************************************

	start:

	int qc=1;
	clrscr();
	for(i=0;i<=37;i++)
		{
		textcolor(GREEN);cprintf("<");textcolor(15);cprintf(">");
		}
	for( i=0;i<=7;i++)cout<<"\n";
	textcolor(15);cprintf("                                1.");textcolor(GREEN);cprintf("Start Game\n");textcolor(15);
	cout<<"\n";
	textcolor(15);cprintf("                                2.");textcolor(GREEN);cprintf("High score\n");textcolor(15) ;
	cout<<"\n";
	textcolor(15);cprintf("                                3.");textcolor(GREEN);cprintf("Game Rules\n");textcolor(15)  ;
	cout<<"\n";
	textcolor(15);cprintf("                                4.");textcolor(GREEN);cprintf("Exit\n\n\n\n\n");textcolor(15) ;
	cout<<"\n";
	for(i=0;i<=37;i++)
		{
		textcolor(GREEN);cprintf("<");textcolor(15);cprintf(">");
		}
	cout<<"\nEnter your option :";
	n=getche();
	clrscr();
	int j;
	int cr=0,ir=0,sc=0,irp=0,crp=0;
    /*
18. 'Deshbandhu' is the title of-
(A) B. R. Ambedkar (B) C. R. Das
(C) B. C. Pal (D) Rabindranath Tagore
Ans : (B)

3. The vacancy of the office of the President must be filled
within ?
(A) 3 months (B) 6 months
(C) 12 months (D) 1 month
Ans : (B)

11. Which of the following was used as a chemical weapon in
the First World War?
(A) Mustard gas (B) Water gas
(C) Hydrogen cyanide (D) Caron monoxide
Ans : (A)



9. Which of the following is a programming language for creating
special programs like applets ?
(A) Java (B) cable
(C) domain name (D) Net
Ans : (A)

2. Who was the other Congress leader who joined with Motilal
Nehru to start the Swaraj Party in 1923 ?
(A) G. K. Gokhale (B) B. G. Tilak
(C) Chittaranjan Das (D) M. K. Gandhi
Ans : (C)

7. Computer and communication technologies, such as communication
links to the Internet that provide help and understanding
to the end user is known as–
(A) presentation file (B) information technology
(C) program (D) worksheet file
Ans : (B)

24. The boundary line between India and China is called–
(A) McMahon Line (B) Red Line        /*
(C) Radcliffe Line (D) Durand Line
Ans : (A)


 */
		switch(n)
			{ case '1': int s;
				    char ch;
				    nq:
				    s=(rand()%22)+1;

				    switch(s)
				    {
				      case 22 :
				   //-----------------------------------------------
						   r22:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                          Sonam Gupta Kaun Hai.....?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A) Bewafa Hai                      (B)  Pagal Hai\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"          (C) Acteress                    (D)     Angel\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='d' || ch=='D'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("[A] Bewafa Hai\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						      }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r22h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                          Sonam Gupta Kaun Hai.....?\n\n";
						   cout<<"          --------------------                                       \n";
						   cout<<"          (A) Bewafa Hai                                  \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\n                                              --------------------   \n";
						   cout<<"                                              (D)     Angel \n";
						   cout<<"                                              --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='d' || ch=='D')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(A) Bewafa Hai\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r22h;
						   }
						   }
						    else
						   {
							   goto r22;
						   }
				    case 21 :
				   //-----------------------------------------------
						   r21:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                      Who was known as iron man of India ?         \n\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------   ");textcolor(15);cout<<"\n";
						   cout<<"          (A) Govind pant                     (B) Sardar Vallabhbhai\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------");textcolor(15);cout<<"\n\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------   ");textcolor(15);cout<<"\n";
						   cout<<"          (C) Jawaharlal Nehru                (D) Subhash Chandra Bose\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------");textcolor(15);cout<<"\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='a' || ch=='A'||ch=='d' || ch=='D'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(GREEN);cprintf("(B) Sardar Vallabhbhai \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r21h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                      Who was known as iron man of India ?         \n\n";
						   textcolor(YELLOW);cprintf("                                              --------------------   ");textcolor(15);cout<<"\n";
						   cout<<"                                              (B) Sardar Vallabhbhai\n";
						   textcolor(YELLOW);cprintf("                                              --------------------");textcolor(15);cout<<"\n\n";
						   textcolor(YELLOW);cprintf("                                              --------------------   ");textcolor(15);cout<<"\n";
						   cout<<"                                              (D) Subhash Chandra Bose\n";
						   textcolor(YELLOW);cprintf("                                              --------------------");textcolor(15);cout<<"\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='D' || ch=='d')
							{  cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(GREEN);cprintf("(B) Sardar Vallabhbhai \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
							}
							else
							{
							   goto r21h;
							}
						   }
						   else
						   {
							   goto r21;
						   }
				    case 20 :
				   //-----------------------------------------------
						   r20:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                          Give the Full Form of CS -         \n\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------   ");textcolor(15);cout<<"\n";
						   cout<<"          (A) Counter strike                  (B) Computer Science\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------");textcolor(15);cout<<"\n\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------   ");textcolor(15);cout<<"\n";
						   cout<<"          (C) Common Sense                    (D) All the Above\n";
						   textcolor(YELLOW);cprintf("          --------------------                --------------------");textcolor(15);cout<<"\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(GREEN);cprintf("(D) All the Above\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r20h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                          Give the Full form of CS -           \n\n";
						   textcolor(YELLOW);cprintf("          --------------------                                       ");textcolor(15);cout<<"\n";
						   cout<<"          (A) Counter Strike                                    \n";
						   textcolor(YELLOW);cprintf("          --------------------                                    ");textcolor(15);cout<<"\n\n";
						   textcolor(YELLOW);cprintf("                                              --------------------   ");textcolor(15);cout<<"\n";
						   cout<<"                                              (D) All the Above \n";
						   textcolor(YELLOW);cprintf("                                              --------------------");textcolor(15);cout<<"\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='a' || ch=='A')
							{  cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(GREEN);cprintf("(D) All the Above \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
							}
							else
							{
							   goto r20h;
							}
						   }
						   else
						   {
							   goto r20;
						   }
				    case 19 :
				   //-----------------------------------------------
						   r19:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            The first battle of Panipat took place in the year ?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A)    1527 A.D.                    (B)    1528 A.D.\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"          (C)    1525 A.D.                    (D)    1526 A.D.\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(GREEN);cprintf("(D) 1526 A.D.\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r19h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            The first battle of Panipat took place in the year ?\n\n";
						   cout<<"          --------------------                                       \n";
						   cout<<"          (A)    1527 A.D.                                    \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\n                                              --------------------   \n";
						   cout<<"                                              (D)    1526 A.D.\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='a' || ch=='A')
							{  cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(GREEN);cprintf("(D) 1526 A.D.\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
							}
							else
							{
							   goto r19h;
							}
						   }
						   else
						   {
							   goto r19;
						   }
				    case 18 :
				   //-----------------------------------------------
						   r18:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                    Employment in Agriculture comes under-\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"       (A)   Services Sector              (B)Semi-organised Sector\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"       (C)   Organised Sector             (D) Unorganised Sector\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is";textcolor(2);cprintf("(D) Unorganised Sector\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r18h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                    Employment in Agriculture comes under-\n\n";
						   cout<<"                                                                     \n";
						   cout<<"                                                                  \n";
						   cout<<"                                                                  \n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"       (C)   Organised Sector             (D) Unorganised Sector\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D) Unorganised Sector\n");  textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						     else
						   {
							   goto r18h;
						   }
						   }
						   else
						   {
							   goto r18;
						   }
				     case 17 :
				   //-----------------------------------------------
						   r17:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"    In which of the following States are India's maximum number of mines\n";
						   cout<<"       producing minerals (excluding minor minerals, petroleum (crude),\n";
						   cout<<"                  natural gas and atomic minerals) located?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A) Madhya Pradesh                  (B)   Gujarat\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"          (C)    Jharkhand                    (D) Andhra Pradesh\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='a' || ch=='A'||ch=='d' || ch=='D'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(B) Gujarat\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r17h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"    In which of the following States are India's maximum number of mines\n";
						   cout<<"       producing minerals (excluding minor minerals, petroleum (crude),\n";
						   cout<<"                   natural gas and atomic minerals) located?\n\n";
						   cout<<"                                              --------------------   \n";
						   cout<<"                                              (B)   Gujarat\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\n          --------------------                                       \n";
						   cout<<"          (C)    Jharkhand                                      \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(B) Gujarat\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r17h;
						   }

						   }
						    else
						   {
							   goto r17;
						   }

				     case 16 :
				   //-----------------------------------------------
						   r16:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            Which of the following is the world's largest desert?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A)Australian Desert                (B) Arabian Desert\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"          (C)      Gobi                       (D)      Sahara\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D) Sahara\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						      }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r16h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            Which of the following is the world's largest desert?\n\n";
						   cout<<"          --------------------                                       \n";
						   cout<<"          (A)Australian Desert                                  \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\n                                              --------------------   \n";
						   cout<<"                                              (D)      Sahara\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='a' || ch=='A')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D) Sahara\n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r16h;
						   }
						   }
						    else
						   {
							   goto r16;
						   }

				    case 15 :
				   //-----------------------------------------------
						   r15:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                            Alta Vista is a/an -\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A)    browser                      (B) search engine\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"          (C)  application                    (D)    software\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='a' || ch=='A'||ch=='d' || ch=='D'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(B) search engine \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						    else if(help>0 && ch=='h' || ch== 'H')
						    {
						    //hhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						    help--;
						    r15h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                            Alta Vista is a/an -\n\n";
						   cout<<"                                              --------------------   \n";
						   cout<<"                                              (B) search engine\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\n          --------------------                                       \n";
						   cout<<"          (C)  application                                   \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(B) search engine \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r15h;
						   }
						    }
						    else
						   {
							   goto r15;
						   }
				      case 14 :
				   //-----------------------------------------------
						   r14:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"       Which one of the following is the fastest Indian Supercomputer\n";
						   cout<<"                             developed by ISRO ?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A)   Aakash-A1                     (B)    Saga-220\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"           (C) Jaguar-Cray                    (D)    Tianhe-lA\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='a' || ch=='A'||ch=='d' || ch=='D'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(B) Saga-220 \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
							//hhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r14h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"       Which one of the following is the fastest Indian Supercomputer\n";
						   cout<<"                             developed by ISRO ?\n\n";
						   cout<<"                                              --------------------   \n";
						   cout<<"                                              (B)    Saga-220\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\n          --------------------                                       \n";
						   cout<<"           (C) Jaguar-Cray                                    \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(B) Saga-220 \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r14h;
						   }
						   }
						    else
						   {
							   goto r14;
						   }
				    case 13 :
				   //-----------------------------------------------
						   r13:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"    Ram is 5 times as old as Shyam. If their difference of age is 8 years,\n";
						   cout<<"                              how old is Ram?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A)    10 years                      (B)   8 years\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"         (C)    12 years                      (D)    5 years\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='b' || ch=='B'||ch=='d' || ch=='D'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(A) 10 years \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						    help--;
						    r13h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"    Ram is 5 times as old as Shyam. If their difference of age is 8 years,\n";
						   cout<<"                              how old is Ram?\n\n";
						   cout<<"          --------------------                                       \n";
						   cout<<"          (A)    10 years                                   \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\n                                              --------------------   \n";
						   cout<<"                                              (D)    5 years\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='d' || ch=='D')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(A) 10 years \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r13h;
						   }

						   }
						    else
						   {
							   goto r13;
						   }

				    case 12 :
				   //-----------------------------------------------
						   r12:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"      A runs faster than E but not so fast as B and B runs faster than C \n";
						   cout<<"                 but not as faster than D, who runs faster?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"          (A)      A                          (B)        B\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"          (C)      C                          (D)        E\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(d) E\n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r12h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"      A runs faster than E but not so fast as B and B runs faster than C \n";
						   cout<<"                 but not as faster than D, who runs faster?\n\n";
						   cout<<"                                              --------------------   \n";
						   cout<<"                                              (B)        B\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\n                                              --------------------   \n";
						   cout<<"                                              (D)        E\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='b' || ch=='B')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(d) E\n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r12h;
						   }

						   }

						    else
						   {
							   goto r12;
						   }

				     case 11 :
				   //-----------------------------------------------
						   r11:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"    Which one of the following books is written by an Indian Author?\n\n";
						   cout<<"          --------------------                --------------------   \n";
						   cout<<"         (A) Five Point Someone               (B)  Harry Potter\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\n          --------------------                --------------------   \n";
						   cout<<"         (C) Beautiful Mind                   (D)   2Animal Farm\n";
						   cout<<"          --------------------                --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else if(ch=='d' || ch=='D'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(A) Five Point Someone \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhh
						    help--;
						    r11h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"    Which one of the following books is written by an Indian Author?\n\n";
						   cout<<"          --------------------                                       \n";
						   cout<<"         (A) Five Point Someone                                \n";
						   cout<<"          --------------------                                    \n";
						   cout<<"\n                                              --------------------   \n";
						   cout<<"                                              (D)   2 Animal Farm\n";
						   cout<<"                                              --------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else if(ch=='d' || ch=='D')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(A) Five Point Someone \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r11h;
						   }
						   }
						    else
						   {
							   goto r11;
						   }
				     case 10 :
				   //-----------------------------------------------
						   r10:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                         Blood group was discovered by -\n\n";
						   cout<<"              ----------------                ----------------   \n";
						   cout<<"              (A) Alexander Fleming           (B) William Harvey\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\n              ----------------                ----------------   \n";
						   cout<<"           	(C) Landsteiner                 (D) Pavlov\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='c' || ch=='C')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='a' || ch=='A'||ch=='d' || ch=='D'||ch=='b' || ch=='B')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(C) Landsteiner \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						     {
						     //hhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r10h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                         Blood group was discovered by -\n\n";
						   cout<<"                                              ----------------   \n";
						   cout<<"                                              (B) William Harvey\n";
						   cout<<"                                              ----------------\n";
						   cout<<"\n              ----------------                                   \n";
						   cout<<"           	(C) Landsteiner                           \n";
						   cout<<"              ----------------                                \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='c' || ch=='C')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='b' || ch=='B')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(C) Landsteiner \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						    else
						   {
							   goto r10h;
						   }
						     }
						    else
						   {
							   goto r10;
						   }
				     case 9 :
				   //-----------------------------------------------
						   r9:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"           'Free throw' is given in which of the following games ?\n\n";
						   cout<<"              ----------------                ----------------   \n";
						   cout<<"              (A) Basketball                  (B)  Cricket\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\n              ----------------                ----------------   \n";
						   cout<<"              (C) Football                    (D) Volleyball\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='d' || ch=='D'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(A) Basketball \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						    else if(help>0 && ch=='h' || ch=='H')
						    {
						   //hhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r9h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"           'Free throw' is given in which of the following games ?\n\n";
						   cout<<"              ----------------                                   \n";
						   cout<<"              (A) Basketball                              \n";
						   cout<<"              ----------------                                \n";
						   cout<<"\n              ----------------                                   \n";
						   cout<<"              (C) Football                                  \n";
						   cout<<"              ----------------                                \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else   if(ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(A) Basketball \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }

						    else
						   {
							   goto r9h;
						   }

						    }
						    else
						   {
							   goto r9;
						   }

				     case 8 :
				   //-----------------------------------------------
						   r8:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                       Who is the founder of Facebook?\n\n";
						   cout<<"              ----------------                ----------------   \n";
						   cout<<"             (A) Mark Zuckerberg              (B) Mark Twain\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\n              ----------------                ----------------   \n";
						   cout<<"             (C)  Steve Jobs                  (D) Chetan Mali\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='d' || ch=='D'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(A) Mark Zuckerberg \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r8h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                       Who is the founder of Facebook?\n\n";
						   cout<<"              ----------------                                   \n";
						   cout<<"             (A) Mark Zuckerberg                            \n";
						   cout<<"              ----------------                                \n";
						   cout<<"\n                                              ----------------   \n";
						   cout<<"                                              (D) Chetan Mali\n";
						   cout<<"                                              ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='a' || ch=='A')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='d' || ch=='D')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(A) Mark Zuckerberg \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						   else
						   {
							   goto r8h;
						   }

						   }
						   else
						   {
							   goto r8;
						   }

				     case 7 :
				   //-----------------------------------------------
						   r7:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                      Who is the founder of Microsoft ?\n\n";
						   cout<<"              ----------------                ----------------   \n";
						   cout<<"              (A) Steve Jobs                  (B) Bill Gatesn\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\n              ----------------                ----------------   \n";
						   cout<<"              (C)  Mark Biondi                (D) Bill Clinto\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='a' || ch=='A'||ch=='d' || ch=='D'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(B) Bill Gatesn \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h'||ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r7h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                      Who is the founder of Microsoft ?\n\n";
						   cout<<"                                              ----------------   \n";
						   cout<<"                                              (B) Bill Gatesn\n";
						   cout<<"                                              ----------------\n";
						   cout<<"\n                                              ----------------   \n";
						   cout<<"                                              (D) Bill Clinto\n";
						   cout<<"                                              ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='d' || ch=='D')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is  ";textcolor(2);cprintf("(B) Bill Gatesn \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r7h;
						   }
						   }
						    else
						   {
							   goto r7;
						   }
				    case 6 :
				   //-----------------------------------------------
						   r6:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            The present monetary system in India is managed by -\n\n";
						   cout<<"      --------------------------              -------------------------   \n";
						   cout<<"    (A)   Nationalised Banks                 (B) The State Bank of India\n";
						   cout<<"      --------------------------              ------------------------- \n";
						   cout<<"\n      --------------------------              -------------------------   \n";
						   cout<<"    (C) The Central Finance Ministry         (D) The Reserve Bank of India\n";
						   cout<<"      --------------------------              -------------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D) The Reserve Bank of India\n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						 }
						 else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r6h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            The present monetary system in India is managed by -\n\n";
						   cout<<"                                                                          \n";
						   cout<<"                                                                        \n";
						   cout<<"                                                                        \n";
						   cout<<"\n      --------------------------              -------------------------   \n";
						   cout<<"    (C) The Central Finance Ministry         (D) The Reserve Bank of India\n";
						   cout<<"      --------------------------              -------------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D) The Reserve Bank of India\n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r6h;
						   }
						   }
						    else
						   {
							   goto r6;
						   }

				    case 5 :
				   //-----------------------------------------------
						   r5:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                        Give the full form of WPI- \n\n";
						   cout<<"      --------------------------              -------------------------   \n";
						   cout<<"      (A) World Population Index	      (B) Wholesale Price Index\n";
						   cout<<"      --------------------------              ------------------------- \n";
						   cout<<"\n      --------------------------              -------------------------   \n";
						   cout<<"      (C)   World Price Index		      (D) Wholesale Production Index\n";
						   cout<<"      --------------------------              -------------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='a' || ch=='A'||ch=='D' || ch=='d'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(B) Wholesale Price Index\n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						    //hhhhhhhhhhhhhhhhhhhhhhhh
						    help--;
						    r5h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                        Give the full form of WPI- \n\n";
						   cout<<"                                              -------------------------   \n";
						   cout<<"                                	      (B) Wholesale Price Index\n";
						   cout<<"                                              ------------------------- \n";
						   cout<<"\n      --------------------------                                          \n";
						   cout<<"      (C)   World Price Index		                                    \n";
						   cout<<"      --------------------------                                       \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else  if(ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(B) Wholesale Price Index\n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r5h;
						   }
						   }
						    else
						   {
							   goto r5;
						   }

				     case 4 :
				   //-----------------------------------------------
						   r4:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            Sachin Tendulkar made his 100th century in the match \n";
						   cout<<"                         played between India and ... ?\n\n";
						   cout<<"              ----------------                ----------------   \n";
						   cout<<"              (A)  Pakistan                   (B)  England\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\n              ----------------                ----------------   \n";
						   cout<<"              (C)  Australia                  (D) Bangladesh\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D) Bangladesh \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhh
						    help--;
						    r4h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            Sachin Tendulkar made his 100th century in the match \n";
						   cout<<"                         played between India and ... ?\n\n";
						   cout<<"              ----------------                                   \n";
						   cout<<"              (A)  Pakistan                               \n";
						   cout<<"              ----------------                                \n";
						   cout<<"\n                                              ----------------   \n";
						   cout<<"                                              (D) Bangladesh\n";
						   cout<<"                                              ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else    if(ch=='a' || ch=='A')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D) Bangladesh \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r4h;
						   }

						   }
						    else
						   {
							   goto r4;
						   }

				    case 1 :
				   //-----------------------------------------------
						   r1:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            The country that shares longest border with India is ... ?\n\n";
						   cout<<"              ----------------                ----------------   \n";
						   cout<<"              A>    china                    B>   Bangladesh\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\n              ----------------                ----------------   \n";
						   cout<<"              C>    Nepal                    D>   Pakistan \n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else if(ch=='a' || ch=='A'||ch=='d' || ch=='D'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("B> Bangladesh \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r1h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            The country that shares longest border with India is ... ?\n\n";
						   cout<<"                                              ----------------   \n";
						   cout<<"                                             B>  Bangladesh\n";
						   cout<<"                                              ----------------\n";
						   cout<<"\n              ----------------                                   \n";
						   cout<<"              C>    Nepal                                  \n";
						   cout<<"              ----------------                                \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='b' || ch=='B')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else if( ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("B> Bangladesh \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
						   }            }
						    else
						   {
							   goto r1h;
						   }
						   }
						    else
						   {
							   goto r1;
						   }
				    case 2 :
				   //-----------------------------------------------
						   r2:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                    Bhopal Gas Tragedy was caused by  ... ?\n\n";
						   cout<<"              -------------------               -------------------   \n";
						   cout<<"              (A)    Nitrogen                   (B)     Oxygen\n";
						   cout<<"              -------------------               -------------------\n";
						   cout<<"\n              -------------------                -------------------   \n";
						   cout<<"              (C) Methyl isocyanite             (D)     Cyanide\n";
						   cout<<"              -------------------                -------------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='c' || ch=='C')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								 goto nq;
								 }
						   }
						   else if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='d' || ch=='D')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(C) Methyl isocyanite \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								 goto nq;
								 }
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r2h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"                    Bhopal Gas Tragedy was caused by  ... ?\n\n";
						   cout<<"              -------------------                                     \n";
						   cout<<"              (A)    Nitrogen                                 \n";
						   cout<<"              -------------------                                  \n";
						   cout<<"\n              -------------------                                      \n";
						   cout<<"              (C) Methyl isocyanite                            \n";
						   cout<<"              -------------------                                   \n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='c' || ch=='C')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								 goto nq;
								 }
						   }
						   else if(ch=='a' || ch=='A')
						   {       cout<<"\n";
							  textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(C) Methyl isocyanite \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								 goto nq;
								 }
						   }

						    else
						   {
							   goto r2h;
						   }
						   }
						    else
						   {
							   goto r2;
						   }
				   case 3 :
				   //-----------------------------------------------
						   r3:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";
						   cout<<"            The world famous Red Fort of Delhi was built by\n";
						   cout<<"              which of the following Mughal rulers ?\n\n";
						   cout<<"              ----------------                ----------------   \n";
						   cout<<"              (A)   Akbar                     (B)  Jahangir\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\n              ----------------                ----------------   \n";
						   cout<<"              (C)  Aurangzeb                  (D)  Shahjehan\n";
						   cout<<"              ----------------                ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else if(ch=='a' || ch=='A'||ch=='b' || ch=='B'||ch=='c' || ch=='C')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D)  Shahjehan \n"); textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else if(help>0 && ch=='h' || ch=='H')
						   {
						   //hhhhhhhhhhhhhhhhhhhhhhhhh
						   help--;
						   r3h:
						   clrscr();
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }
						   cout<<setw(37)<<qc;textcolor(YELLOW);cprintf(".QUESTION");textcolor(15);cout<<"\n";
						   for(i=0;i<=37;i++)
						   {
						    textcolor(4);cprintf("X");textcolor(15);cprintf("X");
						   }cout<<"\n";
						   textcolor(YELLOW);cprintf("                                                                #HELP-");cout<<help;textcolor(15);
						   cout<<"\n\n";						   cout<<"            The world famous Red Fort of Delhi was built by\n";
						   cout<<"              which of the following Mughal rulers ?\n\n";
						   cout<<"              ----------------                                   \n";
						   cout<<"              (A)   Akbar                                  \n";
						   cout<<"              ----------------                                \n";
						   cout<<"\n                                              ----------------   \n";
						   cout<<"                                              (D)  Shahjehan\n";
						   cout<<"                                              ----------------\n";
						   cout<<"\nEnter your choice:";
						   ch=getche();
						   if(ch=='d' || ch=='D')
						   {
							   cout<<"\n";
							   textcolor(GREEN);cprintf("                                CORRECT ANSWER\n");textcolor(WHITE);
							   cout<<"\n\n\n\n                        ";
							   cr++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							   else {
								goto nq;
								}
						   }
						   else if(ch=='a' || ch=='A')
						   {       cout<<"\n";
							   textcolor(RED);cprintf("                                  WRONG ANSWER\n");textcolor(WHITE);
							   cout<<"\nCorrect answer is ";textcolor(2);cprintf("(D)  Shahjehan \n");textcolor(15);
							   cout<<"\n                        ";
							   ir++;
							   system("pause");
							   clrscr();
							   ++qc;
							   if(qc>=11)
								{
								cout<<"Game Over ";
								goto ls;
								}
							    else{
								goto nq;
								}
						   }
						   else
						   {
							   goto r3h;
						   }
						   }
						   else
						   {
							   goto r3;
						   }
				   // question ooooovvveeerrrr----------------
				   }

				   //------------------------------------------

				   break;
			  case '2': clrscr();
				    for(i=0;i<=37;i++)
				       {
					textcolor(BLUE);cprintf("#");textcolor(15);cprintf("#");
				       }
				    cout<<"\n";
				    textcolor(GREEN);cprintf("                                 HIGHEST SCORE ");textcolor(15);
				    cout<<"\n";
					for(i=0;i<=37;i++)
				       {
					textcolor(BLUE);cprintf("#");textcolor(15);cprintf("#");
				       }
				    cout<<"\n\n\n";
				    textcolor(BLUE);cprintf("                     NAME                       POINTS");textcolor(15);
				    cout<<"\n";
				    textcolor(BLUE);cprintf("              ------------------           ---------------");textcolor(15);
				    file.open("sco.txt",ios::in );
				    for(i=0;i<5;i++)
				    {
				    file.read((char *)&score,sizeof(score));
				    score[i].putdata();
				    }
				    file.close();
				    cout<<"\n\n\n\n\n\n                          ";
				   system("pause");
				   goto start;
			  case '3':for(i=0;i<=37;i++)
					{
					 textcolor(BLUE);cprintf("#");textcolor(15);cprintf("#");
					}
				   textcolor(GREEN);cprintf("                                   INSTRUCTIONS ");textcolor(15);
				   cout<<"\n";
				   for(i=0;i<=37;i++)
					{
					 textcolor(BLUE);cprintf("#");textcolor(15);cprintf("#");
					}
				   cout<<"\n";
				   textcolor(BLUE);cprintf(" [ How To Play]\n\n");textcolor(15);
				   cout<<"\n";
				   cout<<"   ->You can give your answer by pressing key .....\n";
				   cout<<"     suppose your answer is [a] then you have press [a] from keyboard \n";
				   cout<<"   ->If want take Help then press [h/H]....\n";
				   cout<<"\n";
				   textcolor(BLUE);cprintf("\n[ Game Rules ]\n");textcolor(15);
				   cout<<"\n";
				   cout<<"   ->For every correct answer     ";textcolor(2);cprintf("+100 POINTS ");textcolor(15);cout<<"\n";
				   cout<<"   ->For every incorrect answer   ";textcolor(RED);cprintf("-25 POINTS");textcolor(15);cout<<"\n";
				   cout<<"\n";
				   textcolor(BLUE);cprintf("\n[ Help Line ]\n");textcolor(15);
				   cout<<"\n";
				   cout<<"   ->You can use ";textcolor(YELLOW);cprintf("| DOUBLE DIP |");textcolor(15);cout<<" Twice in a game \n\n\n                        ";
				   system("pause");
				   clrscr();
				   goto start;
			  case '4' :exit(0);
			 default  : cout<<"\a";
				    goto start;

			}
 // ooooooooooooovvvvvvvvvvvvvvveeeeeeeeeeeeeeerrrrrrrrrrrrrrr
	ls:
	crp=100*cr;
	irp=25*ir;
	sc=crp-irp;
	 clrscr();
	 for(i=0;i<=37;i++)
		{
		textcolor(BLUE);cprintf("*");textcolor(15);cprintf(">");
		}
	 textcolor(GREEN);cprintf("                                   GAME OVER");textcolor(WHITE);
	 cout<<"\n";
	 for(i=0;i<=37;i++)
		{
		textcolor(BLUE);cprintf("*");textcolor(15);cprintf(">");
		}
	 cout<<"\n\n\n";
	 cout<<"\n\n\n\n\n";
	 file.open("sco.txt", ios::in);
	 int cop[5];
	 for(i=0;i<5;i++)
	 {
	 file.read((char *)&score,sizeof(score));
	 cop[i]=score[i].rec;
	 }
	 file.close();
	 file.open("sco.txt",ios::out);
	for(i=0;i<5;i++)
	 {
	 if(sc>cop[i])
	 {
		score[i+4].rec=score[i+3].rec ;
		score[i+3].rec=score[i+2].rec ;
		score[i+2].rec=score[i+1].rec;
		score[i+1].rec=score[i].rec;
	       strcpy(score[i+4].name,score[i+3].name) ;
	       strcpy(score[i+3].name,score[i+2].name) ;
	       strcpy(score[i+2].name,score[i+1].name) ;
	       strcpy(score[i+1].name,score[i].name) ;
		score[i].rec=sc;
		score[i].getdata();
		file.write((char *)&score,sizeof(score));
		break;
	 }
	 }
	 file.close();
 //---------------------------------------------------------------
	 clrscr();
	 for(i=0;i<=37;i++)
		{
		textcolor(BLUE);cprintf("*");textcolor(15);cprintf(">");
		}
	 textcolor(GREEN);cprintf("                                   GAME OVER");textcolor(WHITE);
	 cout<<"\n";
	 for(i=0;i<=37;i++)
		{
		textcolor(BLUE);cprintf("*");textcolor(15);cprintf(">");
		}

	 cout<<"\n\n\n";
	 for(i=0;i<=37;i++)
		{
		textcolor(5);cprintf("_");textcolor(15);cprintf("_");
		}
	cout<<"\n";
	textcolor(5);cprintf("Total correct answer :                        ");cout<<cr;textcolor(15);
	cout<<"\n";
	textcolor(5);cprintf("Total Wrong answer   :                        ");cout<<ir;textcolor(15);
	cout<<"\n";
	 textcolor(5);cprintf("Your score is        :                        ");cout<<sc<<"  POINTS\n";textcolor(15);
	 for(i=0;i<=37;i++)
		{
		textcolor(5);cprintf("_");textcolor(15);cprintf("_");
		}
	 cout<<"\n\n\n\n\n\n\n                         ";
	 system("pause");
	 help=2;
	 goto start;
	//c++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	getch();
	return 0;
}
