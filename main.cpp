#include <iostream>
#include <string>
#include <stdio.h>


using namespace std;

double price;

void intro();
void cookies();
void cupcakes();
void scones();
void muffins();
void beverages();
int quantity();

int main(){
    int choice, whichitem;
    char answer = 'y';
    double totalprice = 0;

    do{
        intro();
        cin >> choice;

        if(choice == 1){
            cookies();
            cout << endl;
            cin >> whichitem;
           
            int totalwant = quantity();
            totalprice += (totalwant * price);
                        
        }else if(choice == 2){
            cupcakes();
            cout << endl;

            cin >> whichitem;
            
            int totalwant = quantity();
            totalprice += (totalwant * price);
            
            //totalprice += (quantity() * price);

        }else if(choice == 3){
            scones();
            cout << endl;

            cin >> whichitem;
            int totalwant = quantity();
            totalprice += (totalwant * price);
            
            

        }else if(choice == 4){
            muffins();
            cout << endl;

            cin >> whichitem;
            int totalwant = quantity();
            totalprice += (totalwant * price);
            
            

        }else if(choice == 5){
            beverages();
            cout << endl;

            cin >> whichitem;
            int totalwant = quantity();
            totalprice += (totalwant * price);
            
            

        }else{
            cout << "\nInvalid choice\n";
        }

        cout << "Do you want something else? (y or n)";
        cin >> answer;

    }while(answer == 'y' || answer == 'Y');

    cout << "Your total is " << totalprice << endl;
    cout << "Thank you for shopping at Audrey's Bakery.\nGoodbye!";

    return 0;
}

int quantity(){
    int num;
    cout << "\nHow many do you want? ";
    cin >> num;
    return num;
}

void intro(){
    cout <<"\n\tWelcome to Audrey's Bakery!\n";
    cout <<"----------------------------------------------\n\n";
    cout <<"What can I help you with?\n\n";
    cout <<"1: Cookies ($1.25)\n2: Cupcakes ($2.50)\n3: Scones ($2.75)\n4: Muffins ($2.50)\n5: Beverage ($2.00)\n6: Nothing\n";
}

void cookies(){
    cout << "Choose which cookie you would like: \n";
    cout << "1: Chocolate chip\n2: Sugar\n3: Peanut Butter\n";
    //price of a cookie
    price = 1.25;
}

void cupcakes(){
    cout << "Choose which cupcake you would like: \n";
    cout << "1: Chocolate\n2: Vanilla\n3: Coffee\n";
    //price of a cupcake
    price = 2.50;
}

void scones(){
    cout << "Choose which scone you would like: \n";
    cout << "1: Chocolate chip\n2: Cranberry\n3: Plain";
    //price of a scone
    price = 2.75;
}

void muffins(){
    cout << "Choose which muffin you would like: \n";
    cout << "1: Blueberry\n2: Chocolate chip\n3: Banana Nut";
    //price of a muffin
    price = 2.50;
}

void beverages(){
    cout << "Choose which drink you would like: \n";
    cout <<"1: Hot chocolate\n2: Coffee\n3: Hot tea\n4: Bottled Water";
    //price of a drink
    price = 2.00;
}