//
//  main.cpp
//  base1-3
//
//  Created by suchao on 3/22/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input a & b & c\n";
    double a,b,c;
    cin >> a >> b >> c;
    cout << "b^2-4ac=" << fixed << setprecision(2) << b*b-4*a*c << endl;
    return 0;
}
