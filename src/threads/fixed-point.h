#ifndef THREAD_FIXED_POINT_H
#define THREAD_FIXED_POINT_H

typedef int real;

real convert_int_to_real(int number);
int real_truncate(real number);
int real_round(real number);
real real_add(real x,real y);
real real_subtract(real x,real y);
real real_add_real_and_int(real x,int n);
real real_subtract_int_from_real(real x,int n);
real real_multiply(real x,real y);
real real_multiply_real_by_int(real x,int n);
real real_divide(real x, real y);
real real_divide_real_by_int(real x,int n);

#endif // threads/fixed_point.h
