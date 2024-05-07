far = input("Enter the fahrenheit temperature to convert: ")

print(type(far))

try:
    far_float = float(far)
except ValueError:
    print(f'Error: Make sure you enter a number. Your input: {far}')
    exit(-1)

cel = ( far_float - 32 ) * 5.0/9.0

print(f"{far_float:.1f} degrees fahrenheit is {cel:.1f} degrees celcius")
