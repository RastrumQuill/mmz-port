// sub_080AF230 at 0x080AF230 (thumb)

undefined4 sub_080AF230(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0x13) - 1;
  *(char *)(param_1 + 0x13) = (char)iVar2;
  if (((uint)(iVar2 * 0x1000000) >> 0x19 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar2 = sub_08009B28(iVar2 + *(short *)((int)&DAT_080fe64c +
                                           ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))
                                 * 8,iVar4 + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 8);
    if (iVar2 < 0) {
      sub_0800471C(0x100);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      iVar2 = *(int *)(param_1 + 0x60) * -0xe6;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar2 >> 8;
    }
    if (*(int *)(param_1 + 0x5c) < 1) {
      cVar3 = *(char *)(param_1 + 0x12) + -8;
    }
    else {
      cVar3 = *(char *)(param_1 + 0x12) + '\b';
    }
    *(char *)(param_1 + 0x12) = cVar3;
    *(char *)(param_1 + 0x24) = cVar3 + ' ';
  }
  return in_lr;
}

