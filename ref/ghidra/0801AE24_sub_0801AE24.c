// sub_0801AE24 at 0x0801AE24 (thumb)

undefined8 sub_0801AE24(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  param_1 = param_1 & 0xfffff000;
  if (0 < param_3) {
    param_1 = param_1 + 0xfff;
  }
  iVar1 = sub_08009E9C(param_1,(param_2 & 0xfffff000) + 0xfff);
  iVar1 = sub_08009C3C(param_1 + param_3,iVar1 + 0x101);
  return CONCAT44(in_lr,(uint)(iVar1 + 0x200U < 0x200));
}

