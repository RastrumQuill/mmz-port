// sub_080C6A50 at 0x080C6A50 (thumb)

undefined4 sub_080C6A50(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (CONCAT11(*(undefined *)(iVar5 + 0x1e),*(undefined *)(iVar5 + 0x70)) == -0x5ae6) {
    bVar1 = *(byte *)(iVar5 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if (*(char *)(iVar5 + 0x71) == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x100;
      iVar4 = 0x1900;
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
      iVar4 = 0x1a00;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(iVar5 + 0x54) - iVar4;
    }
    else {
      iVar4 = *(int *)(iVar5 + 0x54) + iVar4;
    }
    *(int *)(param_1 + 0x54) = iVar4;
    if (*(char *)(param_1 + 0xd) == '\0') {
      if (*(char *)(iVar5 + 0xf) != '\x02') {
        return in_lr;
      }
      sub_0801CF00(param_1,0xa603);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar2 = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

