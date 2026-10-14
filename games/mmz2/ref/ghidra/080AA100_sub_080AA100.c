// sub_080AA100 at 0x080AA100 (thumb)

undefined4 sub_080AA100(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x8601);
    iVar2 = DAT_0202e130;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202e130 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + -0x1400;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      iVar3 = *(int *)(param_1 + 0x5c) + 0x20;
      *(int *)(param_1 + 0x5c) = iVar3;
      iVar2 = iVar3 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
      iVar3 = iVar3 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
      if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080AA1D8(param_1);
  }
  return in_lr;
}

