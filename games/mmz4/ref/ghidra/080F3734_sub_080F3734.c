// sub_080F3734 at 0x080F3734 (thumb)

undefined4 sub_080F3734(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        return in_lr;
      }
      if (*(int *)(param_1 + 0x60) < 0x300) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
      }
      iVar3 = *(int *)(param_1 + 0x58) + (*(uint *)(param_1 + 0x60) & 0xff00);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar2 = *(int *)(param_1 + 0x5c) + 0x1e000;
      if (iVar3 <= iVar2) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = iVar2;
      goto LAB_080f37a0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xb4) = 0x1f;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xb4) + -1;
  *(int *)(param_1 + 0xb4) = iVar2;
  if (iVar2 != 0) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
LAB_080f37a0:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

