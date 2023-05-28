#include<iostream>
using namespace std;

class Bank_Account{
    
private:
    
    int account;
    char name[50];
    int deposit;
    string type;
  
public:

    void create_account();
    void show_account() const;
    void deposite_money();
    void withdraw_money();
    void modify();
};

void Bank_Account::create_account()
{

    cout<<"\nEnter The Name of The account Holder : ";

    cin.ignore();
    cin.getline(name,50);
    cout<<"\nWhat type of account you want to open saving or current : ";
    cin>>type;
    
    cout<<"\nEnter The Initial amount : ";
    cin>>deposit;
    
    cout<<"\nYour account is created.\n";

    

}
    
void Bank_Account::deposite_money()
{
    int a;
    
    cout<<"Enter how much you deposite :: ";
    cin>>a;
    
    deposit+=a;
    
    cout<<"Total amount you deposite :: \t "<< deposit<<endl;
}


void Bank_Account:: withdraw_money ()
{
    int amount;
    cout<<"\n withdraw ::";
    cout<<"\nenter amount to withdraw :: ";
    
    cin>> amount;
    deposit=deposit-amount;
    
    cout<<"now total amount is left :: "<< deposit<<endl;
    
}

void Bank_Account::modify()
{
    
    cout<<"\nModify Account Holder Name : ";
    
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nModify Type of Account : ";
    
    cin>>type;
    cout<<"\nModify Balance amount : ";
    cin>>deposit;
    
}

void Bank_Account:: show_account () const
{
    
    cout<<"\nAccount Holder Name : ";
    cout<<name;
    cout<<"\nType of Account : "<<type;
    cout<<"\nBalance amount : "<<deposit<<endl;
    
}

int main(){
    
    cout<<"\t\t\tWelcome to our online banking service!!!"<<endl;
    
    int k,total=1201300;;
    Bank_Account obj;
    
    
    do
    {
        

        
        cout<<"\n1) Open account \n";
        cout<<"2) Deposite money\n";
        cout<<"3) withdraw money \n";
        cout<<"4) Display account \n";
        cout<<"5) Modify account \n";
        cout<<"6) Exit \n";
        
        cout<<"\nSelect Your Option (1-6):";
        cin>>k;
        
        switch (k)
        {
            case 1:
                
                cout<<"\n1) open account \n";
                
                obj.create_account () ;
                total++;
                
                cout<<"Your account no is :"<<total<<endl;
                break;
                
                
            case 2:
                
                if(total==1201300){

                    cout<<"No data is entered"<<endl;
                    return 0;

                }
                
                else{
                    cout<<" 2) deposite money \n";
                    obj.deposite_money();
                    break;
                }
                
            case 3:
                if(total==1201300){

                    cout<<"No data is entered"<<endl;
                    return 0;

                }
                
                else{
                    cout<<"3) withdraw money : 'n";
                    obj.withdraw_money();
                    break;
                }
                
            case 4:
                if(total==1201300){

                    cout<<"No data is entered"<<endl;
                    return 0;

                }
                
                else{
                    
                    cout<<"4) Display account \n";
                    cout<<"\nAccount No. : "<<total;
                    
                    obj.show_account();
                    break;
                    
                }
                
            case 5:
                
                if(total==1201300){

                    cout<<"No data is entered"<<endl;
                    
                    return 0;

                }
                else{
                    
                    cout<<"5) Modify account \n";
                    
                    cout<<"\nAccount No. : "<<total;
                    
                    obj.modify();
                    
                    break;
                    
                }
                
            case 6:
                
                cout<<"\n\n\tThanks for using bank managemnt system.\n"<<endl;
                
                return 0;

        }
        
        }while (k!=6);
    
    return 0;
    
}