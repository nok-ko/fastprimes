#!/usr/bin/env python
import sys
from math import sqrt


# noinspection DuplicatedCode
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


def genprime(n, m):
    """
    Given N, returns the Nth prime.

    Optionally called with M, the (N-1)th prime.
    """
    if m != -1:
        count = n - 1
        current = m + 1
    else:
        count = 0
        current = 1

    while count < n:  # count up to n-1
        if isprime(current):  # if we encounter a prime
            count += 1  # increment the count
        current += 1  # test the next number
    return current - 1


# main():
# does *not* exit gracefully
start = int(sys.argv[1])
stop = int(sys.argv[2]) + 1
v = len(sys.argv) > 3  # any third argument means we're going verbose

last = -1
for count in range(start, stop, start):
    last = genprime(count, last)
    if v:
        print(f'Found {count} primes (last was {last})')
