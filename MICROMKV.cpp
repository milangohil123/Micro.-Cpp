#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct customer
{
	char customer_name[100];
	long int  mobile_number;
	int street_no;
	int road_no;
	char address[1000];
	char city[200];
	int dd;
	int mm;
	int yy;
};
int main()
{
  char startshopping;
  char choiceagain;
  float total=0;
  float onlineshopping(void);
  cout<<"                                 -------------------------------------------------------"<<endl;
  cout<<"                                 |                        FLIPKART                     |"<<endl;
  cout<<"                                 | ----------------------------------------------------|"<<endl;
  cout<<"                                 |                  WELCOME TO ONLINESHOPPING          |"<<endl;
  cout<<"                                 ------------------------------------------------------"<<endl;
  cout<<"      www.flipkart.com"<<endl;
  cout<<"      Email : flipkart@gamil.com"<<endl;
  cout<<"      GST on each item is : 12% "<<endl;
  cout<<"      The item you ordered will be delivered within 4 days"<<endl;
  cout<<"      The return policy for the itemm you have ordered is upto 10 days"<<endl;
  cout<<"      Contact Us : 1800 420 1111"<<endl;
  cout<<"      WS Retails Services Pvt.Ltd"<<endl<<endl<<endl;
  startLevel:
  cout<<"Please press S/s to start shopping :"<<endl;
  start:
  cin>>startshopping;
  if(startshopping=='s'|| startshopping=='S')
  {
	float totalamount=onlineshopping()+12;
	cout<<"Billamount is :"<<totalamount<<endl;
	total = total + totalamount;
	cout<<"Totalamount is :"<<total;
	shopagain:
	cout<<"\nDo you want to shopping again , yes or no ,if yes then enter Y/y else enter N/n:"<<endl;
	cin>>choiceagain;
	if(choiceagain=='y'||choiceagain=='Y')
	goto startLevel;
	else if(choiceagain=='n'||choiceagain=='N')
	{
		 	customer c1;
		 	cout<<endl;
		 	cout<<"Enter your name : ";
		 	cin>>c1.customer_name;
		 	cout<<"Enter your mobile number : ";
		 	cin>>c1.mobile_number;
			cout<<"Enter the Date:";
			cin>>c1.dd>>c1.mm>>c1.yy;
			cout<<"Enter your city : ";
		 	cin>>c1.city;
		 	cout<<"Enter your street no :";
		 	cin>>c1.street_no;
		 	cout<<"Enter your road no : ";
		 	cin>>c1.road_no;
            cout<<"Enter your address : ";
		 	cin>>c1.address;
		 	cout<<endl;
		 	cout<<endl;
			cout<<"                  ****CUSTOMER'S BILL********"<<endl;
			cout<<"                  *    CUSTOMER'S NAME IS         :     "<<c1.customer_name<<endl;
			cout<<"                  *    CUSTOMER'S MOBLE NUMBER IS :     "<<c1.mobile_number<<endl;
			cout<<"                  *    DATE                       :     "<<c1.dd<<"/"<<c1.mm<<"/"<<c1.yy<<endl;
			cout<<"                  *    CUSTOMER'S CITY IS         :     "<<c1.city<<endl;
			cout<<"                  *    CUSTOMER'S ADDRESS IS      :     "<<c1.street_no<<"/"<<c1.road_no<<" "<<c1.address<<" , "<<c1.city<<endl;
			cout<<"                  *    CUSTOMER'S TOTALBILL IS    :     "<<total<<" Rs./-"<<endl;
			cout<<"                  *      ------ THANKS FOR SHOPPING -------   "<<endl;
	        cout<<"                  *   -------------- VISIT AGAIN --------------   "<<endl;
			cout<<"                  *****************"<<endl;
}
else
{
	cout<<"You have entered wrong , please typeagain:"<<endl;
	goto shopagain;
}
}
  else
  {
  	cout<<"You have entered wrong , if you want to start than press s/S"<<endl;
  	goto start;
}
}
float onlineshopping()
{
int quantity;
char choice;
char item;
float billamount=0;

	cout<<"                             ____________________"<<endl;
	cout<<"                            |  ___________________  |"<<endl;
    cout<<"                            | |**** WELCOME TO HOMESHOPPING EMART ****    | |"<<endl;
	cout<<"                            | |____ PLEASE FOLLOW THE INSTRUCTIONS ___    | |"<<endl;
	cout<<"                            | |---(1): Please Enter m to order MOBILE PHONES---       | |"<<endl;
	cout<<"                            | |---(2): Please Enter l to order LAPTOPS---             | |"<<endl;
	cout<<"                            | |---(3): Please Enter e to order EARPODES---            | |"<<endl;
    cout<<"                            | |---(4): Please Enter g to order GOGALS---              | |"<<endl;
	cout<<"                            | |---(5): Please Enter t to order TELEVISION---          | |"<<endl;
	cout<<"                            | |---(6): Please Enter a to order BAGS---                | |"<<endl;
	cout<<"                            | |---(7): Please Enter s to order SMARTWATCHES---        | |"<<endl;
	cout<<"                            | |---(8): Please Enter j to order JACKETS---             | |"<<endl;
	cout<<"                            | |---(9): Please Enter o to order TRACKPANTS---          | |"<<endl;
	cout<<"                            | |---(10):Please Enter b to order BOOKS--- 	      | |"<<endl;
	cout<<"                            | |___________________| |"<<endl;
	cout<<"                            |_____________________|"<<endl;
	cin>>choice;

//********MOBILES********//
			if(choice=='m'||choice=='M')
			mobilelevel:

			{
				cout<<"MOBILES DETAILS:"<<endl;
				cout<<"---(1): Apple      => price : 100000---"<<endl;
				cout<<"---(2): Smasung    => price : 70000---"<<endl;
				cout<<"---(3): Redmi      => price : 15000---"<<endl;
                cout<<"---(4): Vivo       => price : 12000---"<<endl;
                cout<<"---(5): OPPO       => price : 25000---"<<endl;
                cout<<"---(6): MOTOROLA   => price : 10000---"<<endl;
                cout<<"---(7): INFINIX    => price : 10000---"<<endl;
                cout<<"---(8): TECHNOPOVA => price : 11000---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				mobiledetails:
				{
//					float billamount=0;
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*100000;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*70000;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*15000;
				}
				else if(item=='4')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*12000;
				}
				else if(item=='5')
                {
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*70000;
				}
				else if(item=='6')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*70000;
				}
				else if(item=='7')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*10000;
				}
				else if(item=='8')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
}
			}


