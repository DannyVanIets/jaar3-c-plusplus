// Week1Les1.h - Contains all the functions made in this lesson.
#pragma once

#ifdef WEEK1LES1_EXPORTS
	#define WEEK1LES1_API __declspec(dllexport)
#else
	#define WEEK1LES1_API __declspec(dllimport)
#endif

extern "C" WEEK1LES1_API int exercise1(int a, int b);

extern "C" WEEK1LES1_API void exercise2(int a);

extern "C" WEEK1LES1_API int exercise3(int base, int exponent);

extern "C" WEEK1LES1_API bool exercise4(int n);

extern "C" WEEK1LES1_API int exercise5(int array_of_numbers[], int value);

extern "C" WEEK1LES1_API void exercise6_print_array(int numbers[], int size);

extern "C" WEEK1LES1_API void exercise6(int numbers[], int size);

extern "C" WEEK1LES1_API void exercise7(int a, int b);

extern "C" WEEK1LES1_API void exercise8(int a, int b);