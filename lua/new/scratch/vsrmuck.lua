package.path = "../?.lua;../gen/?.lua;../vsrmodule/?.lua;".. package.path

local V = require "vsr"
local T = require "token"
local F = require "funcs"
local G = require "grammar"
local Gen = require "gen"

local c = "re( Cir cir, Gld gld ) return Cir( gld * #cir* !gld )"
-- 
local q =  Gen.func( c )
print (q.assemble)
local tc = F.versionList(Cir,"involute")
print( T.makeVType(tc, "a") )
-- print( T.makeVType( F.versionList(Gld,"reverse"), "gld" ) )