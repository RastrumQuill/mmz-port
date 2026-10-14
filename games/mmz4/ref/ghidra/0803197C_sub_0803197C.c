// sub_0803197C at 0x0803197C (thumb)

undefined4 sub_0803197C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x142) & 2) == 0) {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x404) {
      sub_0801CF00(param_1,0x404);
    }
  }
  else {
    sub_0801CF00(param_1,0x401);
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  sVar1 = sub_080386E0(param_1);
  if (iVar2 < sVar1) {
    sVar1 = sub_080386E0(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xf) = 1;
  sub_080319F4(param_1);
  return in_lr;
}

