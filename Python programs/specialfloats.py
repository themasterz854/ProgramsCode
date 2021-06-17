inf_var = float("-INFINITY    ")  # inf
#NaN not a number
'''
Although, the constants NaN and None sound similar, there is a difference between them. 
None is a singleton object that denotes no value at all. None evaluates to False in boolean expressions, while NaN doesn't. 
As opposed to None, NaN is different in every given case, it never equals to itself: you should consider NaN != NaN true.

'''
import math
 
 
inf = math.inf   # an alternative way
nan = math.nan   # to get the constants
 
math.isnan(nan)  # True
math.isnan(inf)  # False
math.isnan(0.0)  # False

math.isinf(inf)   # True
math.isinf(-inf)  # True
math.isinf(3.14)  # False

math.isfinite(7.54)  # True
math.isfinite(inf)   # False
math.isfinite(nan)   # False