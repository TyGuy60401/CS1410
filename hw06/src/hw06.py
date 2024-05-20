from hw06_lib import *
import sys

def main(argv):
    if len(argv) > 1:
        input_str = argv[1]
    else:
        input_str = input("Enter a resistor: ")

    if len(argv) > 2:
        input_v_str = argv[2]
    else:
        input_v_str = input("Enter a voltage: ")

    res = read_resistor(input_str)
    print_resistor(res)
    value = decode_value(input_v_str)
    value_fin = i_r(res, value)
    print("I = %.2e" % value_fin)
    return

if __name__ == '__main__':
    main(sys.argv)




# Integrity Statement:
# 
# I certify that this assignment represent my own work.
# I have not used any unauthorized or unacknoledged assistance
# or sources in completing it, including free or commercial
# systems or services offered on the internet or code-generating
# systems embedded into software.


