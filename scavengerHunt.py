scenarios = int(raw_input())
 
for i in xrange(0, scenarios):
    S = int(raw_input())
 
    myDict = dict()
    myRevDict = dict()
 
    for j in xrange(0, S - 1):
        fromLocation, toLocation = raw_input().split()
        myDict[fromLocation] = toLocation
        myRevDict[toLocation] = fromLocation
 
 
    # find start
    start = ""
    for key in myDict.keys():
        if key not in myRevDict:
            start = key
            break
 
    # print message
    print "Scenario #%i:" % (i + 1)
 
    # print path
    currentKey = start
    for l in xrange(0, S - 1):
        print currentKey
        currentKey = myDict[currentKey]
 
    print currentKey
    print ""


