#include <iostream>
#include <iomanip>
#include <cmath> 
using namespace std;

int main()
{
	double cashDrawer = 500.00;
	int productID = 0;
    int quantity = 0;
	double price = 0.0;
	double subtotal = 0.0;
	double salesTax = 0.0;
	double totalSale = 0.0;
	int anotherSale = 1;
    double taxRate = 0.0;
    double moneyInTheDrawer = 0.0;
    double overnightDeposit = 0.0;
	// Loop for repeat sales
while (anotherSale != -1) {
cout << "\nSale#" << anotherSale << ":" << endl;
anotherSale++;

	// Enter the first Product ID for the first sale (-1 to exit)
cout << "Enter the first productID (-1 to exit): ";
cin >> productID; 


	// Main loop for each sale
while (productID != -1)
{  
    
    cout <<"Enter the quantity:  ";
    cin >> quantity;
    
	// Switch statement to determine the price, and calculate sales tax, if any, for the item.
switch (productID)
{
    case 101:
        price = 66.00;
        taxRate = .075;
        break;
    case 102:
        price = 12.5;
        taxRate = 0.0;
        break; 
    case 103:
        price = 24.50;
        taxRate = 0.0;
        break;
    case 104:
        price = 38.75;
        taxRate = 0.075;
        break;
    case 105:
        price = 17.80;
        taxRate = 0.075;
        break;
    case 106: 
        price = 16.50;
        taxRate = 0.0;
        break;
    case 107:
       price = 42.86;
       taxRate = 0.075;
       break;
    case 108:
        price = 32.99;
        taxRate = 0.075;
        break;
    case 109:
        price = 28.75;
        taxRate = 0.075;
        break;
    case 110:
        price = 51.55;
        taxRate = 0.0;
        break;
       
       
       default:
       cout << "Error: ProductID not found";

}
// Add to subtotal, salesTax and totalSale

    subtotal += quantity * price;
 salesTax += quantity * price * taxRate; 
totalSale = subtotal + salesTax;


	// Get next Product ID
cout<< "Enter the next product ID (-1 to exit): ";
cin >> productID;
} //end while loop


	// Print properly formatted output for each sale
  cout << "Subtotal: $"<<setw(6)<< subtotal << endl;
  cout << "Sales Tax: $" <<setprecision(5)<< salesTax << endl;
  cout << "Total Sale: $" <<setprecision(6)<< totalSale << endl;


      // Another sale?
      
cout<< "Would you like to process another sale? (-1 to exit): ";

cout << " (or Press '0'): ";
cin >> productID;

/*while (productID != -1)
{  
    
    cout <<"Enter the quantity:  ";
    cin >> quantity;
    
switch(productID)
{
    case 101:
        price = 66.00;
        taxRate = .075;
        break;
    case 102:
        price = 12.5;
        taxRate = 0.0;
        break; 
    case 103:
        price = 24.50;
        taxRate = 0.0;
        break;
    case 104:
        price = 38.75;
        taxRate = 0.075;
        break;
    case 105:
        price = 17.80;
        taxRate = 0.075;
        break;
    case 106: 
        price = 16.50;
        taxRate = 0.0;
        break;
    case 107:
       price = 42.86;
       taxRate = 0.075;
       break;
    case 108:
        price = 32.99;
        taxRate = 0.075;
        break;
    case 109:
        price = 28.75;
        taxRate = 0.075;
        break;
    case 110:
        price = 51.55;
        taxRate = 0.0;
        break;
       
       default:
       cout << "Error: ProductID not found";
    

}
// Add to subtotal, salesTax and totalSale
    subtotal += quantity * price;
 salesTax += quantity * price * taxRate; 
totalSale = subtotal + salesTax;


	// Get next Product ID
cout<< "Enter the next product ID (-1 to exit): ";
cin >> productID;
} //end while loop

	// Print properly formatted output for each sale
  cout << "Subtotal: $"<<setw(6)<< subtotal << endl;
  cout << "Sales Tax: $" <<setprecision(5)<< salesTax << endl;
  cout << "Total Sale: $" <<setprecision(6)<< totalSale << endl;
*/
      } 
	// Display how much is in the cash drawer at the end
		overnightDeposit = 200;
moneyInTheDrawer += totalSale + overnightDeposit;
cout << "   \nMoney in the drawer = $ " <<setw(4)<< moneyInTheDrawer
<< endl; 
  
return 0;
}
