// sub_080B4DE4 at 0x080B4DE4 (thumb)

undefined4 sub_080B4DE4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  cVar1 = (*(byte *)(param_1 + 10) >> 4 & 1) * '\x02' + -1;
  if ((*(char *)(iVar5 + 0xd) == '\n') || (1 < *(byte *)(iVar5 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = *(int *)(iVar5 + 0x54) + cVar1 * -0xf00;
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x54) + cVar1 * 0x1400;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x1200;
    sVar2 = *(short *)(param_1 + 0x50);
    if (sVar2 != 0) {
      iVar5 = sVar2 + -10;
      if (iVar5 < 0) {
        sVar2 = 0;
      }
      else {
        sVar2 = (short)iVar5;
      }
      *(short *)(param_1 + 0x50) = sVar2;
      *(short *)(param_1 + 0x52) = sVar2;
      pbVar4 = (byte *)(param_1 + 0x74);
      if (*pbVar4 >> 2 < *(byte *)(param_1 + 0x12)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        if (*pbVar4 == 0xff) {
          return in_lr;
        }
        *pbVar4 = *pbVar4 + 1;
        *(undefined *)(param_1 + 0x12) = 0;
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    *(char *)(param_1 + 0xd) = (char)sVar2;
  }
  sub_080B4C80(param_1);
  return in_lr;
}

