#pragma once

#include <cstdint>
#include <fstream>

void createBinaryFiles() {
    int16_t temp1;
    int32_t temp2;

    const char* fileName1 = "first.dat";
    const char* fileName2 = "second.dat";
    const char* fileName3 = "third.dat";

    std::ofstream f("set.dat", std::ios::binary);
    temp1 = 3;
    f.write((const char*)&temp1, sizeof(int16_t));
    temp1 = 4;
    f.write((const char*)&temp1, sizeof(int16_t));
    f.write(fileName1, strlen(fileName1) + 1);
    f.write(fileName2, strlen(fileName2) + 1);
    f.write(fileName3, strlen(fileName3) + 1);
    f.close();

    std::ofstream f1("first.dat", std::ios::binary);
    temp1 = 7;
    f1.write((const char*)&temp1, sizeof(int16_t));
    temp1 = 0;
    f1.write((const char*)&temp1, sizeof(int16_t));
    temp2 = 1;
    f1.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 3;
    f1.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 4;
    f1.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 6;
    f1.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 2;
    f1.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 8;
    f1.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 9;
    f1.write((const char*)&temp2, sizeof(int32_t));
    f1.close();

    std::ofstream f2("second.dat", std::ios::binary);
    temp1 = 2;
    f2.write((const char*)&temp1, sizeof(int16_t));
    temp1 = 1;
    f2.write((const char*)&temp1, sizeof(int16_t));
    temp2 = 4;
    f2.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 6;
    f2.write((const char*)&temp2, sizeof(int32_t));
    f2.close();

    std::ofstream f3("third.dat", std::ios::binary);
    temp1 = 3;
    f3.write((const char*)&temp1, sizeof(int16_t));
    temp1 = 2;
    f3.write((const char*)&temp1, sizeof(int16_t));
    temp2 = 2;
    f3.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 3;
    f3.write((const char*)&temp2, sizeof(int32_t));
    temp2 = 5;
    f3.write((const char*)&temp2, sizeof(int32_t));
    f3.close();
}