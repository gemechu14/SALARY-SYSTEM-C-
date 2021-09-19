#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <conio.h>

using namespace std;

class employe {
	char name[50];
	int id;
    int age;
    char sex[5];
    float tax;
    
    char address[50];
    char telephone[15];
    float gross_salary;
    float net_salary;
    float pension;
    float pation_rate;
    float bonus;
    float house_allowance;
    
	public:
		void insert();
	
		void edit();
		void sort();
		void view() const;
		int retId() const;
		void dispSearched();
		char *retName();
		
};

int employe::retId() const
{
	return id;
}
char *employe::retName()
{
	return name;
}
void employe::edit()
{
	int salary;
	cout << "Full Name: ";
	cin.ignore();
	cin.getline(name, 50);
	int x = strlen(name);
	for(int i=0; i<x; i++)
	name[i] = toupper(name[i]);
	cout << "ID: ";
	cin >> id;
	cout << "AGE : ";
	cin >> age;
		cout<<"SEX: ";
	cin>>sex;
	cout<<"ADDRESS: ";
	
		cin.ignore();
	cin.getline(address, 50);
	int y = strlen(address);
	for(int i=0; i<y; i++)
	address[i] = toupper(address[i]);
	
	cout<<"TELEPHONE: ";
	cin>>telephone;
	cout<<"GROSS SALARY: ";
	cin>>gross_salary; 
	salary = gross_salary;
		
		
	cout<<"BONUS: ";
	cin>>bonus;
	cout<<"HOUSE ALLOWANCE: ";
	cin>>house_allowance;
	
	if(salary<601){
		tax=0;
	}
	else if(salary>=601 && salary <=1650){
   tax=(gross_salary*0.1);
	}
	else if(gross_salary>=1651 && gross_salary <=3200){
   tax=(gross_salary*0.15);
	}
	else if(gross_salary>=32201 && gross_salary <=5250){
   tax=(gross_salary*0.2);
	}
	else if(gross_salary>=5251 && gross_salary <=7800){
   tax=(gross_salary*0.25);
	}
	else if(gross_salary>=7801 && gross_salary <=10900){
   tax=(gross_salary*0.3);
	}
	else if(gross_salary>=10901){
   tax=(gross_salary*0.35);
	}
	
		pension = (salary*0.07);
	


	net_salary=gross_salary-pension-tax-house_allowance+bonus;
	
	
	
	
	
	
	
}
void employe::insert()
{
	int salary;
	
	
	cout << "FULL NAME: ";
	cin.ignore();
	cin.getline(name, 50);
	int x = strlen(name);
	for(int i=0; i<x; i++)
	name[i] = toupper(name[i]);
	
    	cout << "ID: ";
	   cin >> id;

	cout << "AGE : ";
	cin >> age ;
	cout<<"SEX: ";
	cin>>sex;
	cout<<"ADDRESS: ";
	
		cin.ignore();
	cin.getline(address, 50);
	int y = strlen(address);
	for(int i=0; i<y; i++)
	address[i] = toupper(address[i]);
	
	cout<<"TELEPHONE: ";
	cin>>telephone;
	cout<<"GROSS SALARY: ";
	cin>>gross_salary; 
	salary = gross_salary;
		
		
	cout<<"BONUS: ";
	cin>>bonus;
	cout<<"HOUSE ALLOWANCE: ";
	cin>>house_allowance;
	
	if(salary<601){
		tax=0;
	}
	else if(salary>=601 && salary <=1650){
   tax=(gross_salary*0.1);
	}
	else if(gross_salary>=1651 && gross_salary <=3200){
   tax=(gross_salary*0.15);
	}
	else if(gross_salary>=32201 && gross_salary <=5250){
   tax=(gross_salary*0.2);
	}
	else if(gross_salary>=5251 && gross_salary <=7800){
   tax=(gross_salary*0.25);
	}
	else if(gross_salary>=7801 && gross_salary <=10900){
   tax=(gross_salary*0.3);
	}
	else if(gross_salary>=10901){
   tax=(gross_salary*0.35);
	}
	
		pension = (salary*0.07);
	


	net_salary=gross_salary-pension-tax-house_allowance+bonus;
	
	
	
	
}
void employe::view() const

