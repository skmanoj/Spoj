from math import ceil
 
for i in xrange(0, int(raw_input())):
    n = int(raw_input())
    degrees = []
    for i in xrange(0, n):
        degrees.append(float(raw_input().split()[1]))
 
    degrees.sort()
    degrees.append(degrees[0] + 360)
    maxDegrees = max([(degrees[i] - degrees[i-1]) for i in xrange(1, n + 1)])
    print "%i" % (ceil ((360 - maxDegrees) * 12))


