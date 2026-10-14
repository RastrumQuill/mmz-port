// sub_080D2804 at 0x080D2804 (thumb)

undefined4 sub_080D2804(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      iVar3 = sub_080D03E8(param_1,0xc501,1);
      uVar2 = iVar3 << 0x10;
      goto LAB_080d28a8;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    DAT_0202fd9a = 0x380;
    DAT_0202f79a = 8;
    sub_08017700(param_1,0xc501);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = DAT_020302c4 + -0x5000;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 0x7f + *(int *)(param_1 + 100) >> 7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) * 0x7f + *(int *)(param_1 + 0x68) >> 7;
  uVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 1;
LAB_080d28a8:
  if (uVar2 != 0) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

