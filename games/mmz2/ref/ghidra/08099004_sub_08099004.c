// sub_08099004 at 0x08099004 (thumb)

undefined4 sub_08099004(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(char *)(param_1 + 0xc3) == '\0') {
      iVar3 = *(int *)(param_1 + 0x5c) * (9 - (uint)*(byte *)(param_1 + 0xc2)) * 0x20;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
    }
    else {
      iVar3 = (*(byte *)(param_1 + 0xc2) + 1) * 0x20 * *(int *)(param_1 + 0x5c);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) + -0x200) - (uVar2 * 0x80 >> 0x17);
    *(byte *)(param_1 + 0x12) = (*(byte *)(param_1 + 0xc2) & 1) + 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

