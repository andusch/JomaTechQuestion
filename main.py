import random, math

def estimate_pi(n):
    inside_circle = 0
    inside_square = 0
    i = 0
    while i < n:
        x = random.uniform(0,1)
        y = random.uniform(0,1)
        distance = x**2 + y**2
        if distance <=1:
            inside_circle += 1
        inside_square += 1
        i+=1
    return 4 * inside_circle/inside_square

if __name__ == "__main__":
    number = input()
    number = int(number)
    pi = estimate_pi(number)
    print(pi)
    print("error: " + str(abs(math.pi - pi)))