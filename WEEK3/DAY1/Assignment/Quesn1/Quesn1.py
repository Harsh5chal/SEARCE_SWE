#Reverse an integer array
def reverseList(P,start,end):
    while start < end:
        P[start],P[end] = P[end],P[start]
        start += 1
        end -= 1
        
P = [5,8,7,6]
n = len(P)
reverseList(P,0,n-1)
print(P)