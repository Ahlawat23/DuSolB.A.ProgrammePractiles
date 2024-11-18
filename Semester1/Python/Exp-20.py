#Program to find sum of the series
#   1-2+3-4+5-6+7-8+…..+n

# Input: the value of n
n = int(input("Enter the value of n: "))

# Initialize the sum to 0
sum_of_series = 0

# Loop through the numbers from 1 to n
for i in range(1, n + 1):
    # Add the odd-indexed numbers and subtract the even-indexed numbers
    if i % 2 == 0:
        sum_of_series -= i
    else:
        sum_of_series += i

# Output the result
print(f"The sum of the series 1 - 2 + 3 - 4 + ... ± {n} is: {sum_of_series}")