{
	//cout << "\t" <<id << "\t" <<name << "\t" << age << "\t" <<sex << "\t" <<address << "\t" <<telephone << "\t" <<gross_salary << "\t" <<bonus <<"\t" <<tax << "\t" <<pension << "\t" <<net_salary << endl;
   cout <<setw(8)<<right<<id<< setw(10) <<name<< setw(10) <<age<<setw(10) <<sex<<setw(10) <<address<<setw(10) <<telephone<<setw(13) <<gross_salary<<setw(10) <<bonus<<setw(10) <<house_allowance<<setw(14) <<tax<< setw(15) <<pension<<setw(14) <<net_salary<< endl;

//cout <<setw(10) << id << setw(12) <<name<< setw(5)<<age<< setw(9)<<sex << setw(9)<<address<< setw(10)<<telephone<< setw(14)<<gross_salary<< setw(10)<<bonus<<house_allowance<< setw(10)<< setw(10)<<tax<< setw(10)<<pension<< setw(12)<<net_salary<< endl;
  //cout << "\t|________|___________|_________________________________________|" << endl;
              
}
void employe::dispSearched()
{
  cout <<setw(8)<<right<<id<< setw(10) <<name<< setw(10) <<age<<setw(10) <<sex<<setw(10) <<address<<setw(10) <<telephone<<setw(13) <<gross_salary<<setw(10) <<bonus<<setw(10) <<house_allowance<<setw(14) <<tax<< setw(15) <<pension<<setw(14) <<net_salary<< endl;

	//cout << "\t" << id << "\t" << name << "\t" << age << "\t" <<sex << "\t" <<address << "\t" <<telephone << "\t" <<gross_salary << "\t" <<bonus << "\t" <<house_allowance<< "\t" <<tax << "\t" <<pension << "\t" <<net_salary << endl;
}


void insert_employe();
void display();
void adminMenu();
void userMenu();
int modify(int);
void search();
void sort();
int searchByid(int);
void delete_employe(int);
void searchByname(string);
void sortbyname();
void sortbyid();

