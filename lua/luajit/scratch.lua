local F = require "funcs"
print(arg[1], arg[2], arg[3])
print ( F.getProductType(_G[arg[1]],_G[arg[2]],arg[3]).id )