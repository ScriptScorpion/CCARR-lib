#pragma once
#include <algorithm> // for std::copy

template <typename T>
inline void clear_d(T *arr) {
    for (int i = 0; arr[i] != '\0'; ++i) {
        arr[i] = (char)0;
    }
}


inline void push_back_d(char *arr, const char what_push) {
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

inline void push_front_d(char *arr, const char what_push) {
     // (sizeof(arr) / sizeof(*arr)) - can do same as S
     int real_size = 0;
     for (int j = 0; (unsigned int)arr[j] != '\0'; ++j) {
          if ((unsigned int)arr[j] != 0) {
               real_size++;
          }
     }
     char new_arr[real_size + 1]{}; // 1 - cuz new null terminator(new terminator gets replaced with character, and we put null terminator at the end)
     int count = real_size - 1; // for counting last values of array, -1 because arrays starts with 0
     
     for (int i = real_size; i > 0; --i) {
          new_arr[i] = arr[count];
          count--;
     }
     new_arr[0] = what_push;
     new_arr[real_size + 1] = '\0';
     clear_d(arr);
     std::copy(new_arr, new_arr + (real_size + 1), arr); // NOTICE THIS OPERATION IS FOR ARRAY THAT ARE HAVE ENOUGH SPACE FOR EXTRA VALUES
}
