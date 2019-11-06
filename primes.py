#!/usr/bin/env python

import time
import sys

from math import sqrt


def isprime(x):
	if x < 2:
		return False
	if x == 2:
		return True
	if x % 2 == 0:
		return False
	if x < 9:
		return True
	if (x + 1) % 6 != 0:
		if (x - 1) % 6 != 0:
			return False
	lim = sqrt(x) + 1
	for y in range(3, int(lim), 2):
		if x % y == 0:
			return False
	return True


def genprime(stop):
	count = 0
	current = 1
	while count < stop:
		if isprime(current):
			count += 1
		current += 1
	return current - 1


def main():
	ind = 1
	# if sys.argv[1] == '-p':
	# 	ind = ind + 1
	# 	import psyco
	# 	psyco.full()
	try:
		start = int(sys.argv[ind])
		stop = int(sys.argv[ind + 1]) + 1
	except IndexError:
		quit()
	for count in range(start, stop, start):
		begin = time.clock()
		last = genprime(count)
		end = time.clock()
		duration = end - begin
		print(f'Found {count} primes in {duration} seconds (last was {last})')


if __name__ == main():
	main()
