// sub_080CFCD8 at 0x080CFCD8 (thumb)

undefined4 sub_080CFCD8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(short *)(param_1 + 0xbe) == -1) {
      sVar1 = sub_0800471C(0xa0);
      *(short *)(param_1 + 0xbe) = sVar1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar2 = *(byte *)(param_1 + 0x11) - 1;
    if (*(int *)(param_1 + 0xb8) + iVar2 * 0xa000 < iVar3) goto LAB_080cfd48;
  }
  else {
    iVar2 = *(byte *)(param_1 + 0x11) + 1;
    if (iVar3 < *(int *)(param_1 + 0xb8) + iVar2 * 0xa000) goto LAB_080cfd48;
  }
  *(char *)(param_1 + 0x11) = (char)iVar2;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_080cfd48:
  DAT_0202e494 = 0x63800;
  DAT_0202e49c = 0x66800;
  DAT_0202e498 = *(int *)(param_1 + 0x58) + -0x4000;
  DAT_0202e4a0 = *(int *)(param_1 + 0x58) + 0x400;
  return in_lr;
}

