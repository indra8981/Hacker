import io, sys, atexit, os
import math as ma
from sys import exit
from decimal import Decimal as dec
from itertools import permutations
from itertools import combinations


def li ():
	return list (map (int, sys.stdin.readline ().split ()))


def num ():
	return map (int, sys.stdin.readline ().split ())


def nu ():
	return int (input ())


def find_gcd ( x, y ):
	while (y):
		x, y = y, x % y
	return x


def lcm ( x, y ):
	gg = find_gcd (x, y)
	return (x * y // gg)


mm = 1000000007


def solve ():
	t = nu()
	for tt in range (t):
		n=nu()
		den=10
		num=pow(6,n+1)-6
		op=find_gcd(den,num)
		num//=op
		den//=op
		print(num+den)




if __name__ == "__main__":
	solve ()
