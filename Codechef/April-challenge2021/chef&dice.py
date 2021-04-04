
import math
for _ in range(int(input())):
    N = int(input())
    val = 0
    if N == 1:
        val = 20
    elif N == 2:
        val = 36
    elif N == 3:
        val = 51
    else:
        if(N%4 == 0):
            k = math.floor(N/4)
            val = 44*k+16
        elif(N%4 == 1):
            k = math.floor(N/4)
            val = 44*k+32
        elif(N%4 == 2):
            k = math.floor(N/4)
            val = 44*k+44
        else:
            k = math.floor(N/4)
            val = 44*k+55
    print(val)
