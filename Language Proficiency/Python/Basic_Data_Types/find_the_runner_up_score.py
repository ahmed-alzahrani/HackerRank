if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())

    winner = -101
    runnerUp = -101

    for i in arr:
        if (i > runnerUp and i != winner):
            if (i > winner):
                runnerUp = winner
                winner = i
            else:
                runnerUp = i

    print(runnerUp)
