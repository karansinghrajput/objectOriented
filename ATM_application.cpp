#include<iostream>

using namespace std;

int ch;
char name[10];
double acc_no;
double phone_no;
int amount,Atmpin,pin,temp,balance = 0, withdraw;

 // open Account.

 int OpenAccount()
 {
    cout<<"WELCOME.......!" <<endl;
    cout<<"\n";
    cout<<"four open your Account Enter the following Details::\n";

    cout<<"Enter your name::\n";
    cin>>name;

    cout<<"Enter your Accont no:-\n";
    cin>>acc_no;

    cout<<"Enter your phone no:-\n";
    cin>>phone_no;

    cout<<"\n\n\n";

    cout<<"open Account Successfully::\n\n";
 }

// pin asked by user.
 int askPin()
 {
    cout<<"Enter your Atm pin:"<<endl;
    cin>>Atmpin;
 }
 
 // cashDeposite
 int cashDeposite()
 {
    askPin();

    cout<<"Hello welcome to your account::\n\n";

    cout<<"Enter the amount to Deposite::\n\n";
    cin>>amount;

    cout<<amount<<" "<<"Deposite to your account successfully::"<<endl;
    balance += amount;

    cout<<"Total Available Balance = "<<balance;
 }
 // check balance.
 int BalaceEnquiry()
 {
    askPin();
    if(Atmpin == 1370)
    {
        cout<<"Balance  "<<" = "<<balance<<endl;
    }
    else
    {
        cout<<"You have Entered wrong pin.. \n Please enter correct pin";
    }
 }

  // cash Widrawal to your account.
 int cashWidrawal()
 {
    askPin();

    if(Atmpin == 1370)
    {
        cout<<"Enter the  amount to widraw::"<<endl;
        cin>>withdraw;

        if(balance >= withdraw)
        {
            cout<<"withdraw  from your Account: "<<" = "<<withdraw <<endl;
            balance -= withdraw;

            cout<<"Total Remaining balance = "<<balance;
        }
        else{
            cout<<"insufficient Balance";
        }
    }
    else{

      cout<<"You have Entered wrong pin.. \n Please enter correct pin"<<endl;
    }
 }
// thankyou function.
 void thankyou()
 {
    cout<<"THANKYOU...\nPlese Visit Again"<<endl;
 }

int main(){
    
  do{
    cout<<"\n\t****************OPTIONS*******************";
    cout<<"\n\t";

                 cout<<"\n*Press 1. for open your account.*";
                 cout<<"\n\t";

    
                 cout<<"\n*Press 2. for display balance deposite.*";
                 cout<<"\n\t";

                 cout<<"\n*Press 3. for cash withdraw*";
                 cout<<"\n\t";

                 cout<<"\n*Press 4. for display balance Enquiry*";
                 cout<<"\n\t";

                 cout<<"\n*Press 5. for EXIT*";
                 cout<<"\n\t";

                 cout<<"\n\t";

                 cout<<"\n\t*choose your  option to display this screen*"<<endl;
                 cin>>ch;

    switch(ch)
    {
        case 1:
         if(ch == 1)
         {
           OpenAccount();
           break;
         }

         case 2:
          if(ch == 2)
          {
            cashDeposite();
            break;
          }

          case 3:
            if(ch == 3)
            {
                BalaceEnquiry();
                break;
            }


          case 4:
           if(ch == 4)
           {
            cashWidrawal();
            break;
           }

         case 5:
           if(ch == 5)
           {
            thankyou();
            break;
           }   
         
         default:
          if(ch > 5)
          {
            cout<<"option choose correct again"<<endl;
          }
          break;
    }
  }while(ch != 5);
   
    return 0;
}