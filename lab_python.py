# def bisection_method(func,a,b,tol=1e-10,max_iter=1000):
#   if func(a)*func(b)>=0:
#     raise ValueError("Function has the same sign at both endpoints")
#   iter_count=0
#   while (b-a)/2.0>tol and iter_count<max_iter:
#     c=(a+b)/2.0
#     if func(c)==0.0:
#       return c,iter_count
#     elif func(c)*func(a)<0:
#      b=c
#     else:
#       a=c
#     iter_count+=1 

#   root=(a+b)/2.0
#   return root,iter_count

# def quadratic_function(x):
#    return x**3-2*x-5
# initial_interval=(2,3)
# root,iterations=bisection_method(quadratic_function,*initial_interval) 
# if root is not None:
#    print('Root found at x=',root,'after ',iterations,'iterations. ')
# else:
#     print('Bisection method did not converge within the specificed tolerance')
def newton_raphson(func,func_derivative,x0,tol=1e-16,max_iter=100):
  x=x0
  iter_count=0

  while iter_count<max_iter:
    f_x=func(x)
    f_prime_x=func_derivative(x)
    if abs(f_x)<tol:
      return x,iter_count

    if f_prime_x==0:
      return None,iter_count

    x=x-f_x/f_prime_x
    iter_count+=1
  
def cubic_function(x):
  return x**3-4*x**2-x+4
def cubic_function_derivative(x):
  return 3*x**2-8*x-1

initial_guess=3.0
root,iterations=newton_raphson(cubic_function,cubic_function_derivative,initial_guess)
if root is not None:
  print('Root found at x=',root,'after: ',iterations,'iterations')
else:
  print('Newton-Raphson method didnot find')