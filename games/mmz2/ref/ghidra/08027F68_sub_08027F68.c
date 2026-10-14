// sub_08027F68 at 0x08027F68 (thumb)

undefined4 sub_08027F68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = -1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = 1;
  }
  if (-iVar3 * (int)*(char *)(param_1 + 0x2e6) < 0) {
    uVar2 = 4;
    if (iVar3 < 1) {
      uVar2 = 8;
    }
    iVar1 = sub_080331E8(param_1,uVar2);
    if (iVar1 < 1) {
      *(char *)(param_1 + 0x2e6) = (char)-iVar3;
    }
  }
  else {
    uVar2 = 4;
    if (0 < iVar3) {
      uVar2 = 8;
    }
    sub_08033184(param_1,uVar2);
  }
  return in_lr;
}

