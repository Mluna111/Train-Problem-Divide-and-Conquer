#include <vector>
#include <iostream>
//#include <utility>
#include "TrainProblem.h"
#include <string>

using namespace std;

int main() {
    int carCount;
    int trackCount;


    cout << "Enter number of cars: ";
    cin >> carCount;

    cout << "Enter number of tracks: ";
    cin >> trackCount;

   vector<int> permutation1(carCount);
    int tmp;
    cout << "Enter train order: ";

    for (int i = 0; i < carCount; i++) {
        cin >> tmp;
        permutation1[i] = tmp;
    }

    TrainProblem test1(carCount, trackCount, permutation1);
    test1.solution();

    /*
    cout << endl << "EXTRA TESTS\n";

    vector<int> permutationO{ 3, 6, 9, 2, 4, 7, 1, 8, 5 };

    TrainProblem testO(9, trackCount, permutationO);
    testO.solution();

    cout << endl;

    vector<int> permutation2{ 5, 6, 7, 4, 3, 10, 9, 8, 1, 2 };

    TrainProblem test2(10, trackCount, permutation2);
    test2.solution();

    cout << endl;

    vector<int> permutation3{ 10, 1, 13, 2, 14, 12, 5, 11, 9, 8, 7, 15, 6, 4, 3 };

    TrainProblem test3(15, trackCount, permutation3);
    test3.solution();
    cout << endl;


    vector<int> permutation4{ 3, 17, 15, 8, 11, 20, 1, 5, 18, 10, 12, 6, 16, 14, 19, 9, 13, 4, 7, 2 };

    TrainProblem test4(20, 8, permutation4);
    test4.solution();
    cout << endl;


    vector<int> permutation5{ 9, 13, 15, 5, 17, 20, 1, 3, 18, 2, 12, 11, 6, 16, 14, 19, 4, 7, 10, 8 };

    TrainProblem test5(20, 8, permutation5);
    test5.solution();
    cout << endl;


    vector<int> permutation6{ 12, 1, 6, 27, 24, 22, 28, 10, 25, 26, 2, 30, 18, 13, 14, 19, 21, 11, 16, 17, 20, 9, 15, 8, 7, 23, 5, 3, 4, 29 };

    TrainProblem test6(30, 10, permutation6);
    test6.solution();
    cout << endl;


    vector<int> permutation7{ 3, 27, 15, 21, 25, 18, 30, 2, 7, 28, 24, 16, 20, 5, 11, 26, 1, 12, 29, 22, 13, 10, 9, 14, 8, 6, 17, 4, 19, 23 };

    TrainProblem test7(30, 10, permutation7);
    test7.solution();
    cout << endl;
    */

}