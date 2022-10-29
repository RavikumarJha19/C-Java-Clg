#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class books
{
private:
    string author_name;
    string publisher_name;
    string title_name;
    int stock_position;
    float price;
public:
    void get_data()
    {
        cin.ignore();
        cout<<"Enter Title: "<<endl;
        getline(cin,title_name);
        cout<<"Enter Author's Name: "<<endl;
        getline(cin,author_name);
        cout<<"Enter Publisher's Name: "<<endl;
        getline(cin,publisher_name);
        cout<<"Enter Price: "<<endl;
        cin>>price;
        cout<<"Enter Stock Position: "<<endl;
        cin>>stock_position;
    }
    void display_data()
    {
        cout<<"Title: "<<title_name<<endl;
        cout<<"Author: "<<author_name<<endl;
        cout<<"Publisher: "<<publisher_name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Stock Position: "<<stock_position<<endl;
    }
    void edit_data()
    {
        cin.ignore();
        cout<<"Enter Title: "<<endl;
        getline(cin,title_name);
        cout<<"Enter Author's Name: "<<endl;
        getline(cin,author_name);
        cout<<"Enter Publisher's Name: "<<endl;
        getline(cin,publisher_name);
        cout<<"Enter Price: "<<endl;
        cin>>price;
        cout<<"Enter Stock Position: "<<endl;
        cin>>stock_position;
    }
    void search(string t_buy, string a_buy)
     {
       
        if(a_buy==author_name&&t_buy==title_name)
        {
            cout<<"Book found successfully!\n";
            display_data();
        }
        
    }
    void buy(string title1,string author1)
    {

        float amount,final_price;
        if(author1==author_name&&title1==title_name)
        {
            cout<<"Book found successfully!!!\n";
            cout<<"\n Details for the searched book : ";
            cout<<"Price: "<<price<<endl;
            if(stock_position>0)
            {
                cout<<"Book in stock!";
                cout<<"\nStock Position: "<<stock_position<<endl;
                cout<<"\nEnter amount you want to buy: ";
                cin>>amount;
                final_price=price*amount;
                stock_position=stock_position-amount;
                cout<<"Remaining Stock: "<<stock_position;
                cout<<"\nTotal amount: "<<final_price;
            }
            else
            {
                cout<<"Book not in stock!"<<endl;
            }
        }
    }
};
int main()
{
    books b[20];
    int i=0,choice,edit,t,r;
    string title,author;
    char cam='y';
    while(cam=='y')
    {
    cout<<"Enter your choice:\n1.Enter Details\n2.Search\n3.Buy\n4.Edit Details\n5.Exit"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:

        b[i].get_data();
        i++;
        break;

    case 2:
        cout<<"Enter title and author: ";
        cin>>title>>author;
        for(t=0;t<i;t++)
        b[t].search(title,author);
        break;
    case 3:
        cout<<"Enter title and author: ";
        cin>>title>>author;
        for(t=0;t<i;t++)
        b[t].buy(title,author);
        

        break;
    case 4:
        b[0].edit_data();
        break;
    case 5:
        {
            
            exit(0);
        }

        break;
    default:
        cout<<"Wrong Choice"<<endl;
    }
        cout<<"\nDo you wish to proceed? y or n ";
        cin>>cam;
    }
    return 0;

}