// sub_0801281C at 0x0801281C (thumb)

undefined4 sub_0801281C(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_1 << 4) >> 0x10;
  sub_08007410(iVar1,(((param_2 << 4) >> 0x10) + -4) * 0x10000 >> 0x10,&DAT_0882faa0);
  sub_08007410(iVar1,(((param_2 + 0x32000) * 0x10 >> 0x10) + -4) * 0x10000 >> 0x10,&DAT_0882faac);
  DAT_0202dada._1_1_ = 1;
  return in_lr;
}

