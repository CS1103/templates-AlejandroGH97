//
// Created by alejandro on 5/17/19.
//
#include <iostream>
#ifndef TEMPLATES_ALEJANDROGH97_QUICKSORT_H
#define TEMPLATES_ALEJANDROGH97_QUICKSORT_H




template <typename O>
void swap(O &first, O &second){

    O temp = first;
    first = second;
    second = temp;

}

template <template<typename, typename...>class Container, typename O>
void swap(Container<O> &arr, int first, int second){

    O temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;

}


template<template<typename , typename...>class Container, typename O>
int partition(Container<O> &arr, int lo, int hi){

    O pivot = arr[hi];
    int smaller = lo-1;

    for(int index = lo; index <= hi-1; index++){
        if(arr[index]<= pivot){
            smaller++;
            swap(arr,smaller,index);
        }
    }
    swap(arr,(smaller+1),hi);

    return (smaller+1);

}




template<template<typename , typename...>class Container, typename O>
void quicksort(Container<O> &arr,int lo, int hi){
    if(lo<hi){

        int pi = partition(arr, 0,hi);

        quicksort(arr,lo,pi-1);
        quicksort(arr,pi+1,hi);

    }
}





template<typename O>
int partition(O* arr, int lo, int hi){

    O pivot = arr[hi];
    int smaller = lo-1;

    for(int index = lo; index <= hi-1; index++){
        if(arr[index]<= pivot){
            smaller++;
            swap(arr[smaller],arr[index]);
        }
    }
    swap(arr[smaller+1],arr[hi]);

    return (smaller+1);

}



template <typename O>
void quicksort(O* arr,int lo, int hi){

    if(lo<hi){
        int pi = partition(arr, 0,hi);

        quicksort(arr,lo,pi-1);
        quicksort(arr,pi+1,hi);
    }
}
#endif //TEMPLATES_ALEJANDROGH97_QUICKSORT_H
