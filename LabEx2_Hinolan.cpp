#include <iostream>
#include <string.h>

using namespace std;
int temperature(float temp);
int nasal(int nas);
int treat(int t);

int main()
{
	int choice;
	int breathing;
	int breathResult;
	int fever;
	int headache;
	int allergic;
	int cough;
	int treat = 0;
	int sore;
	int medication = 0;
	int cold = 0;
	float temper;
	char again;
	
	
	cout<<"-----Health Condition Checker-----"<<endl<<endl;
	cout<<endl<<"[1] Start\t[2] Exit"<<endl;
	cout<<"Enter choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			do
			{
				system("cls");
				cout<<endl<<"Enter Temperature: ";
				cin>>temper;
				int temp = temperature(temper);
				if(temp != 1)
				{
					if(temp == 2)
					{
						cout<<"\nResult: Low Fever";
						cout<<"\n\n[1]Light Nasal Breathing\n[2] Heavy Nasal Breathing"<<endl;
						cout<<"Enter Number: ";
						cin>>breathing;
						int breathResult = nasal(breathing);
						switch(breathResult)
						{
							case 1:
								cout<<"\nFindings: Nasal Discharge";
								cout<<"\n\nDo you have cough?";
								cout<<endl<<"[1] Yes\n[2] No";
								cout<<"\nEnter Number: ";
								cin>>cough;
								
								cout<<"\nDo you have a headache?";
								cout<<"\n[1] Yes]\n[2] No";
								cout<<"\nEnter Number : ";
								cin>>headache;
								
								cout<<"\nDo you have a sore throat?";
								cout<<"\n[1] Yes]\n[2] No";
								cout<<"\nEnter Number : ";
								cin>>sore;
								
								cout<<"\n-----Overview-----"<<endl;
								if(temp == 2 && headache == 1 && breathResult == 1 && cough == 1 && sore == 1)
								{
									cold = 1;
									cout<<"Findings: Cold";
								}
								else if(temp == 2 && headache == 1 && breathResult == 1 && cough == 1 && sore != 1)
								{
									cold = 1;
									cout<<"Findings: Cold without Sore throat";
								}	
								else
								{
									cout<<"Findings: No Cold";
								}
								if(cold == 1 && sore == 1)
								{
									treat = 1;
									cout<<"\nProcedures: Treat";
									if(treat == 1)
									{
										medication = 1;
										cout<<"\nProcedures: Give Medication";
										cout<<endl<<"Allergic to Antibiotics?";
										cout<<"\n\n[1] Allergic\n[2] Not Allergic"<<endl;
										cout<<"Enter Number: ";
										cin>>allergic;
										if(medication == 1 && allergic == 2)
										{
											cout<<"\nResults: Give Antibiotics";
										}
										else
										{
											cout<<"\nResults: Give Tylenol";
										}
									}
									
									}
								else
								{
									cout<<"\nProcedures: Don't Treat";
									if(treat == 0)
									{
										cout<<"\nProcedures: Don't Give Medication";
									}
								}
								break;
							case 2:
								cout<<"Findings: Sinus Membranes Swelling";
								break;
						}
							
						
						
					}
					
					else
					{
						cout<<"\nResult: High Fever";
					}
				}
				else
				{
					cout<<endl<<"Result: No Fever";
				}
				
				cout<<"\n\nTry Again? [Y | N]: ";
				cin>>again;
			}while(again == 'y' || again == 'Y');
			break;
		case 2:
			exit(0);
			break;
		default:
			cout<<"Invalid Input! Please Try Again.";
			break;
	}
}

int temperature(float temp)
{
	int fever;
	
	if(temp < 37)
		fever = 1;
	else if(temp > 37 && temp < 38)
		fever = 2;
	else if(temp > 38)
		fever = 3;

	return fever;
}

int nasal(int nas)
{
	int result;
	
	if(nas == 1)
		result = 1;
	else
		result = 2;
	
	return result;
}

int treat(int t)
{
	int tt;
	return tt;
}