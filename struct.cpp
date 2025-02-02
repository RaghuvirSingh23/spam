#include <iostream>
#include <string>

struct fib_xri_info_v1_t_ {
    int field1;
    double field2;
    char field5;
    float field6;
    long field7;
    std::string field3;
    bool field4;
    short field8;
    unsigned int field9;
    long long field10;
};

int main() {
    fib_xri_info_v1_t_ example;
    example.field1 = 1;
    example.field2 = 2.0;
    example.field3 = "example";
    example.field4 = true;
    example.field5 = 'a';
    example.field6 = 3.0f;
    example.field7 = 4L;
    example.field8 = 5;
    example.field9 = 6U;
    example.field10 = 7LL;

    std::cout << "Field1: " << example.field1 << std::endl;
    std::cout << "Field2: " << example.field2 << std::endl;
    std::cout << "Field3: " << example.field3 << std::endl;
    std::cout << "Field4: " << example.field4 << std::endl;
    std::cout << "Field5: " << example.field5 << std::endl;
    std::cout << "Field6: " << example.field6 << std::endl;
    std::cout << "Field7: " << example.field7 << std::endl;
    std::cout << "Field8: " << example.field8 << std::endl;
    std::cout << "Field9: " << example.field9 << std::endl;
    std::cout << "Field10: " << example.field10 << std::endl;

    return 0;
}