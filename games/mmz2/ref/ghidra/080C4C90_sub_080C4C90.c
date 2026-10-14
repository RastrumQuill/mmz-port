// sub_080C4C90 at 0x080C4C90 (thumb)

undefined4 sub_080C4C90(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  bool bVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  }
  bVar5 = *(char *)(param_1 + 0x11) != '\0';
  if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
    if (bVar5) {
LAB_080c4cc0:
      iVar3 = 0x1400 - (*(int *)(param_1 + 0x5c) * 0x2800 >> 5);
      goto LAB_080c4ce0;
    }
  }
  else if (!bVar5) goto LAB_080c4cc0;
  iVar3 = (*(int *)(param_1 + 0x5c) * 0x2800 >> 5) + -0x1400;
LAB_080c4ce0:
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
    iVar3 = *(int *)(iVar4 + 0x54) + iVar3;
    iVar4 = *(int *)(iVar4 + 0x58) + -0x3000;
  }
  else {
    iVar3 = sub_080EF150(iVar3,3);
    iVar3 = *(int *)(iVar4 + 0x54) + iVar3;
    iVar4 = *(int *)(iVar4 + 0x58) + -0x1000;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  sVar1 = (&DAT_080ef450)[(*(byte *)(param_1 + 0x13) & 0x7f) * 2];
  iVar3 = iVar3 + (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff] * 0x10;
  iVar2 = iVar3 - *(int *)(param_1 + 0x54);
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 0x1f + iVar3 >> 5;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) * 0x1f + ((iVar4 + sVar1 * -8) - (iVar2 >> 1)) >> 5;
  return in_lr;
}

