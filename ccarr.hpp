#pragma once
#include <iostream>
#include <string>
#include <algorithm>

template <size_t S, typename T>
inline void clear(T (&arr)[S]) {
    for (auto &x : arr) { // auto and not T because in strings can be error
        x = (char)0;
    }
}


template <size_t S>
inline void push_front(char (&arr)[S], char what_push) {
    // (sizeof(arr) / sizeof(*arr)) - can do same as S
    char new_arr[S + 1]{}; // 1 - cuz new null terminator(new terminator gets replaced with character, and we put null terminator at the end)
    int count = S - 1; // for counting last values of array, -1 because arrays starts with 0
    int real_size = 0;

    for (int j = 0; j < (int)S; ++j) {
        if ((unsigned int)arr[j] != 0) {
            real_size++;
        }
    }

    if (real_size + 1 > (int)S) { // 1 is length of what_push
        std::cerr << "Not enough space in arrray" << std::endl;
        std::cerr.flush();
        return;
    }
    for (int i = S; i > 0; --i) {
        new_arr[i] = arr[count];
        count--;
    }
    new_arr[0] = what_push;
    new_arr[S + 1] = '\0';
    clear(arr);
    std::copy(new_arr, new_arr + (S + 1), arr); // NOTICE THIS OPERATION IS FOR ARRAY THAT ARE HAVE ENOUGH SPACE FOR EXTRA VALUES
}

template <size_t S>
inline void push_front(char (&arr)[S], std::string what_push) {
    // (sizeof(arr) / sizeof(*arr)) - can do same as S
    char new_arr[S]{}; 
    int cursor = 0; // for counting position needed to input
    int real_size = 0;

    for (int j = 0; j < (int)S; ++j) {
        if ((unsigned int)arr[j] != 0) {
            real_size++;
        }
    }

    if ((real_size + 1) + what_push.length() > (int)S) {
        std::cerr << "Not enough space in arrray" << std::endl;
        std::cerr.flush();
        return;
    }

    for (int i = 0, l = what_push.length(); i < (int)S; ++i, ++l) {
        new_arr[l] = arr[i];
    }

    for (char x : what_push) {
        new_arr[cursor] = x;
        cursor++;
    }
    new_arr[S] = '\0';
    clear(arr);
    std::copy(new_arr, new_arr + S, arr); // NOTICE THIS OPERATION IS FOR ARRAY THAT ARE HAVE ENOUGH SPACE FOR EXTRA VALUES
}

template <size_t S>
inline void push_back(char (&arr)[S], std::string what_push) {
    // (sizeof(arr) / sizeof(*arr)) - can do same as S
    int cursor = S; // for counting position needed to input
    char new_arr[S]{}; 
    int real_size = 0;

    for (int j = 0; j < (int)S; ++j) {
        if ((unsigned int)arr[j] != 0) {
            real_size++;
        }
    }

    if ((real_size + 1) + what_push.length() > (int)S) {
        std::cerr << "Not enough space in arrray" << std::endl;
        std::cerr.flush();
        return;
    }

    for (int i = 0; i < (int)S; ++i) {
        new_arr[i] = arr[i];
    }
    
    while ((unsigned int)new_arr[cursor - 1] == 0) {
        --cursor;
    }
    for (char x : what_push) {
        new_arr[cursor] = x;
        cursor++;
    }
    new_arr[S] = '\0';
    clear(arr);
    std::copy(new_arr, new_arr + S, arr); // NOTICE THIS OPERATION IS FOR ARRAY THAT ARE HAVE ENOUGH SPACE FOR EXTRA VALUES
}

template <size_t S>
inline void push_back(char (&arr)[S], char what_push) {
    // (sizeof(arr) / sizeof(*arr)) - can do same as S
    int cursor = S;
    int real_size = 0;
    char new_arr[S + 1]{}; // 1 - cuz new null terminator(new terminator gets replaced with character, and we put null terminator at the end)
    
    for (int j = 0; j < (int)S; ++j) {
        if ((unsigned int)arr[j] != 0) {
            real_size++;
        } 
    }

    if (real_size + 1 > (int)S) { // 1 is length of what_push
        std::cerr << "Not enough space in arrray" << std::endl;
        std::cerr.flush();
        return;
    }

    for (int i = 0; i < (int)S; ++i) {
        new_arr[i] = arr[i];
    }

    while ((unsigned int)new_arr[cursor - 1] == 0) {
        --cursor;
    }

    new_arr[cursor] = what_push;
    new_arr[cursor + 1] = '\0';
    clear(arr);
    std::copy(new_arr, new_arr + (S + 1), arr); // NOTICE THIS OPERATION IS FOR ARRAY THAT ARE HAVE ENOUGH SPACE FOR EXTRA VALUES
}
