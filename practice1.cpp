#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float iprice, nopc, dbill, tbill;
    cout << "****Pricing System****" << endl << endl;
    cout << "Item Price: ";
    cin >> iprice;
    cout << "No. of Pcs: ";
    cin >> nopc;
    cout << endl;

    if (nopc>=100) {
        tbill = iprice * nopc;
        dbill = tbill - (tbill*.10);
        iprice -= iprice*.10;
        cout << "Discount to be applied: 10%" << endl
            << "Discounted price: " << fixed << setprecision(2) << iprice << endl
            << endl
            << "Total Bill (w/o discount): " << fixed << setprecision(2) << tbill << endl
            << "Total Bill (w/ discount): " << fixed << setprecision(2) << dbill << endl;
        dbill -= dbill*.02;
        cout << "Special Discounted Bill: " << fixed << setprecision(2) << dbill << endl;
    }
    else if (nopc>=40) {
        tbill = iprice * nopc;
        dbill = tbill - (tbill*.10);
        iprice -= iprice*.10;
        cout << "Discount to be applied: 10%" << endl
            << "Discounted price: " << fixed << setprecision(2) << iprice << endl
            << endl
            << "Total Bill (w/o discount): " << fixed << setprecision(2) << tbill << endl
            << "Total Bill (w/ discount): " << fixed << setprecision(2) << dbill << endl
            << "Special Discounted Bill: " << fixed << setprecision(2) << dbill << endl;
    }
    else if (nopc>=20) {
        tbill = iprice * nopc;
        dbill = tbill - (tbill*.05);
        iprice -= iprice*.05;
        cout << "Discount to be applied: 5%" << endl
            << "Discounted price: " << fixed << setprecision(2) << iprice << endl
            << endl
            << "Total Bill (w/o discount): " << fixed << setprecision(2) << tbill << endl
            << "Total Bill (w/ discount): " << fixed << setprecision(2) << dbill << endl
            << "Special Discounted Bill: " << fixed << setprecision(2) << dbill << endl;
    }
    else {
        tbill = iprice * nopc;
        cout << "Discount to be applied: none" << endl
            << "Discounted price: " << fixed << setprecision(2) << iprice << endl
            << endl
            << "Total Bill (w/o discount): " << fixed << setprecision(2) << tbill << endl
            << "Total Bill (w/ discount): " << fixed << setprecision(2) << tbill << endl
            << "Special Discounted Bill: " << fixed << setprecision(2) << tbill << endl;
    }

}
