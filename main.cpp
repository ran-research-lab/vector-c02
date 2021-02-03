#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() 
#include "catch_amalgamated.hpp"
#include <vector>
#include <iostream>
using namespace std;

bool equalWOZeroes_v01( vector<int> &A, vector<int> &B ) {
    return false;
}



bool equalWOZeroes_v02( const vector<int> &A, const vector<int> &B ) {
    return false;
}


TEST_CASE( "Factorials are computed", "[factorial]" ) {
	vector<int> A {10,20,0,30,40,0,0};
	vector<int> B {10,20,30,0,40};
	vector<int> C {0,0,0,0,10,20,30,40};
	vector<int> D {0,0,0,0,20,10,30,40};
	vector<int> E {0,0,0,0,0};
	vector<int> F {0,0,0,0,0};


//    CHECK( equalWOZeroes_v02(A,B) );
//    CHECK( equalWOZeroes_v02(A,C) );
//    CHECK( equalWOZeroes_v02(A,D) == false );
//    CHECK( equalWOZeroes_v02(D,D)  );
//    CHECK( equalWOZeroes_v02(E,F)  );

//    CHECK( equalWOZeroes_v01(A,B) );
//    CHECK( equalWOZeroes_v01(A,C) );
//    CHECK( equalWOZeroes_v01(A,D) == false );
//    CHECK( equalWOZeroes_v01(D,D)  );
//    CHECK( equalWOZeroes_v01(E,F)  );

}
