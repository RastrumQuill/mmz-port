// sub_08100634 at 0x08100634 (thumb)

undefined4 sub_08100634(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar4 + 8) != '\0') {
    return in_lr;
  }
  bVar1 = *(byte *)(iVar3 + 0x10);
  bVar2 = bVar1 & 2;
  if ((bVar1 & 2) == 0) {
    if (*(int *)(iVar4 + 0x58) < *(int *)(iVar3 + 0x58)) {
      if ((bVar1 & 1) != 0) {
        return in_lr;
      }
      *(undefined *)(iVar3 + 0xd) = 1;
      goto LAB_081006a0;
    }
  }
  else {
    bVar2 = DAT_0202e8b4 & 8;
    if ((DAT_0202e8b4 & 8) != 0) {
      return in_lr;
    }
    if (*(int *)(iVar4 + 0x58) < *(int *)(iVar3 + 0x58)) {
      if ((bVar1 & 1) != 0) {
        return in_lr;
      }
      *(undefined *)(iVar3 + 0xd) = 1;
      goto LAB_081006a0;
    }
  }
  if ((bVar1 & 1) == 0) {
    return in_lr;
  }
  *(undefined *)(iVar3 + 0xd) = 2;
LAB_081006a0:
  *(byte *)(iVar3 + 0xe) = bVar2;
  *(undefined *)(iVar4 + 0x143) = 2;
  DAT_0202e924 = DAT_0202e924 | 1;
  *(int *)(iVar3 + 0xb4) = iVar4;
  return in_lr;
}

