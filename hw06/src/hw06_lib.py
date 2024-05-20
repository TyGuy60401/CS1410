from scanf import scanf

SUFFIXES = {
    't':   12,
    'g':   9,
    'x':   6,
    'meg': 6,
    'k':   3,
    'm':  -3,
    'u':  -6,
    'n':  -9,
    'p':  -12,
    'f':  -15,
    'a':  -18,
}

class Resistor:
    def __init__(self, name, node_p, node_n, res_value):
        self.name = name
        self.node_p = node_p
        self.node_n = node_n
        self.res_value = res_value


def print_resistor(Res):
    print(f"{Res.name}\t{Res.node_p}\t{Res.node_n}\t{Res.res_value:.2e}")

def i_r(Res, v):
    i = v / Res.res_value
    return i

def decode_value(inStr):
    try:
        return float(inStr)
    except:
        pass
    val_tup = scanf("%f%s", inStr)
    if val_tup == None:
        raise ValueError("Invalid input value")

    suffix = val_tup[1].lower()

    if suffix in SUFFIXES.keys():
        mult = SUFFIXES[suffix]
    else:
        raise ValueError("Invalid suffix")

    value = val_tup[0]
    
    value_fin = value * 10 ** mult
    return value_fin

def read_resistor(inStr):
    res_tup = scanf("%s %s %s %s",inStr)
    if res_tup == None:
        raise ValueError("Bad input string")
    elif 'r' not in res_tup[0].lower():
        raise ValueError("Didn't start with R")
    val = decode_value(res_tup[3])
    if val < 0:
        raise ValueError("Negative Resistor Value")
    res = Resistor(res_tup[0], res_tup[1], res_tup[2], val)
    return res
