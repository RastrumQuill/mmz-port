// sub_0803A8E0 at 0x0803A8E0 (thumb)

undefined4 sub_0803A8E0(uint param_1,undefined2 param_2,undefined param_3)

{
  undefined4 in_lr;
  
  (&DAT_02000040)[param_1 & 0xffff] = param_2;
  (&DAT_02000048)[param_1 & 0xffff] = param_3;
  return in_lr;
}

