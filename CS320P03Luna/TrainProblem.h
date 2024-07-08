

#ifndef _TRAINPROBLEM_H
#define _TRAINPROBLEM_H

#include <vector>
#include <iostream>
#include <stack>
//#include <iterator>
#include <utility>
#include "mergeSort.h"
#include <string>

class TrainProblem {

public:
    TrainProblem() {
        cout << "No solution.\n";
    }

    TrainProblem(int carNum, int trackNum, vector<int>& trackIn) {
        cars = carNum;
        tracks = trackNum;
        inputTrack = trackIn;
        outputTrack.resize(carNum);
        holdingTracks.resize(trackNum);
        possibleTracks.resize(trackNum);
        for (int i = 0; i < tracks; i++) {
            possibleTracks[i].first = 0;
            possibleTracks[i].second = i;
        }
    }

    void solution(int print = 0)
    {
        int nextOut = 1;
        string outputSolution;
        bool solutionB = 1;

        
        for (int i = 0; i < cars; i++)                                          //DEPENDENT ON # OF CARS
        {
            bool dontSkip = 1;
            //Call funtion to check if anything else can be moved to output from tracks
                //will have to adjust possible tracks if track is made smaller
            mergeSort(possibleTracks, CompareTrackIndex());
            if (inputTrack[i] == nextOut)                                       //CONDITION DEPENDENT ON # OF CARS
            {
                //cout << "Moving " << nextOut << " from input to output\n";
                outputSolution += "Move car " + to_string(nextOut) + " from input track to output track\n";
                outputTrack.push_back(inputTrack[i]);
                nextOut++;
                simplify(nextOut, outputSolution);


            }
            else
            {
                //if any are empty throw it there.(might not be needed)
                    //increase count for possibletracks
                for (int j = 0; j < tracks; j++)                                //DEPENDENT ON # OF TRACKS
                {
                    if (holdingTracks[j].empty())
                    {
                        holdingTracks[j].push(inputTrack[i]);
                        possibleTracks[j].first++;
                        //cout << "Moving " << inputTrack[i] << " from input to holding track " << j+1 << endl;
                        outputSolution += "Move car " + to_string(inputTrack[i]) + " from input track to holding track " + to_string(j + 1) + "\n";
                        j = tracks;
                        dontSkip = 0;
                    }

                }
                //find track with lowest car count and place output(current) car there if it is smaller, else try next smallest
                if (dontSkip)
                {
                    mergeSort(possibleTracks, CompareHoldingSize());
                    int trackIndex = 0;
                    dontSkip = 0;
                    for (int j = 0; j < tracks; j++)
                    {
                        trackIndex = possibleTracks[j].second;
                        if (inputTrack[i] < holdingTracks[trackIndex].top())
                        {
                            holdingTracks[trackIndex].push(inputTrack[i]);
                            possibleTracks[j].first++;
                            //cout << "Moving " << inputTrack[i] << " from input to holding track " << trackIndex+1 << endl;
                            outputSolution += "Move car " + to_string(inputTrack[i]) + " from input track to holding track " + to_string(trackIndex + 1) + "\n";
                            dontSkip = 1;
                            j = tracks;
                        }
                    }
                    if (!dontSkip)
                    {
                        cout << "No solution.\n";
                        solutionB = 0;
                        break;
                    }
                }
            }
        }
        if (solutionB) {
            cout << outputSolution;
        }
    }

    void simplify(int& nxtOut, string& output)
    {
        bool repeat = 0;
        for (int i = 0; i < tracks; i++)
        {
            if (!holdingTracks[i].empty() && nxtOut == holdingTracks[i].top())
                {
                    //cout << "Moving " << nxtOut << " from track " << i+1 <<" to output\n";
                    output += "Move car " + to_string(nxtOut) + " from holding track " + to_string(i + 1) + " to output track\n";
                    outputTrack.push_back(nxtOut);
                    holdingTracks[i].pop();
                    nxtOut++;
                    possibleTracks[i].first--;
                    repeat = 1;
                    // cout << " in simplify\n";
                    simplify(nxtOut, output);

                }
        }

        if (repeat)
        {
           // simplify(nxtOut, output);
        }
    }

    class CompareHoldingSize {
    public:
        bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) const
        {
            if (p1.first == p2.first) {
                return (p1.second < p2.second);
            }
            return (p1.first < p2.first);
        }
    };

    class CompareTrackIndex {
    public:
        bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) const
        {
            return (p1.second < p2.second);
        }
    };

private:

    int cars;
    int tracks;
    vector<int> inputTrack;
    vector<int> outputTrack;
    vector<stack<int>> holdingTracks;
    vector<pair<int, int>> possibleTracks;

};
#endif // !1
