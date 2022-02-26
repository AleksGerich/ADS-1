// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    bool flag = true;
    for (int i = 2; i < value; i++){
        if (value % i == 0){
            flag = false;
            break;
        }
    }
    return flag;
}

uint64_t nPrime(uint64_t n) {
    uint64_t a = 0, chis = 0;
    for (uint64_t i = 2; i < 100000; i++) {
        int flag = 1;
        for (uint64_t j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            a++;
            chis = i;
        }
        if (a == n) {
            break;
        }
    }
    return chis;
}

uint64_t nextPrime(uint64_t value) {
    bool flag = 1;
    uint64_t chis;
    for (uint64_t i = value + 1; i < 100000; i++) {
        for (uint64_t j = 2; j < i; j++) {
            if (i % j == 0){
                flag = 0;
                break;
            }
        }
        if (flag  == 1) {
            chis = i;
            break;
        }
        flag = 1;
    }
    return chis;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    bool flag = 1;
    for (uint64_t i = 2; i < hbound; i++) {
        for (uint64_t j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            sum += i;
        }
        flag = 1;
    }
    return sum;
}