//********LAPTOPS********//
				if(choice=='l'||choice=='L')
			laptoplevel:
			{
				cout<<"laptop DETAILS:"<<endl;
				cout<<"---(1): MACBOOK AIR  => price : 80000---"<<endl;
				cout<<"---(2): HP           => price : 60000---"<<endl;
				cout<<"---(3): LENOVO       => price : 40000---"<<endl;
				cout<<"---(4): DELL         => price : 45000---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*80000;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*60000;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*40000;
				}
				else if(item=='4')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*45000;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto laptoplevel;
  				}
			}

  //********EARPODES********//
				if(choice=='e'||choice=='E')
			earpodeslevel:
			{
				cout<<"EARPODES DETAILS:"<<endl;
				cout<<"---(1): APPPlE   => price : 2000---"<<endl;
				cout<<"---(2): NOISE    => price : 1000---"<<endl;
				cout<<"---(3): BOAT     => price : 1500---"<<endl;
				cout<<"---(4): LENOVO   => price : 2500---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*10000;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1000;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1500;
				}
				else if(item=='4')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*700;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto earpodeslevel;
  				}
			}
			//********GOGALS********//
				if(choice=='g'||choice=='G')
			gogallevel:
			{
				cout<<"GOGALS DETAILS:"<<endl;
				cout<<"---(1): RAY-BON    => price : 5000---"<<endl;
				cout<<"---(2): FASTRACK   => price : 4753---"<<endl;
				cout<<"---(3): OAKLEY     => price : 1000---"<<endl;
				cout<<"---(4): IDEE       => price : 4500---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*5000;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*4753;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1000;
				}
      			else if(item=='4')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*4500;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto gogallevel;
  				}
			}
			
			 //********TELEVISION********//
				if(choice=='t'||choice=='T')
			televisionlevel:
			{
				cout<<"TELEVISION DETAILS:"<<endl;
				cout<<"---(1): MI        => price : 13499---"<<endl;
				cout<<"---(2): SAMSUNG   => price : 14999---"<<endl;
				cout<<"---(3): V.U.      => price : 22800---"<<endl;
				cout<<"---(4): SONY      => price : 25699---"<<endl;
				cout<<"---(5): TOSHIBA   => price : 17899---"<<endl;
				cout<<"---(6): ONEPLUS   => price : 14000---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*13499;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*14999;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*22800;
				}
      			else if(item=='4')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*25699;
				}
				else if(item=='5')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*17899;
				}
				else if(item=='6')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*14000;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto televisionlevel;
  				}
			}
			//********BAGS********//
				if(choice=='a'||choice=='A')
			baglevel:
			{
				cout<<"BAG DETAILS:"<<endl;
				cout<<"---(1): SKYBAG              => price : 1500---"<<endl;
				cout<<"---(2): WILDCRAFT           => price : 2949---"<<endl;
				cout<<"---(3): F GEAR              => price : 1499---"<<endl;
				cout<<"---(4): AMERICAN TOURISTER  => price : 1000---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*699;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*2949;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1499;
				}
      			else if(item=='4')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1000;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto baglevel;
  				}
			}

		//********SAMRTWATCHES **********//
				if(choice=='S'||choice=='s')
			smartwatcheslevel:
			{
				cout<<"SMARTWATCHES DETAILS:"<<endl;
				cout<<"---(1): FIREBOLT => price : 3000---"<<endl;
				cout<<"---(2): BOAT     => price : 2000---"<<endl;
				cout<<"---(3): SAMSUNG  => price : 1499---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*3000;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*2000;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1499;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto smartwatcheslevel;
  				}
			}

		//********JACKETS********//
				if(choice=='j'||choice=='J')
			jacketlevel:
			{
				cout<<"JACKETS DETAILS:"<<endl;
				cout<<"---(1): VARSITY    => price : 4000---"<<endl;
				cout<<"---(2): LEATHER    => price : 2000---"<<endl;
				cout<<"---(3): DENIM      => price : 1499---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*4000;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*2000;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1499;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto jacketlevel;
  				}
			}


		//********TRACKPENTS********//
				if(choice=='o'||choice=='O')
			trackpent:
			{
				cout<<"TRACKPENTS DETAILS:"<<endl;
				cout<<"---(1): U.S.POLO    => price : 1316---"<<endl;
				cout<<"---(2): AIDAS       => price : 1487---"<<endl;
				cout<<"---(3): JOCKEY      => price : 1689---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1316;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*1487;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*999;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto trackpent;
  				}
			}

		//********BOOKS********//
				if(choice=='B'||choice=='b')
			booklevel:
			{
				cout<<"BOOKS DETAILS:"<<endl;
				cout<<"---(1): LIFES AMAZING SECRETS      => price : 149---"<<endl;
				cout<<"---(2): THE ALCHEMIST              => price : 269---"<<endl;
				cout<<"---(3): THE THEORY OF EVERYTHING   => price : 179---"<<endl;
				cout<<"PLEASE ENTER YOUR CHOICE :"<<endl;
				cin>>item;
				if(item=='1')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*149;
				}
				else if(item=='2')
				{
				cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*269;
				}
				else if(item=='3')
				{
					cout<<"Enter Quantity"<<endl;
					cin>>quantity;
					billamount=billamount+quantity*179;
				}
				else
				{
				cout<<"You have entered wrong option, please type again:"<<endl;
				goto jacketlevel;
  				}
			}
return billamount;


}