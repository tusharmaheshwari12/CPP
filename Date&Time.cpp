/*
DATE AND TIME
*/
#include <iostream>
#include <ctime>
#include<unistd.h>
#include<cstdlib>
using namespace std;
class Time
{
public:
 int hour, mint, sec;
 void setTime(){
    time_t tt;
     // reading current time as per IST
    struct tm *ti;
    time (&tt);
    ti = localtime (&tt);
    cout << asctime(ti) << endl;
    cout <<"Hour:" << (5+ti->tm_hour) % 24 << endl;
    cout <<"Mint: " <<30+ti->tm_min <<endl;
    cout <<"Sec: " <<ti->tm_sec <<endl;
     // assining values to Local variable
    hour= (5+ti->tm_hour) % 24; 
    mint=30+ti->tm_min;
    sec= ti->tm_sec;
}
Time getTime()
{ 
    Time temp;
    temp.hour=hour;
    temp.mint=mint;
    temp.sec=sec;
return temp;
}

Time sleepTime(Time napTime, Time wakeup)
{
    Time temp;
    temp.hour=wakeup.hour-napTime.hour;
    temp.mint=wakeup.mint-napTime.mint;
    temp.sec=wakeup.sec-napTime.sec;
    return temp;
}

};


class Date{
    public:
    int day,month,year;
    
    public:
    void setDate(){
 
        time_t now = time(0);

        tm *ltm = localtime(&now);

       year=1900 + ltm->tm_year;
       month=1 + ltm->tm_mon;
       day=ltm->tm_mday;

    }
        
    Date getDate(){
        Date obj;
        obj.day=day;
        obj.month=month;
        obj.year=year;
        return obj;
    }
    Date setDOB(Date d1){
        Date dob;
        dob.day=d1.day;
        dob.month=d1.month;
        dob.year=d1.year;
        return dob;
    }

    Date findAGE(Date dob){
        Date now,d2,age;
        
        d2.setDate();                       
        now=d2.getDate();                   

        
        if (dob.day>now.day){
            now.day=now.day+(dob.month-1);
            now.month=now.month-1;
        }
        if(dob.month>now.month){
            now.year=now.year-1;
            now.month=now.month+12;
        }
        
        
        age.day = now.day - dob.day;
        age.month =  now.month-dob.month;
        age.year = now.year - dob.year;
    
        return age;
        
  
    }
};


int main() 
{
	Time t1,t3;
	Time timeatsleep,timeatWake;
	t1.setTime();
	t3=t1.getTime();
	cout<<"\nValues Return From getTime\n";
	cout<<"Hour:" <<t3.hour <<"Mint:"<<t3.mint<<"Sec:"<<t3.sec<<endl;
	cout<<"Calculating sleep time"<<endl;
	
	t1.setTime();
	timeatsleep=t1.getTime();
	
	sleep(5);
	
	t1.setTime();
	timeatWake=t1.getTime();
	
	t3=t1.sleepTime(timeatsleep,timeatWake);
	cout<<"\nTime spent sleeping"<<endl;
	cout<<"Hour "<<t3.hour<<" Mint "<<t3.mint<<" Sec "<<t3.sec<<endl;
	
	
	 Date d1,fe,dob,user_input,age;
    d1.setDate();
    
    fe=d1.getDate();
    cout<<"Day ->"<<fe.day<<"\nMonth ->"<<fe.month<<"\nYear ->"<<fe.year<<"\n";
    
    int ud,um,uy;
    cout<<"Enter your date of birth--->>\n";
    cin>>ud>>um>>uy;
    dob.day=ud;
    dob.month=um;
    dob.year=uy;
      
    user_input=d1.setDOB(dob);
    age=d1.findAGE(user_input);
    cout<<"Here is your age-->>\n";
    cout<<age.year<<" Years"<<"\n"<<age.month<<" Month"<<"\n"<<age.day<<" Days";
	
	return 0;
}

