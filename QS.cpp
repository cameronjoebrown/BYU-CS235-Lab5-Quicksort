//
//  QS.cpp
//  Lab 5
//
//  Created by Cam on 10/26/18.
//  Copyright © 2018 Cameron Brown. All rights reserved.
//

#include "QS.h"

QS::QS(){
    newArray = NULL;
}
QS::~QS(){
    clear();
}
/*
 * sortAll()
 *
 * Sorts elements of the array.  After this function is called, every
 * element in the array is less than or equal its successor.
 *
 * Does nothing if the array is empty.
 */
void QS::sortAll() {
    
}

int QS::medianOfThree(int left, int right) {
    if(currentIndex == 0 || arraySize <= 0){
        return -1;
    }
    if(left >= right || left < 0 || right > currentIndex - 1){
        return -1;
    }
    int tempVal;
    int middle = (left + right) / 2;
    if(!(newArray[left] < newArray[middle])){
        tempVal = newArray[left];
        newArray[left] = newArray[middle];
        newArray[middle] = tempVal;
    }
    if(!(newArray[middle] < newArray[right])){
        tempVal = newArray[right];
        newArray[right] = newArray[middle];
        newArray[middle] = tempVal;
    }
    if(!(newArray[left] < newArray[middle])){
        tempVal = newArray[left];
        newArray[left] = newArray[middle];
        newArray[middle] = tempVal;
    }
    getArray();
    return middle;
}

/*
 * Partitions a subarray around a pivot value selected according to
 * median-of-three pivot selection.  Because there are multiple ways to partition a list,
 * we will follow the algorithm on page 611 of the course text when testing this function.
 *
 * The values which are smaller than the pivot should be placed to the left
 * of the pivot; the values which are larger than the pivot should be placed
 * to the right of the pivot.
 *
 * Returns -1 if the array is null, if either of the given integers is out of
 * bounds, or if the first integer is not less than the second integer, or if the
 * pivot is not within the sub-array designated by left and right.
 *
 * @param left
 *         the left boundary for the subarray to partition
 * @param right
 *         the right boundary for the subarray to partition
 * @param pivotIndex
 *         the index of the pivot in the subarray
 * @return
 *        the pivot's ending index after the partition completes; -1 if
 *         provided with bad input
 */
int QS::partition(int left, int right, int pivotIndex) {
    
    return 0;
}

string QS::getArray() const{
    if(currentIndex == 0 || arraySize <= 0){
        return "";
    }
    ostringstream ss;
    for(int i = 0; i < currentIndex; i++){
        if(i != 0){
            ss << ",";
        }
        ss << newArray[i];
    }
    string array = ss.str();
    return ss.str();
}


int QS::getSize() const {

    return currentIndex;
}

bool QS::addToArray(int value) {
    if(currentIndex >= arraySize){
        return false;
    }
    else {
        newArray[currentIndex] = value;
        ++currentIndex;
        return true;
    }
}

bool QS::createArray(int capacity) {
    if(arraySize > 0){
        clear();
    }
    if(capacity < 0){
        return false;
    }
    else {
        newArray = new int[capacity];
        currentIndex = 0;
        arraySize = capacity;
        return true;
    }
    
}

void QS::clear() {
    if(newArray == NULL){
        return;
    }
    else {
        delete [] newArray;
        currentIndex = 0;
        arraySize = 0;
        newArray = NULL;
    }
    
}