int main()
{
	system("color 2f");
			system("cls");

	char account;
	char adminpass[8] = {"admin12"};
	char pass[10];
	do{
	cout << "\n\t|=================================================|";
	cout << "\n\t|         SALARY SYSTEM                |"<<
	        "\n\t|=================================================|"<<
	        
	
	    "\n\t\tLogin :\n" <<
	                    "\t\t1. ADMIN.\n" <<
	                    "\t\t2. USER.\n" <<
			            "\t\t3. EXIT\n";
	       
		     cout << "Enter Choice: ";
		     cout<<"\n";
	         account=getch();
			switch(account)
			{
				case '1':
					cout << "ENTER PASSWORD: ";
					cin >> pass;
					if (strcmp(adminpass, pass)==0)
					adminMenu();
					else
					cout << "Incorrect password!!\n";
					break;
				case '2':
					userMenu();
					break;
				case '3':
					break;
				default:
					cout << "Enter appropriate account type\n";
					
			} 
		system("pause");
		system("cls");
	
    }while(account!='3');
}
void adminMenu()
{
	system("color 3e");
	system("cls");
	char *p;
	int id;
	p = new char;
	int i;
	do{
	
	cout << "\n\tWElCOME TO ADMIN MENU\n" <<
	        "\n\t1. Inset new Employe \n" <<
	        "\t2. Edit Employe Information\n" <<
	        "\t3. Delete Employe.\n" <<
	        "\t4. view list Employes\n" <<
			"\t5. search\n " << 
	        "\t6. Sort\n"<<
			"\t7. Exit";
	        cout<<"\n";
	        cout << "Enter your choice: ";
	        cin >> *p;
	        switch(*p)
	        {
	        	case '1':
	        		insert_employe();
	        		break;
	        	case '2':
	        		cout << "Enter Employe id to edit: ";
					 cin >> id;
	        		modify(id);
	        		break;
	        	case '3':
	        		cout << "\n\tEnter Employe ID to delete: ";
	        		cin >> i;
	        		delete_employe(i);
	        		break;
	        	case '4':
	        		display();
	        		break;
	        	case '5':
	        		search();
	        		break;
	        	case '6':
	        		sort();
	        		break;
	        		
	        	case '7':
	        	main();
	        		break;
	        	default :
	        		cout << "Enter appropriate choice!\n";
	        }
	    system("pause");
	    system("cls");
     }while(*p!='6');
    delete p;
}
void userMenu()
{
	system("color b5");
	system("cls");
	char *p;
     	int searchId;

	p = new char;
	do{
		cout << "\n\tUSER ACCOUNT MENU\n" <<
		        "\t1.  View Your Information \n" << 
		        "\t2. Exit\n";
		        cout << "Enter your choice: ";
		        cout<<"\n";
		        cin >> *p;
		        
		        switch(*p)
		        {
		        	case '1':
		        		cout<<"INSERT YOUR ID";
		        	cin >> searchId;
					searchByid(searchId);
		        //		display();
		        		break;
		        	case '2':
		        		
		        		break;
		        	default: cout << "Enter appropriate choice! ";
		        		
		        }
		    system("pause");
		    system("cls");
	}while(*p!='3');
 delete p;
}
void insert_employe()
{
  employe p;
	ofstream outFile;
	outFile.open("employe.dat", ios::binary | ios::app);
	p.insert();
	outFile.write(reinterpret_cast<char*> (&p), sizeof(employe));
	outFile.close();
	
}
void display()
{
	system("cls");
	
	employe emp;
	ifstream inFile;
	inFile.open("employe.dat", ios::binary);
	if(!inFile)
	{
		cerr << "Error while opening the file!" << endl;
		exit(1);
	}
     cout << "\n\n\tEMPLOYE LIST\n\n"  
          <<setw(10)<<"=============================================================================================================================================================\n" 
          <<setw(8)<<"ID"<< setw(10) <<"NAME"<< setw(10) <<"AGE"<<setw(10) <<"SEX"<<setw(10) <<"ADDRESS"<<setw(10) <<"TELEPHONE"<<setw(13) <<" GROSS SALARY"<<setw(10) <<"BONUS  "<<setw(12) <<" HOUSE ALLOWANCE"<<setw(10) <<"TAX RATE"<< setw(15) <<"PATION RATE "<<setw(14) <<"NET SALARY"<< endl<<
           //  "\tID\tNAME\tAGE\tSEX\tADDRESS\tTELEPHONE\tGROSS SALARY\tBONUS\tHOUSE ALLOWANCE\tTAX\tPENTION\t NET SALARY\n" <<
		  setw(10)<<"====================================================================================================================================================================\n";
    while(inFile.read(reinterpret_cast<char *>(&emp), sizeof(employe)))
        {
        	emp.view();
        }
      inFile.close(); 
	 getch();  
	
}
void search()
{
	system("cls");
	int searchId;
	char name[20];
	char *p;
	p = new char;
	cout << "\n\tSearch by:\n\n" <<
	        "\t1. ID\n" <<
	        "\t2. Name\n\n" <<
			"Enter search mode: "; 
			cin >> *p;
			switch(*p)
			{
				case '1':
					cout << "Enter an Id to search: ";
					cin >> searchId;
					searchByid(searchId);
					break;
				case '2':{
			
				
					cout << "Enter name of Employe to search: ";
					cin >> name;
					int x=strlen(name);
					for(int i=0 ;i<x; i++)
					name[i]=toupper(name[i]);
					searchByname(name);
				}
					break;
				default: cout << "Wrong choice please re-enter!\n";
			}
		delete p;
}

int searchByid(int x)
{
	system("cls");
	employe emp;
	bool flag = false;
	ifstream inFile;
	inFile.open("employe.dat", ios::binary);
	if(!inFile)
	{
		cerr << "Error! file cannot be opened!\n";
		exit(1);
	}
	
          		 cout << "\n\n\tList of Employe\n\n" << 
          "\t=========================================================================================================\n" <<
        "\tID\tNAME\tAGE\tSEX\tADDRESS\tTELEPHONE\tGROSS SALARY\tBONUS\tTAX\tHOUSE ALLOWANCE\tPATION RATE\tNET SALARY\n" <<

          "\t=========================================================================================================\n";
 
          while(inFile.read(reinterpret_cast<char *>(&emp), sizeof(employe)))
          
          
		  {
		  	
          	if(emp.retId() == x)
          	{
          	 emp.dispSearched();
             flag = true;
            }
          }
        inFile.close();
    if(flag == false)
    cout << "\n\tEmploye not found with " << x << " ID\n";
}
int modify(int n)
{
   employe emp;
   bool found = false;
   fstream File;
   File.open("employe.dat", ios::binary | ios::in | ios::out);
   if(!File)
   {
   	cerr << "Error! FIle couldnot be opened\n";
   	exit(1);
   }
  while(!File.eof() && found == false)
  {
  	File.read(reinterpret_cast<char *> (&emp), sizeof(employe));
  	 if (emp.retId()== n)
  	 {
  	 	//pro.view();
  	 	cout << "Enter new  to update:\n";
  	 	emp.edit();
  	 	int pos = (-1)*static_cast<int>(sizeof(employe));
  	 	File.seekp(pos, ios::cur);
  	 	File.write(reinterpret_cast<char *> (&emp), sizeof(employe));
  	 	cout << "\n\t the process is done...\n";
  	 	found = true;
  	 	getch();
  	 }
  	 
  	  
  	 
  }
  if(!found)
  cout << "\n\tNo such Employe  with that id: \n";
 File.close();
 
 
 
}

