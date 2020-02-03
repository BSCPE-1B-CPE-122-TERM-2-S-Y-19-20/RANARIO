#include <iostream>
#include<string>
using namespace std;
						void conjunction()
						{
							
								string p,q;
								cout<<"THE VALUE OF P AND Q IS TRUE ONLY IF BOTH P AND Q IS TRUE\n";
								cout<<"Enter P\n";
								cin>>p;
								cout<<"Enter Q\n";
								cin>>q;
								if(p=="true"&&q=="true") cout<<"Therefore it is TRUE\n";
								else{
									cout<<"Therefore it iS FALSE\n";
								}
					
								
						}
						
				
							void disjunction()
						{
							
								string p,q;
								cout<<"THE VALUE OF P AND Q IS TRUE IF P OR Q IS TRUE OR BOTH P AND Q IS TRUE\n";
								cout<<"Enter p\n";
								cin>>p;
								cout<<"Enter q\n";
								cin>>q;
								if(p=="true"&&q=="true") cout<<"Therefore it is TRUE\n";
								else if(p=="true"||q=="true") cout<<"Therefore it is TRUE\n";
								else{
									cout<<"Therefore it is FALSE\n";
								}
						
						}
						
							void negation()
						{
							
								string p,q;
								cout<<"THE OPPOSITE OF THE ORIGINAL VALUE\n";
								cout<<"Enter p\n";
								cin>>p;
								cout<<"Enter q\n";
								cin>>q;
								if(p=="true") cout<<"P is now FALSE\n";
								if(q=="true") cout<<"Q is now FALSE\n";
								if(p=="false") cout<<"P is now TRUE\n";
								if(q=="false") cout<<"Q is now TRUE\n";
							
					
						}
						
							void conditional()
						{
							
								string p,q;
								cout<<"THE STATEMENT P->Q IS TRUE IF Q IS TRUE AND ALSO IF Q IS FALSE THE STATEMENT IS FALSE\n";
								cout<<"enter p\n";
								cin>>p;
								cout<<"enter q\n";
								cin>>q;
								cout<<"P->Q\n";
								if(q=="true") cout<<"The Statement is TRUE\n";
								else{
									cout<<"The statement is FALSE\n";
								}
						}
						
							void biconditional()
						{
							
								string p,q;
								cout<<"THE STATEMENT P<->Q IS TRUE IF AND ONLY IF BOTH ARE TRUE OR FALSE\n";
								cout<<"enter p\n";
								cin>>p;
								cout<<"enter q\n";
								cin>>q;
								cout<<"P<->Q\n";
								if(p=="true"&&q=="true") cout<<"The statement is TRUE\n";
								else if(p=="false"&&q=="false") cout<<"The statement is TRUE\n";
								else{
									cout<<"The statment is FALSE\n";
								}
						}
						main()
						{
							int choice;
							int x;
							main:
							cout<<"ENTER YOUR CHOICE:\n";
							cout<<"1-conjunction        ";
							cout<<"2-disjucntion        ";
							cout<<"3-negation           ";
							cout<<"4-condtional         ";
							cout<<"5-biconditonal       \n";
							cin>>choice;
							if(choice==1){
								conjunction();
								cout<<"type 0 to terminate the program\n and any number if you want to continue\n";
								cin>>x;
								if(x==0) goto exit;
								else{
									system("cls");
									goto main;
								}
							}
							else if(choice==2){
								disjunction();
									cout<<"type 0 to terminate the program\n and any number if you want to continue\n";
								cin>>x;
								if(x==0) goto exit;
								else{
									system("cls");
									goto main;
								}
							}
							else if(choice==3){
								negation();
									cout<<"type 0 to terminate the program\n and any number if you want to continue\n";
								cin>>x;
								if(x==0) goto exit;
								else{
									system("cls");
									goto main;
								}
							}
							else if(choice==4){
								conditional();
									cout<<"type 0 to terminate the program\n and any number if you want to continue\n";
								cin>>x;
								if(x==0) goto exit;
								else{
									system("cls");
									goto main;
								}
							}
							else if(choice==5){
								biconditional();
									cout<<"type 0 to terminate the program\n and any number if you want to continue\n";
								cin>>x;
								if(x==0) goto exit;
								else{
									system("cls");
									goto main;
								}
							}
					 		exit:
					 			{
					 				
								 }
						}
