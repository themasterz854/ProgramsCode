import argparse
parser = argparse.ArgumentParser()
parser.add_argument("type", type = str)
parser.add_argument("payment", type = float)
parser.add_argument("periods", type = int)    
parser.add_argument("principal", type = int)
parser.add_argument("interest", type = float)
args = parser.parse_args()    