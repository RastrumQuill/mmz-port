// sub_08102F3C at 0x08102F3C (thumb)

undefined4 sub_08102F3C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  piVar2 = (int *)(param_1 + 0xc0);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x10)) {
      local_14 = iVar1;
      local_10 = iVar1;
      iVar1 = sub_0802AD94(0,param_1,&local_14);
      *piVar2 = iVar1;
    }
    if (DAT_0202dae0 == (byte)(&DAT_08868854)[*(byte *)(param_1 + 0x10)]) {
      local_14 = *(int *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + 0x1000;
      sub_080B7660(&local_14,0,0);
    }
  }
  else {
    iVar1 = sub_0802B3CC(iVar1);
    if (iVar1 != 0) {
      *piVar2 = 0;
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

