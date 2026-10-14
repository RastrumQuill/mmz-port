// sub_0807EDC0 at 0x0807EDC0 (thumb)

undefined4 sub_0807EDC0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(byte *)(param_1 + 0x13) - 1;
  *(char *)(param_1 + 0x13) = (char)iVar3;
  if (((uint)(iVar3 * 0x1000000) >> 0x19 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x50) = iVar4;
    iVar3 = sub_08007B30(iVar3 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 8,
                         iVar4 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * 8);
    if (iVar3 < 0) {
      sub_08001EAC(0xce);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
      iVar3 = *(int *)(param_1 + 0x58) * -0xe6;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x58) = iVar3 >> 8;
    }
    if (*(int *)(param_1 + 0x54) < 1) {
      cVar2 = *(char *)(param_1 + 0x12) + -8;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x12) + '\b';
    }
    *(char *)(param_1 + 0x12) = cVar2;
    *(char *)(param_1 + 0x1f) = cVar2 + ' ';
  }
  return in_lr;
}

