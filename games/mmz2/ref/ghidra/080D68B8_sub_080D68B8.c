// sub_080D68B8 at 0x080D68B8 (thumb)

undefined4 sub_080D68B8(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined auStack_20 [4];
  int local_1c;
  
  if (DAT_0202e144 != '\0') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      sub_080378B4(DAT_0202e130,auStack_20,0);
      iVar4 = *(int *)(param_1 + 0xb8);
      if ((local_1c - iVar4) + 0x20U < 0x41) {
        *(int *)(param_1 + 0xb8) = local_1c;
      }
      else {
        if (local_1c - iVar4 < 1) {
          iVar4 = iVar4 + -0x20;
        }
        else {
          iVar4 = iVar4 + 0x20;
        }
        *(int *)(param_1 + 0xb8) = iVar4;
      }
    }
    uVar2 = sub_080EF1E8(*(byte *)(param_1 + 0x12) + 1,0xa0);
    *(char *)(param_1 + 0x12) = (char)uVar2;
    iVar4 = sub_080EF1E8(uVar2,0xa0);
    uVar3 = sub_080EF150(iVar4 << 8,0xa0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + (short)(&DAT_080ef450)[uVar3 & 0xff] * 0xc
    ;
    iVar4 = sub_080EF1E8(uVar2,0x50);
    uVar3 = sub_080EF150(iVar4 << 8,0x50);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[uVar3 & 0xff] * -4;
  }
  if (*(char *)(param_1 + 0xbf) == '\x01') {
    uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar3 < 0x2001) {
LAB_080d6a78:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      uVar1 = sub_080BED50(param_1,*(undefined *)(param_1 + 0x13),2);
      *(undefined *)(param_1 + 0x13) = uVar1;
      sub_08012A14(param_1);
      return in_lr;
    }
  }
  else {
    uVar6 = (*(int *)(param_1 + 0xb4) + 0x7800) - DAT_0202ed50;
    uVar3 = (*(int *)(param_1 + 0xb8) + 0x5000) - DAT_0202ed54;
    if (uVar6 < 0xf000) {
      iVar4 = 0;
    }
    else if ((int)uVar6 < 0) {
      iVar4 = -uVar6;
    }
    else {
      iVar4 = uVar6 - 0xf000;
    }
    if (uVar3 < 0xa000) {
      iVar5 = 0;
    }
    else if ((int)uVar3 < 0) {
      iVar5 = -uVar3;
    }
    else {
      iVar5 = uVar3 - 0xa000;
    }
    if ((iVar4 == 0) && (iVar5 == 0)) {
      iVar5 = 0;
    }
    else if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    if (0x77ff < iVar5) {
      uVar3 = (uint)*(ushort *)(param_1 + 0xbc);
      if ((0xefff < iVar5) || (uVar3 < 0x708)) {
        uVar3 = uVar3 - 1;
      }
      *(ushort *)(param_1 + 0xbc) = (ushort)uVar3;
      if (uVar3 != 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080D6AAC(param_1);
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0xbc) = 0x708;
    if (iVar5 < 0x2000) goto LAB_080d6a78;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return in_lr;
}

