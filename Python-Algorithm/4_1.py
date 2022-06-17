n = int(input())

data = input().split()

x, y = 1, 1

move_x = [0, 0, -1, 1]
move_y = [-1, 1, 0, 0]
move_type = ['L', 'R', 'U', 'D']

for i in data:
    for j in range(len(move_type)):
        if(i == move_type[j]):
            tmp_x = x + move_x[j]
            tmp_y = y + move_y[j]
            
            if(tmp_x < 1 or tmp_x > n or tmp_y < 1 or tmp_y > n):
                continue

            x = tmp_x
            y = tmp_y
        
    
print(x, y)