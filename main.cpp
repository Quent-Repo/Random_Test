#include <iostream>
#include <vector>
#include <math.h>

//ex2
bool is_palindrome(std::string text){
    std::string hold;
    for (int i = text.size()-1; 0 <= i; i--){
        hold += text[i];
    }
    if(text == hold){
        return true;
        //std::cout << "Same";
    }
    else{
        //std::cout << "No";
        return false;
    }
}

//ex 1
std::string needs_water(int days, bool is_succulent){
    if(days> 3 && is_succulent == false){return "Time to water the plant.";}
    else if(days < 12 && is_succulent == true){return "Don't waterthe plant!";}
    else if(days >= 13 && is_succulent == true){return"Go ahead and give the plant a little water.";}
    else{return "Don't water the plant!";}
}

//ex 3
std::vector<int> first_three_multiples(int num){
    std::vector<int> r ={num, num *2, num * 3};
    return r;
}

//ex 4
int tenth_power(int num){
    return pow(num, 10);

}

//ex 5
double average(double num1,double num2){
    return (num1 + num2) / 2;
}

//ex 6
std::string introduction(std::string first_name, std::string last_name){
    std::cout << last_name<< ", " << first_name << " " << last_name;

}

int main() {
    //ex2
    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

    //ex 1
    std::cout << needs_water(10, false) << "\n";

    //ex 3
    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }

    //ex 4
    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";

    //ex 5
    std::cout << average(42.0, 24.0) << "\n";
    std::cout << average(1.0, 2.0) << "\n";

    //ex 6
    introduction("Beyonce", "Knowles");

}