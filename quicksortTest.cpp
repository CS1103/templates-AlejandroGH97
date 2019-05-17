//
// Created by alejandro on 5/17/19.
//
#include "catch2.h"
#include "quicksort.h"

TEST_CASE("Quicksort: "){
    int test[] = {10,5,17,31,4,8};
    int n =sizeof(test)/ sizeof(test[0]);
    quicksort(test,0,n-1);
    REQUIRE(test[0]==4);
    REQUIRE(test[1]==5);
    REQUIRE(test[2]==8);
    REQUIRE(test[3]==10);
    REQUIRE(test[4]==17);
    REQUIRE(test[5]==31);

    int test2[] = {41,67,8,52,90,1,56};
    int n2 =sizeof(test2)/ sizeof(test2[0]);
    quicksort(test2,0,n2-1);
    REQUIRE(test2[0]==1);
    REQUIRE(test2[1]==8);
    REQUIRE(test2[2]==41);
    REQUIRE(test2[3]==52);
    REQUIRE(test2[4]==56);
    REQUIRE(test2[5]==67);
    REQUIRE(test2[6]==90);

}
