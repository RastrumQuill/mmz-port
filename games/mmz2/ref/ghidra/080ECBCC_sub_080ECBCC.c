// sub_080ECBCC at 0x080ECBCC (thumb)

undefined4 sub_080ECBCC(int param_1,char param_2,undefined param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  do {
    iVar1 = sub_080EF330(param_1,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[(byte)(&DAT_0835e940)[iVar1]],param_2,
                 param_3);
    param_2 = param_2 + -1;
    param_1 = sub_080EF2B8(param_1,10);
  } while (param_1 != 0);
  return in_lr;
}

