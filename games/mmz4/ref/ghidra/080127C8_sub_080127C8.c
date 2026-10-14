// sub_080127C8 at 0x080127C8 (thumb)

undefined4 sub_080127C8(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_1 << 4) >> 0x10;
  sub_08007410(iVar1,(((param_2 << 4) >> 0x10) + -4) * 0x10000 >> 0x10,&DAT_0882fa94);
  sub_08007410(iVar1,(((param_2 + 0x32000) * 0x10 >> 0x10) + -4) * 0x10000 >> 0x10,&DAT_0882fa94);
  DAT_0202dada._1_1_ = 1;
  return in_lr;
}

