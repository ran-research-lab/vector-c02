#define CATCH_CONFIG_MAIN
#include <vector>
#include <iostream>
using namespace std;

// Variables and macros for assertions, DO NOT CHANGE ****
int totalAssertions = 0;
int passedAssertions  = 0;
#define expect( chk )  \
    totalAssertions++; \
    if (!(chk)) \
        printf("\x1B[31mAssertion (%s) failed %s at line %d\033[0m\t\t\n", #chk, __FILE__,__LINE__); \
    else { \
        printf("\x1B[32mPassed line %d: %s\033[0m\t\t\n", __LINE__, #chk); \
        passedAssertions++; \
    }
#define assertionReport() { \
     printf("==========================================\n"); \
     printf("Passed %d of %d assertions\n",passedAssertions,totalAssertions); \
     printf("\n"); \
    }
//*******************************************************


// Esta es la versión donde la función puede modificar los vectores.
bool equalWOZeroes_v01( vector<int> &A, vector<int> &B ) {
    return false;
}


// Esta es la versión donde los vectores NO se pueden modificar
bool equalWOZeroes_v02( const vector<int> &A, const vector<int> &B ) {
    return false;
}


int main() {
	vector<int> A {10,20,0,30,40,0,0};
	vector<int> B {10,20,30,0,40};
	vector<int> C {0,0,0,0,10,20,30,40};
	vector<int> D {0,0,0,0,20,10,30,40};
	vector<int> E {0,0,0,0,0};
	vector<int> F {0,0,0,0,0};

//    Descomenta estas pruebas cuando implementes la
//    segunda version

//    expect( equalWOZeroes_v02(A,B) );
//    expect( equalWOZeroes_v02(A,C) );
//    expect( equalWOZeroes_v02(A,D) == false );
//    expect( equalWOZeroes_v02(D,D)  );
//    expect( equalWOZeroes_v02(E,F)  );


//    Descomenta estas pruebas cuando implementes la
//    primera version

//    expect( equalWOZeroes_v01(A,B) );
//    expect( equalWOZeroes_v01(A,C) );
//    expect( equalWOZeroes_v01(A,D) == false );
//    expect( equalWOZeroes_v01(D,D)  );
//    expect( equalWOZeroes_v01(E,F)  );

}
