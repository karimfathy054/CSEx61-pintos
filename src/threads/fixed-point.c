#include "threads/fixed-point.h"
#include <stdint.h>

#define F 16384

/*converts the integer NUMBER to the type of real*/
real convert_int_to_real(int number){
    return number*F;
}
/*truncates the real NUMBER to the nearest decimal*/
int real_truncate(real number){
    return number/F;
}
/*rounds the real NUMBER to the nearest decimal*/
int real_round(real number){
    if(number >= 0){
        return((number+F/2)/F);
    }else{
        return((number-F/2)/F);
    }
}
/*add two real numbers X and Y*/
real real_add(real x,real y){
    return x+y;
}
/*subtracts the real number Y from the real number X*/
real real_subtract(real x,real y){
    return x-y;
}
/*add the real number X and the integer number N*/
real real_add_real_and_int(real x,int n){
    return x+ (n*F);
}
/*subtract the integer number N from the real number X*/
real real_subtract_int_from_real(real x,int n){
    return x- (n*F);
}
/*multiply two real numbers X and Y*/
real real_multiply(real x,real y){
    return ((int64_t)x)*y/F;
}
/*multiply real number X and integer number N*/
real real_multiply_real_by_int(real x,int n){
    return x*n;
}
/*divide the real number X by the real number Y*/
real real_divide(real x, real y){
    return ((int64_t)x)*F/y;
}
/*divide the real number X by the integer N*/
real real_divide_real_by_int(real x,int n){
    return x/n;
}

