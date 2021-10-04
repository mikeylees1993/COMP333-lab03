#include "ItemRec.h"
#include<iomanip>
using namespace std;

//Implementation file for Module 3 in class exercise (ItemRec)
// COMP333- Colin Graves

/* Complete the following tasks:
*
* 1.Add the changes for the ItemTracking data type where needed
* 2.Write the function that will change a qoh, ensure the new quo is not less than 0.
* 3.Add validation to the setItem function to ensure there are characters in the section, if not, assign it "NO Section"

*/
void ItemRec::printItem(ostream& out) const
{
	out << itemCode << " " << description << endl
		<< "quantity on hand " << qoh << endl;

}

void ItemRec::setItem(int newItemCode, string newDescription,
	int newQoh)
{
	itemCode = newItemCode;
	description = newDescription;
	qoh = newQoh;
}

string ItemRec::determineAvailable(int orderAmt) const
{
	string available;
	if (orderAmt <= qoh)
		available = "item is available";
	else
		available = "item is not available";
	return available;
}

