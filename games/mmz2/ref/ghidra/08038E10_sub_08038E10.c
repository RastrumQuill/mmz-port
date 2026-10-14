// sub_08038E10 at 0x08038E10 (thumb)

undefined4 sub_08038E10(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if ((param_2 != 0) && (*(int *)(&DAT_08335f9c + (uint)*(byte *)(param_1 + 0xd) * 4) != 0)) {
    sub_080EF11C(param_1,param_2);
  }
  return in_lr;
}

