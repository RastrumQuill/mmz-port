// sub_080CAC58 at 0x080CAC58 (thumb)

undefined4 sub_080CAC58(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(short *)(param_1 + 0xbe) == -1) {
      sVar1 = sub_080032EC(0xee);
      *(short *)(param_1 + 0xbe) = sVar1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar2 = *(byte *)(param_1 + 0x11) - 1;
    if (*(int *)(param_1 + 0xb8) + iVar2 * 0xa000 < iVar3) goto LAB_080cacc8;
  }
  else {
    iVar2 = *(byte *)(param_1 + 0x11) + 1;
    if (iVar3 < *(int *)(param_1 + 0xb8) + iVar2 * 0xa000) goto LAB_080cacc8;
  }
  *(char *)(param_1 + 0x11) = (char)iVar2;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_080cacc8:
  DAT_0202d00c = 0x63800;
  DAT_0202d014 = 0x66800;
  DAT_0202d010 = *(int *)(param_1 + 0x58) + -0x4000;
  DAT_0202d018 = *(int *)(param_1 + 0x58) + 0x400;
  return in_lr;
}

