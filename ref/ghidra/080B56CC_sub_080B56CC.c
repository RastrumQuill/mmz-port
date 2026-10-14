// sub_080B56CC at 0x080B56CC (thumb)

undefined4 sub_080B56CC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined auStack_1c [4];
  int local_18;
  
  if (DAT_02022878 != '\0') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (((DAT_02022b64 & 1) != 0) && ((DAT_02022b6e & 1) == 0)) {
      sub_08018FF8(DAT_0202286c,auStack_1c,0);
      iVar5 = *(int *)(param_1 + 0xc0);
      if ((local_18 - iVar5) + 0x20U < 0x41) {
        *(int *)(param_1 + 0xc0) = local_18;
      }
      else {
        if (local_18 - iVar5 < 1) {
          iVar5 = iVar5 + -0x20;
        }
        else {
          iVar5 = iVar5 + 0x20;
        }
        *(int *)(param_1 + 0xc0) = iVar5;
      }
    }
    uVar3 = sub_080C8B68(*(byte *)(param_1 + 0x12) + 1,0xa0);
    *(char *)(param_1 + 0x12) = (char)uVar3;
    iVar5 = sub_080C8B68(uVar3,0xa0);
    iVar5 = sub_080C8AD0(iVar5 << 8,0xa0);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[iVar5] * 0xc;
    iVar5 = sub_080C8B68(uVar3,0x50);
    iVar5 = sub_080C8AD0(iVar5 << 8,0x50);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + (short)(&DAT_080c8e24)[iVar5] * -4;
  }
  if (*(char *)(param_1 + 199) == '\x01') {
    uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (0x2000 < uVar4) {
      bVar1 = *(byte *)(param_1 + 10);
LAB_080b58b6:
      *(byte *)(param_1 + 10) = bVar1 & 0xfe;
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    uVar7 = (*(int *)(param_1 + 0xbc) + 0x7800) - DAT_02022c7c;
    uVar4 = (*(int *)(param_1 + 0xc0) + 0x5000) - DAT_02022c80;
    if (uVar7 < 0xf000) {
      iVar5 = 0;
    }
    else if ((int)uVar7 < 0) {
      iVar5 = -uVar7;
    }
    else {
      iVar5 = uVar7 - 0xf000;
    }
    if (uVar4 < 0xa000) {
      iVar6 = 0;
    }
    else if ((int)uVar4 < 0) {
      iVar6 = -uVar4;
    }
    else {
      iVar6 = uVar4 - 0xa000;
    }
    if ((iVar5 == 0) && (iVar6 == 0)) {
      iVar6 = 0;
    }
    else if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
    if (0x77ff < iVar6) {
      uVar4 = (uint)*(ushort *)(param_1 + 0xc4);
      if ((0xefff < iVar6) || (uVar4 < 0x708)) {
        uVar4 = uVar4 - 1;
      }
      *(ushort *)(param_1 + 0xc4) = (ushort)uVar4;
      if (uVar4 != 0) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B58C0(param_1);
      return in_lr;
    }
    *(undefined2 *)(param_1 + 0xc4) = 0x708;
    if (0x1fff < iVar6) {
      bVar1 = *(byte *)(param_1 + 10);
      goto LAB_080b58b6;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 | 1;
  uVar2 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),2);
  *(undefined *)(param_1 + 0x13) = uVar2;
  sub_080B50EC(param_1);
  return in_lr;
}

