// sub_080D8334 at 0x080D8334 (thumb)

undefined4 sub_080D8334(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = *(byte *)(param_1 + 0x11) >> 1 & 1;
  uVar4 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((uVar4 & 0xff) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D8584(param_1);
    return in_lr;
  }
  if ((uVar4 & 0xff) < 0xf) {
    uVar4 = uVar4 & 1;
    if (uVar4 == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
LAB_080d8398:
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if (0x1d < (uVar4 & 0xff)) goto LAB_080d839e;
    uVar4 = uVar4 & 3;
    if (uVar4 != 0) goto LAB_080d8398;
    uVar4 = (uint)*(byte *)(param_1 + 10);
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080d839e:
  sub_0801CFF0(param_1,uVar4,1,0);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    if (*(int *)(param_1 + 0x60) < 1) {
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),
                           *(int *)(param_1 + 0x58) + (uVar6 ^ 1) * -0xc00);
      if (sVar2 == 0) {
        return in_lr;
      }
      uVar3 = 0;
    }
    else {
      sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + uVar6 * 0xc00)
      ;
      if (sVar2 == 0) {
        return in_lr;
      }
      uVar3 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  return in_lr;
}

