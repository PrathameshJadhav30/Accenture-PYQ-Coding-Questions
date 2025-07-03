import cmath

# Input coefficients
a = float(input("Enter coefficient a: "))
b = float(input("Enter coefficient b: "))
c = float(input("Enter coefficient c: "))

# Calculate discriminant
discriminant = b**2 - 4*a*c

# Using complex math for general case (handles real + complex)
root1 = (-b + cmath.sqrt(discriminant)) / (2 * a)
root2 = (-b - cmath.sqrt(discriminant)) / (2 * a)

# Output roots
if discriminant > 0:
    print("Roots are real and different.")
elif discriminant == 0:
    print("Roots are real and same.")
else:
    print("Roots are complex and imaginary.")

print("Root 1 =", root1)
print("Root 2 =", root2)