void delete_employe(int n)
{
	employe emp;
	ifstream inFile;
	ofstream outFile;
	inFile.open("employe.dat", ios::binary);
	if (!inFile)
	{
		cout << "Error while openig the file!! press any key...";
		return;
	}
	outFile.open("Temp.dat", ios::binary);
    inFile.seekg(0, ios::beg);
    while(inFile.read(reinterpret_cast<char *>(&emp), sizeof(employe)))
    {
    	if(emp.retId()!= n)
    	{
    		outFile.write(reinterpret_cast<char *> (&emp), sizeof(employe));
    	}
    }
    inFile.close();
    outFile.close();
    remove("employe.dat");
    rename("Temp.dat", "employe.dat");
    if(emp.retId()==n)
    {
    
    cout << "\n\tEmploye deleted...\n\n";
}
    else
    cout<<"no such employe \n";
}

void searchByname(string name)
{
	employe emp;
	ifstream inFile;
	bool flag = false;
	inFile.open("employe.dat", ios::binary);
	if(!inFile)
	{
		cout << "Error!\n";
		return;
	}
	
          while(inFile.read(reinterpret_cast<char *>(&emp), sizeof(employe)))
          {
          	if(emp.retName() == name)
          	{
          		cout << "\n\n\tSEARCHED EMPLOYE\n\n" << 
          "\t====================================================================================\n" <<
      "\tID\tNAME\tAGE\tSEX\tADDRESS\tTELEPHONE\tGROSS SALARY\tBONUS\tTAX\tPENTION\tNET SALARY\n" <<    
	     "\t========================================================================================\n";
          	 emp.dispSearched();
             flag = true;
            }
          }
        inFile.close();
    if(flag == false)
    cout << "\n\tNo such employe  found with the name" << name << endl;
}

void sort() 
{
	system("cls");
	char *p;
	p=new char;
	cout<<"\n\tsort by \n\n\t1.name\n\t2.id\n\nyour choice:";
	a:
		cin>>*p;
		switch(*p)
		{
			case '1':
				sortbyname();
				break;
			case '2':
				sortbyid();
				break;
				default:
					cout<<"enter approprate";
		}
}
void sortbyname()
{
	employe sort[100],temp,p;
	int c=0;
	fstream file;
	file.open("employe.dat",ios::binary |ios::in|ios::out);
	if(!file)
	{
		cout<<"error while opening ";
		return;
	}
	while(!file.eof())
	{
		file.read(reinterpret_cast<char *>(&sort[c]),sizeof(employe));
		c++;
		
	}
	file.close();
	c--;
	

for(int i=0; i<c; i++)
{
	for(int j=i+1; j<c; j++)
	
	if(strcmp(sort[i].retName(),sort[j].retName())>0)
	{
		temp=sort[i];
		sort[i]=sort[j];
		sort[j]=temp;
	}
}
file.open("employe.dat",ios::binary |ios::out);
if(!file)
{
	cout<<"error";
	return;
}
for (int i=0; i<c; i++)
file.write(reinterpret_cast<char *>(&sort[i]),sizeof(employe));

file.close();
display();
}
void sortbyid()
{
	employe sort[100],temp,p;
	int c=0;
	fstream file;
	file.open("employe.dat",ios::binary |ios::in|ios::out);
	if(!file)
	{
		cout<<"error while opening ";
		return;
	}
	while(!file.eof())
	{
		file.read(reinterpret_cast<char *>(&sort[c]),sizeof(employe));
		c++;
		
	}
	file.close();
	c--;
	

for(int i=0; i<c; i++)
{
	for(int j=0; j<c; j++)
	
	if(sort[i].retId()<sort[j].retId())
	{
		temp=sort[i];
		sort[i]=sort[j];
		sort[j]=temp;
	}
}
file.open("employe.dat",ios::binary |ios::out);
if(!file)
{
	cout<<"error";
	return;
}
for (int i=0; i<c; i++)
file.write(reinterpret_cast<char *>(&sort[i]),sizeof(employe));

file.close();
display();
}


