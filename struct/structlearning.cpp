//
// Created by Admin on 2021/5/10.
//

#include "structlearning.h"
#include "cstring"
#include "iostream"

// 结构体声明在函数外部称为外部声明 外部声明可以被后面的任务函数使用
// 内部声明只能被该声明所属的函数使用
struct inflatable {
    char name[20];
    float volume;
    double price;
    // 允许string对象
    std::string str;
};

union one4all {
    int int_val;
    unsigned int uint;
    long long_val;
    double double_val;
};

struct widget {
    char brand[20];
    int type;
    union id {
        long id_num;
        char id_char[20];
    } id_val;
};

using namespace std;

int main() {
//    struct perks {
//        int key_number;
//        char car[12];
//    };
//
//    perks mr_blug;
//

//    // 可以在声明结构变量时省略关键字 struct
//    struct inflatable guest = {
//            "Glorious Gloria",
//            1.88,
//            29.99
//    };
//
//    inflatable pal = {
//            .name =  "Audacious Arthur",
//            .volume = 3.12,
//            32.99
//    };
//
//    cout << "Expand your guest list with" << guest.name << " and " << pal.name << endl;
//    cout << "You can have both for $" << guest.price + pal.price << "!\n";
//
//    // struct init
//    inflatable duck{"Daphne", 0.12, 9.98};
//    return 0;

    inflatable bouquet = {
            "sunflowers",
            0.20,
            12.49
    };

    inflatable choice;

    cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;
    choice = bouquet;
    cout << "choice: " << choice.name << " for $" << choice.price << endl;

    inflatable gitfs[2] = {
            {"hello", 10, 32.1},
            {"world", 2,  5.1}
    };

    cout << gitfs[0].price << endl;

    one4all pail = {.long_val =  2};
    pail.int_val = 15;
    cout << pail.int_val << endl;
    pail.double_val = 1.38;
    cout << pail.double_val << endl;

    widget prize;

    if (prize.type == 1) {
        cin >> prize.id_val.id_num;
    } else {
        cin >> prize.id_val.id_char;
    }
}

void mail() {
    // 无法访问main函数中定义的结构体
    // perts invalid;
    // 可以访问外部声明的函数
    inflatable valid;
}