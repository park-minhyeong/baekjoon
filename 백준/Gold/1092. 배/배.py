import sys
input = sys.stdin.readline

# Get the number of cranes
n = int(input())
# Get the weight capacity of each crane
cranes = list(map(int, input().split()))
# Get the number of boxes
m = int(input())
# Get the weight of each box
boxes = list(map(int, input().split()))

# Sort the cranes and boxes in descending order
cranes.sort(reverse=True)
boxes.sort(reverse=True)

time = 0
# If the heaviest crane cannot lift the heaviest box, it is impossible
if cranes[0] < boxes[0]:
    print(-1)
    sys.exit()

# Continue until all boxes are lifted
while len(boxes) > 0:
    for crane in cranes:
        for box in boxes:
            # If the crane can lift the box, remove it from the list
            if crane >= box:
                boxes.remove(box)
                break
    
    time += 1

# Print the minimum time required to lift all boxes
print(time)
