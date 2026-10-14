// sub_080D2FDC at 0x080D2FDC (thumb)

undefined4 sub_080D2FDC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar6 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  uVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if (DAT_0202ed52 != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc);
    goto LAB_080d30f8;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x7c) << 0x18;
  if ((uVar5 >> 0x19 < (uVar3 & 0xff)) ||
     (((uVar5 >> 0x1a < (uVar3 & 0xff) && ((uVar3 & 1) == 0)) || ((uVar3 & 3) == 0)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  if ((*(byte *)(iVar6 + 10) & 0x40) == 0) {
    if (((*(byte *)(iVar6 + 10) & 0x30) >> 4 & 1) == 0) {
      iVar1 = *(int *)(iVar6 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar1 = *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar1;
    if (((*(byte *)(iVar6 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar1 = *(int *)(iVar6 + 0x58);
      iVar4 = *(int *)(param_1 + 0x78);
      goto LAB_080d30d2;
    }
    iVar1 = *(int *)(iVar6 + 0x58) - *(int *)(param_1 + 0x78);
  }
  else if (*(short *)(iVar6 + 8) == 0x1002) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + *(int *)(param_1 + 0x74);
    iVar1 = *(int *)(iVar6 + 0x58) + *(int *)(param_1 + 0x78);
    iVar4 = 0x1e00;
LAB_080d30d2:
    iVar1 = iVar1 + iVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    iVar1 = *(int *)(iVar6 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar1;
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(byte *)(iVar6 + 0xc) < 3)) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar2 = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
LAB_080d30f8:
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

