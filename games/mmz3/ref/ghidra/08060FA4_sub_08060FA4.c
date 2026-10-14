// sub_08060FA4 at 0x08060FA4 (thumb)

undefined4 sub_08060FA4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined4 *)(param_1 + 0xd0) = 0x280;
    *(undefined *)(param_1 + 0x12) = 0xf0;
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar3 = iVar3 + ((0x98 - iVar3) * 10 >> 8);
  *(int *)(param_1 + 0xd0) = iVar3;
  iVar3 = *(int *)(param_1 + 0x58) - iVar3;
  *(int *)(param_1 + 0x58) = iVar3;
  if (iVar3 < *(int *)(param_1 + 0xb8)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

