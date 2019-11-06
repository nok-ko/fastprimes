import cython_primes, sys
# does *not* exit gracefully
start = int(sys.argv[1])
stop = int(sys.argv[2]) + 1
v = len(sys.argv) > 3  # any third argument means we're going verbose

last = -1
for count in range(start, stop, start):
    last = cython_primes.genprime(count, last)
    if v:
        print(f'Found {count} primes (last was {last})')