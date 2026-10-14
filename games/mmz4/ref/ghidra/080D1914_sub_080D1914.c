// sub_080D1914 at 0x080D1914 (thumb)

undefined4 sub_080D1914(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((DAT_02000c80 & 0x7f) == 2) {
    iVar1 = sub_08007B84(param_1);
    if (iVar1 < iVar2) {
LAB_080d194a:
      sub_080D17D8(param_1,9,param_2);
      return in_lr;
    }
  }
  else if (DAT_0202cabc < iVar2) goto LAB_080d194a;
  sub_080D17D8(param_1,1,param_2);
  return in_lr;
}

