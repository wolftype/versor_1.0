package.path = "../tab/?.lua;" .. package.path

require "grammar"


local c = "Rot * Vec * !Rot"

ctPrint( parse(c) )