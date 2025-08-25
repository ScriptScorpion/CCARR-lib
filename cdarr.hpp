/*
     NOTICE:
          Library for dynamic arrays not fully done and tested, use it on your own risk
*/
#pragma once

#include <iostream> // for output
#include <algorithm> // for std::copy

template <typename T>
inline void clear_d(T *arr) {
    for (int i = 0; arr[i] != '\0'; ++i) {
        arr[i] = (char)0;
    }
}


inline void push_back_d(char *arr, char what_push) {
     // (sizeof(arr) / sizeof(*arr)) - can do same as S
     int real_size = 0;
     
     for (int j = 0; (unsigned int)arr[j] != '\0'; ++j) {
          if ((unsigned int)arr[j] != 0) {
               real_size++;
          } 
     }
     char new_arr[real_size + 1]{};
     int counter = real_size;

     for (int i = 0; i < (real_size + 1); ++i) {
          new_arr[i] = arr[i];
     }

     while ((unsigned int)new_arr[counter - 1] == 0) {
          --counter;
     }

     new_arr[real_size] = what_push;
     new_arr[real_size + 1] = '\0';
     clear_d(arr);
     std::copy(new_arr, new_arr + (real_size + 1), arr); // NOTICE THIS OPERATION IS FOR ARRAY THAT ARE HAVE ENOUGH SPACE FOR EXTRA VALUES
}
