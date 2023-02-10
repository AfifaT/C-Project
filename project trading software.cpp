#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	char start;
	float shop(void);
	char choice;
	
	startL:
		cout<<"plz press H for Home appliances"<<endl;
		start:
			cin>>start;
			
			if(start=='h' || start=='H')
			{
				float total= shop();
				time_t t=time(NULL);
				tm* tPtr=localtime(&t);
				
				cout<<"Bill Date : ";
				cout<<tPtr->tm_mday<<"/";
				cout<<1+ tPtr->tm_mon<<"/";
				cout<<1900 + tPtr->tm_year<<endl;
				cout<<"Bill Time: "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
				cout<<"Total Bill Amount : "<<total<<endl;
				if(total>50000 && total<100000)
				{
					total=total-(0.05*total);
					cout<<"Total discount : 5%"<<endl;
				}
				else if(total>100000 && total<125000)
				{
					total=total-(0.1*total);
					cout<<"Total discount : 10%"<<endl;
				}
				else if(total>125000 && total < 150000)
				{
					total=total-(0.25*total);
					cout<<"Total discount : 25%"<<endl;
				}
				else if(total>150000)
				{
					total=total-(0.5*total);
					cout<<"Total discount : 50%"<<endl;
				}
				
				cout<< "Total bill amount is : "<<total<<endl;
				Again:
					cout<<"Do you want shopping again y or n"<<endl;
					cin>>choice;
					if(choice=='y'|| choice=='Y')
					{
					    goto startL;
					}
					else if(choice=='n' || choice=='N')
					{
						cout<<"Thanks for Shopping"<<endl;
					}
					else{
						cout<<"You have pressed wrong option, please press H"<<endl;
						goto Again;
					}
					
			}
			else{
				cout<<"You have entered wrong option, please press H to start again"<<endl;
				goto start;
			}
}
float shop()
{
	shop:
		char choice;
		char product;
		int quantity;
		float bill=0;
		itemLevel:
			cout<<"***********Welcome************"<<endl;
			cout<<"_Please follow the instructions_"<<endl;
			cout<<"| 1) Please enter r to order Refrigerator"<<endl;
			cout<<"| 2) Please enter w to order Washing Machine"<<endl;
			cout<<"| 3) Please enter t to order Television"<<endl;
			cout<<"| 4) Please enter m to order Microwave"<<endl;
			cout<<"| 5) Please enter a to order Air Conditioner"<<endl;
			cin>>choice;
			
			if(choice=='r'|| choice=='R' ||choice=='w'||choice=='W'||choice=='t'||choice=='T'||choice=='m'||choice=='M'||choice=='a'||choice=='A')
			{
				
				if(choice=='R' ||choice=='r')
				{
					refrigerator:
					cout<<"_____Resfrigerator Details____"<<endl;
					cout<<"| 1) Whirlpool => Price: 40000 |"<<endl;
					cout<<"| 2) Samsung => Price: 25000 |"<<endl;
					cout<<"| 3) Haier => Price: 20000 |"<<endl;
					cout<<"| 4) Voltas => Price: 18000 |"<<endl;
					cout<<"| 5) LLoyd => Price: 30000 |"<<endl;
					cout<<"| 6) Godrej => Price: 35000 |"<<endl;
					
					cout<<"Please enter your choice"<<endl;
					cin>>product;
					if(product=='1')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*40000;
					}
					else if(product=='2')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*25000;
					}
					else if(product=='3')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*20000;
					}
					else if(product=='4')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*18000;
					}
					else if(product=='5')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*30000;
					}
					else if(product=='6')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*35000;
					}
					else{
						cout<<"You have entered wrong choice, please try again"<<endl;
						goto refrigerator;
					}
				}
				if(choice=='w' ||choice=='W')
				{
					WMachine:
					cout<<"_____Washing Machine Details____"<<endl;
					cout<<"| 1) Bosch => Price: 40000 |"<<endl;
					cout<<"| 2) LG => Price: 25000 |"<<endl;
					cout<<"| 3) IFB => Price: 20000 |"<<endl;
					cout<<"| 4) Haier => Price: 58000 |"<<endl;
					cout<<"| 5) Maytag => Price: 30000 |"<<endl;
					cout<<"| 6) Samsung => Price: 45000 |"<<endl;
					
					cout<<"Please enter your choice"<<endl;
					cin>>product;
					if(product=='1')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*40000;
					}
					else if(product=='2')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*25000;
					}
					else if(product=='3')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*20000;
					}
					else if(product=='4')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*58000;
					}
					else if(product=='5')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*30000;
					}
					else if(product=='6')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*45000;
					}
					else{
						cout<<"You have entered wrong choice, please try again"<<endl;
						goto WMachine;
					}
				}
				if(choice=='t' ||choice=='T')
				{
					televisionL:
					cout<<"_____Television Details____"<<endl;
					cout<<"| 1) Sony => Price: 97000 |"<<endl;
					cout<<"| 2) Samsung => Price: 75000 |"<<endl;
					cout<<"| 3) LG => Price: 70000 |"<<endl;
					cout<<"| 4) TCL => Price: 58000 |"<<endl;
					cout<<"| 5) Sharp => Price: 80000 |"<<endl;
					cout<<"| 6) Panasonic => Price: 69000 |"<<endl;
					
					cout<<"Please enter your choice"<<endl;
					cin>>product;
					if(product=='1')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*97000;
					}
					else if(product=='2')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*75000;
					}
					else if(product=='3')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*70000;
					}
					else if(product=='4')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*58000;
					}
					else if(product=='5')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*80000;
					}
					else if(product=='6')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*69000;
					}
					else{
						cout<<"You have entered wrong choice, please try again"<<endl;
						goto televisionL;
					}
				}
					if(choice=='m' ||choice=='M')
				{
					Microwave:
					cout<<"_____Microwave Details____"<<endl;
					cout<<"| 1) Lg => Price: 40000 |"<<endl;
					cout<<"| 2) IFB => Price: 35000 |"<<endl;
					cout<<"| 3) Whirlpool => Price: 30000 |"<<endl;
					cout<<"| 4) Panasonic => Price: 48000 |"<<endl;
					cout<<"| 5) Bajaj => Price: 30000 |"<<endl;
					cout<<"| 6) Samsung => Price: 35000 |"<<endl;
					
					cout<<"Please enter your choice"<<endl;
					cin>>product;
					if(product=='1')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*40000;
					}
					else if(product=='2')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*35000;
					}
					else if(product=='3')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*30000;
					}
					else if(product=='4')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*48000;
					}
					else if(product=='5')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*30000;
					}
					else if(product=='6')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*35000;
					}
					else{
						cout<<"You have entered wrong choice, please try again"<<endl;
						goto Microwave;
					}
				}
					if(choice=='a' ||choice=='A')
				{
					AirConditioner:
					cout<<"_____A.C. Details____"<<endl;
					cout<<"| 1) Daikin => Price: 14000 |"<<endl;
					cout<<"| 2) Voltas => Price: 19000 |"<<endl;
					cout<<"| 3) Hitachi => Price: 8000 |"<<endl;
					cout<<"| 4) O General => Price: 22000 |"<<endl;
					cout<<"| 5) Lloyd => Price: 17000 |"<<endl;
					cout<<"| 6) Samsung => Price: 12000 |"<<endl;
					
					cout<<"Please enter your choice"<<endl;
					cin>>product;
					if(product=='1')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*14000;
					}
					else if(product=='2')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*19000;
					}
					else if(product=='3')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*8000;
					}
					else if(product=='4')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*22000;
					}
					else if(product=='5')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*17000;
					}
					else if(product=='6')
					{
						cout<<"Please enter the quantity of the product"<<endl;
						cin>>quantity;
						bill=bill+quantity*12000;
					}
					else{
						cout<<"You have entered wrong choice, please try again"<<endl;
						goto AirConditioner;
					}
				}
			}
			else{
				cout<<"You have entered the wrong option please try again"<<endl;
				goto shop;
			}
			return bill;
}
