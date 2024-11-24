# Program to generate the Fibonacci sequence up to a given number of terms.

def fib(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
        
    seq = [0, 1]
    for i in range(2, n):
        next_term = seq[-1] + seq[-2]
        seq.append(next_term)
    
    return seq

num_terms = int(input("Enter the number of terms for the Fibonacci sequence: "))

if num_terms <= 0:
    print("Please enter a positive integer.")
else:
    fibonacci_sequence = fib(num_terms)
    print(f"Fibonacci sequence ({num_terms} terms): {fibonacci_sequence}")