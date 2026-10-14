// sub_08076D0C at 0x08076D0C (thumb)

undefined4 sub_08076D0C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
    sub_080127E4(param_1,0x1405);
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if (sVar3 == 0) {
      iVar4 = *(int *)(param_1 + 0x60) + 0x300;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      cVar2 = '\x03';
    }
    else {
      uVar5 = sub_0807721C(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      iVar4 = uVar6 * -2 + 1;
      *(int *)(param_1 + 0x5c) = iVar4 * -0x300;
      *(int *)(param_1 + 100) = iVar4 * 0x40;
      *(undefined4 *)(param_1 + 0x60) = 0;
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(char *)(param_1 + 0xe) = cVar2;
    sub_080B5640(param_1,param_1 + 0x54,1,uVar6);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0x12) == -1) {
LAB_08076e40:
    sub_080770D4(param_1);
    sub_08077180(param_1);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
    sub_0801DE2C(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    bVar1 = *(byte *)(param_1 + 0xe);
    if (bVar1 == 2) {
      uVar6 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      uVar6 = uVar6 & 0xffff;
      if (uVar6 != 0) {
        if (*(byte *)(param_1 + 0x12) < 0xc) {
          return in_lr;
        }
        goto LAB_08076e40;
      }
    }
    else {
      if (2 < bVar1) {
        if (bVar1 != 3) {
          return in_lr;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar4 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar4;
        if (0x700 < iVar4) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
        if (sVar3 == 0) {
          return in_lr;
        }
        goto LAB_08076e40;
      }
      if (bVar1 != 1) {
        return in_lr;
      }
      uVar6 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      uVar6 = uVar6 & 0xffff;
      if (uVar6 != 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x5c) = iVar4;
        if (iVar4 != 0) {
          return in_lr;
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
    }
    *(uint *)(param_1 + 0x5c) = uVar6;
    *(uint *)(param_1 + 0x60) = uVar6;
    *(undefined *)(param_1 + 0xe) = 3;
  }
  return in_lr;
}

