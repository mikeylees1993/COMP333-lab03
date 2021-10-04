#include <string>
#include <iostream>
using namespace std;
//Specification file for Module 3 in class exercise (ItemRec)
// COMP333- Colin Graves

/* Complete the following tasks:
*  
* 1.Add a struct defn called ItemTracking that contains an itemCode and section  
* 2.Modify the class to use the struct data type instead of itemCode
* 3.Add a member function called setQoh that accepts a new qoh
* 4. Rewrite the get functions to appear inline
*/

class ItemRec
{
public:

    void printItem(ostream& /*output stream*/) const; // prints off information about the ItemRec 
	void setItem(int /*itemCode*/, string /*description*/, int /*qoh*/); // sets values for private members 
	string determineAvailable (int /*order amount*/) const; // determine
	string getDescription() const;
	int getItemCode() const;


private:
	int itemCode; 
	string description;
	int qoh;
};