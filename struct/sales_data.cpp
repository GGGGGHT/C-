#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
   unsigned units_sold ;
    double revenue;
};

int main() {
    Sales_data s1,s2;

    double price = 0;
    std::cin >> s1.bookNo >> s1.units_sold >> price;
    s1.revenue = s1.units_sold * price;
    std::cout << s1.revenue << std::endl;
    std::cin >> s2.bookNo >> s2.units_sold >> price;
    s2.revenue = s2.units_sold * price;

    if(s1.bookNo == s2.bookNo) {
        unsigned totalCnt = s1.units_sold + s2.units_sold;
    }
}
