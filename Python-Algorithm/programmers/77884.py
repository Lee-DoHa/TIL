def solution(left, right):
    answer = 0
    for num in range(left, right+1):
        tmp = num ** 0.5
        if tmp == int(tmp):
            answer -= num
            continue
        answer += num
    return answer