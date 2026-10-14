// sub_080AF4A8 at 0x080AF4A8 (thumb)

undefined4 sub_080AF4A8(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 0x79) {
    iVar2 = *(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58) >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 0x51) {
      uVar1 = 1;
      goto LAB_080af4e6;
    }
  }
  uVar1 = 0;
LAB_080af4e6:
  *(undefined *)(param_1 + 0xb6) = uVar1;
  return in_lr;
}

