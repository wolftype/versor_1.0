--STATICS

-------------------------------------------
-------------------------------------------
--STATICS BEGIN--
local bivstath = [[
static Biv xy;
static Biv xz;
static Biv yz;
static Biv e12(double t = 1.0);
static Biv e13(double t = 1.0);
static Biv e23(double t = 1.0);
]]

local bivstatc = [[
Biv Biv::xy = Biv(1,0,0);
Biv Biv::xz = Biv(0,1,0);
Biv Biv::yz = Biv(0,0,1);
Biv Biv::e12(double t) { return Biv(t,0,0); }
Biv Biv::e13(double t) { return Biv(0,t,0); }
Biv Biv::e23(double t) { return Biv(0,0,t); }		
]]

local vecstath = [[
static Vec x;
static Vec e1(double t = 1.0);
static Vec y;
static Vec e2(double t = 1.0);
static Vec z;
static Vec e3(double t = 1.0);
]]

local vecstatc = [[
Vec Vec::x = Vec(1,0,0);
Vec Vec::y = Vec(0,1,0);
Vec Vec::z = Vec(0,0,1);
]]

local trsstath = [[
static Trs e1(double t = 1);
static Trs e2(double t = 1);
static Trs e3(double t = 1);
static Trs x;
static Trs y;
static Trs z;
]]

local trsstatc = [[
Trs Trs::e1(double t) { return Trs(1, t/-2, 0, 0); }
Trs Trs::e2(double t) { return Trs(1, 0, t/-2, 0); }
Trs Trs::e3(double t) { return Trs(1, 0, 0, t/-2); }
Trs Trs::x = Trs::e1();
Trs Trs::y = Trs::e2();
Trs Trs::z = Trs::e3();
]]

local rotstath = [[
static Rot xy;
static Rot xz;
static Rot yz;
static Rot e12(double t = 1.0);
static Rot e13(double t = 1.0);
static Rot e23(double t = 1.0);
]]

local rotstatc = [[
Rot Rot::e12 (double t) { return Rot( cos(t), -sin(t), 0, 0 ); }
Rot Rot::e13 (double t) { return Rot( cos(t), 0, -sin(t), 0 ); }
Rot Rot::e23 (double t) { return Rot( cos(t), 0, 0, -sin(t) ); }
]]

local tnvstath = [[
static Tnv x;
static Tnv y;
static Tnv z;
static Tnv e1(double t = 1.0);
static Tnv e2(double t = 1.0);
static Tnv e3(double t = 1.0);

]]

local tnvstatc = [[
Tnv Tnv::e1(double t) { return Tnv(t,0,0); }
Tnv Tnv::e2(double t) { return Tnv(0,t,0); }
Tnv Tnv::e3(double t) { return Tnv(0,0,t); }
Tnv Tnv::x = Tnv::e1();
Tnv Tnv::y = Tnv::e2();
Tnv Tnv::z = Tnv::e3();
]]

local tnbstath = [[
static Tnb xy;
static Tnb xz;
static Tnb yz;
static Tnb e12(double t = 1.0);
static Tnb e13(double t = 1.0);
static Tnb e23(double t = 1.0);

]]

local tnbstatc = [[
Tnb Tnb::e12(double t) { return Tnb(t,0,0); }
Tnb Tnb::e13(double t) { return Tnb(0,t,0); }
Tnb Tnb::e23(double t) { return Tnb(0,0,t); }
Tnb Tnb::xy = Tnb::e12();
Tnb Tnb::xz = Tnb::e13();
Tnb Tnb::yz = Tnb::e23();
]]

local drvstath = [[
static Drv x;
static Drv y;
static Drv z;
static Drv e1(double t = 1.0);
static Drv e2(double t = 1.0);
static Drv e3(double t = 1.0);
]]
local drvstatc = [[
Drv Drv::e1(double t) { return Drv(t,0,0); }
Drv Drv::e2(double t) { return Drv(0,t,0); }
Drv Drv::e3(double t) { return Drv(0,0,t); }
Drv Drv::x = Drv::e1();
Drv Drv::y = Drv::e2();
Drv Drv::z = Drv::e3();
]]

local drbstath = [[
static Drb xy;
static Drb xz;
static Drb yz;
static Drb e12(double t = 1.0);
static Drb e13(double t = 1.0);
static Drb e23(double t = 1.0);
]]

local drbstatc = [[
Drb Drb::e12(double t) { return Drb(t,0,0); }
Drb Drb::e13(double t) { return Drb(0,t,0); }
Drb Drb::e23(double t) { return Drb(0,0,t); }
Drb Drb::xy = Drb::e12();
Drb Drb::xz = Drb::e13();
Drb Drb::yz = Drb::e23();
]]

--local linstath = [[]]
--local linstatc  = [[]]

stats = { {Biv, bivstath, bivstatc }, {Vec, vecstath, vecstatc }, {Trs, trsstath, trsstatc }, {Rot, rotstath, rotstatc },
{Tnv, tnvstath, tnvstatc }, {Tnb, tnbstath, tnbstatc}, {Drv, drvstath, drvstatc}, {Drb, drbstath, drbstatc} }
--STATICS END--
-------------------------------------------
-------------------------------------------