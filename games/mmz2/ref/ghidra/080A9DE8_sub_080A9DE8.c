// sub_080A9DE8 at 0x080A9DE8 (thumb)

undefined4 sub_080A9DE8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A9BC4(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if ((bVar1 & 7) == 0) {
    sub_080032EC(0x34);
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(byte *)(iVar2 + 0x12) < 0x10) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x200;
      if (*(byte *)(param_1 + 0x13) < 0x61) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080A9BC4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x13) & 7) == 0) {
      sub_080A9B44(param_1,2,*(undefined *)(iVar2 + 0x13));
      sub_080A9B44(param_1,2,*(char *)(iVar2 + 0x13) + -0x80);
    }
    if (*(char *)(iVar2 + 0xd) != '\x03') {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

