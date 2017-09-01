/* Punoi : Xheni Myrtaj Grupi IE 201     Dt.04/12/2013
 Ushtrimi 5:
 Ne nje dyqan shiten 5 produkte cmimet e te cilave jane :
1--2.34
2--4.50
3--9.99
4--6.45
5--8.20
Te shkruhet nje program i cili lexon numrin e produktit dhe sasite e shitur ne 
nje dite . 
Programi duhet te perdore strukturen switch per te ndihmuar ne afishimin e 
cmimit ate produkt .
Programi duhet te llogarite dhe te printoje ne ekran vleren totale te shitjeve 
te bera gjate javes se fundit. */

#include<iostream>
using namespace std;

int main(){
	int p,sasia;char pergj,y='y';
	float c1=2.34,c2=4.50,c3=9.99,c4=6.45,c5=8.20;
	double vlera;  
	cout<<" ||||||||||    SHITJET E BERA GJATE JAVES    ||||||||| 
"<<endl<<endl;
	for(int i=1;i<=7;i++){ // Cikli for perdoret per te kryer te njejten 
procedure per 7 ditet e javes
	bool	vazhdo=true;
		double vl=0,p1=0,p2=0,p3=0,p4=0,p5=0;
	while(vazhdo){ // Cikli "while do" do perseritet per sa kohe qe 
perdoruesi ka ende produkte te shitura
		
	
	cout<<"Shkruani llojin e produktit  dhe sasine e shitur per diten e 
"<<i<<" te ketij produkti! \n";
cin>>p;
cin>>sasia;
	   switch(p) 
	   {
	   	case 1:
	   	cout<<" produkte  te shitura me cmimin "<<c1<<endl;
		   p1=sasia*c1;
		   break;
		  
		   case 2:
		   
		   	cout<<" produkte te shitura me cmimin "<<c2<<endl;
		   p2=sasia*c2;
		   break;
		  
		   case 3:
		   	cout<<" produkte te shitura me cmimin "<<c3<<endl;
	
		   p3=sasia*c3;
		   break;
		 
		   case 4:
		   	cout<<" produkte te shitura me cmimin "<<c4<<endl;
	
		   p4=sasia*c4;
		   break;
		  
		   case 5:
		   	cout<<" produkte  te shitura me cmimin  "<<c5<<endl;
	
		   p5=sasia*c5;
		   break;
		  
		   default:
		   cout<<" Ky lloj produkti nuk gjendet  " <<endl;
		 
		   
		    }
		    cout<<"- - - - - - - - - - - - - - - - - - -"<<endl;
	   	  cout<<" Keni me produkte te shitura? Shtyp y nese po."<<endl;
		   cin>>pergj;
		   if (pergj!=y) {
		   	vl=p1+p2+p3+p4+p5; // ruhet vlera e shitjeve per diten e 
i-te
		   	
		   vazhdo=false; //dilet nga cikli while 
		   
		    }
	   	}
	       
cout<<"********************************************************"<<endl<<endl;
		   cout<<" ((*))Vlera totale e shitjeve per diten e "<<i<<" 
eshte : "<<vl<<endl<<endl;
         
    vlera=vlera+vl; // mbledh vleren per te gjithe ditet e javes.
	}
	
cout<<"_____*____________*____________*_______________*______________*______"<<endl<<endl;
	cout<<"****Vlera totale e shitjeve te bera gjate javes eshte =   
"<<vlera; 
	
}
