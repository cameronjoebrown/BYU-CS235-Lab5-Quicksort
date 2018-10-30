//
//  QS.h
//  Lab 5
//
//  Created by Cam on 10/26/18.
//  Copyright © 2018 Cameron Brown. All rights reserved.
//

#ifndef QS_h
#define QS_h

#include <stdio.h>
#include "QSInterface.h"
#include <string>

using namespace std;

class QS : QSInterface {
public:
    QS();
    ~QS();
    void sortAll();
    int medianOfThree(int left, int right);
    int partition(int left, int right, int pivotIndex);
    string getArray() const;
    int getSize() const;
    bool addToArray(int value);
    bool createArray(int capacity);
    void clear();
    
protected:
    int *newArray;
    int currentIndex = 0;
    int arraySize = 0;

};

#endif /* QS_h */
