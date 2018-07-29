#include<bits/stdc++.h>
using namespace std;

int is_leap(int year)
{
	if(year%400==0)
		return 1;
	else if(year%4==0 && year%100!=0)
		return 1;
	else return 0;
}

int main()
	{
		int notleap[12] = {31,59,90,120,151,181,212,243,273,304,334,365};
		int leap[12] = {31,60,91,121,152,182,213,244,274,305,335,366};
		int TC,x=1;
		cin>>TC;
		while(TC--)
		{
			int i,ar[12];
			string s;
			int month=0,date=0,year=0;
			
			cin>>s;
			month = 10*(s[0]-'0')+s[1]-'0';
	
			date = 10*(s[2]-'0')+s[3]-'0';

			year = 1000*(s[4]-'0')+100*(s[5]-'0')+10*(s[6]-'0')+s[7]-'0';
			// cout<<"temp variables ->"<<endl;
			// cout<<date<<"/"<<month<<"/"<<year<<"	<- Initial date"<<endl;
			// cout<<"Leap year ->	";
			
			if(!is_leap(year))
			{	
				// cout<<"NO"<<endl;
				for(i=0;i<12;i++)
					ar[i] = notleap[i];
			}
			else
			{	
				// cout<<"YES"<<endl;
				for(i=0;i<12;i++)
					ar[i] = leap[i];
			}

			int val=280+date;
			if(month-2>=0)
				{
					val += ar[month-2];
					// cout<<"val = "<<val<<endl;
				}
			if(val>365 && !is_leap(year))
			{
				year++;
				if(is_leap(year))
				{
					for(i=0;i<12;i++)
						ar[i] = leap[i];
				}
				val -= 365;
				// cout<<"Updated val = "<<val<<endl;
			}
			else if(val>366 && is_leap(year))
			{
				year++;
				for(i=0;i<12;i++)
						ar[i] = notleap[i];
				val -= 366;
			}

			for(i=0;i<12;i++)
			{
				if(ar[i]>=val)
				{
					month = 1+i;
					break;
				}
			}
			if(i>0)
			{
				i--;
				val -= ar[i];
				date = val;
			}
			else if(i==0)
			{
				date = val;
			}

			cout<<x<<" ";
			x++;

			if(month<10)
				cout<<"0"<<month<<"/";
			else
				cout<<month<<"/";

			if(date<10)
				cout<<"0"<<date<<"/";
			else 
				cout<<date<<"/";
			cout<<year<<" ";

			if(month==1)
			{
				if(date<=20)
					cout<<"capricorn"<<endl;
				else 
					cout<<"aquarius"<<endl;
			}
			else if(month==2)
			{
				if(date<=19)
					cout<<"aquarius"<<endl;
				else if(date>=20)
					cout<<"pisces"<<endl;
			}
			else if(month==3)
			{
				if(date<=20)
					cout<<"pisces"<<endl;
				else if(date>20)
					cout<<"aries"<<endl;
			}
			else if(month==4)
			{
				if(date<=20)
					cout<<"aries"<<endl;
				else if(date>20)
					cout<<"taurus"<<endl;
			}
			else if(month==5)
			{
				if(date<=21)
					cout<<"taurus"<<endl;
				else if(date>21)
					cout<<"gemini"<<endl;
			}
			else if(month==6)
			{
				if(date<=21)
					cout<<"gemini"<<endl;
				else if(date>21)
					cout<<"cancer"<<endl;
			}
			else if(month==7)
			{
				if(date<=22)
					cout<<"cancer"<<endl;
				else if(date>22)
					cout<<"leo"<<endl;
			}
			else if(month==8)
			{
				if(date<=21)
					cout<<"leo"<<endl;
				else if(date>21)
					cout<<"virgo"<<endl;
			}
			else if(month==9)
			{
				if(date<=23)
					cout<<"virgo"<<endl;
				else if(date>23)
					cout<<"libra"<<endl;
			}
			else if(month==10)
			{
				if(date<=23)
					cout<<"libra"<<endl;
				else if(date>23)
					cout<<"scorpio"<<endl;
			}
			else if(month==11)
			{
				if(date<=22)
					cout<<"scorpio"<<endl;
				else if(date>22)
					cout<<"sagittarius"<<endl;
			}
			else if(month==12)
			{
				if(date<=22)
					cout<<"sagittarius"<<endl;
				else if(date>22)
					cout<<"capricorn"<<endl;
			}
		  
		}
		return 0;
	}