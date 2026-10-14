// sub_08117A14 at 0x08117A14 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08117A14(int param_1)

{
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0xdc4) = (_DAT_02000a10 & 0x1ff) * 0x100 + 0x7800;
  param_1 = param_1 + 0xbac;
  sub_08003470(param_1);
  sub_0801C79C(DAT_0202edb4);
  sub_0801C924(DAT_0202edb4,param_1);
  sub_08003420(param_1);
  return in_lr;
}

