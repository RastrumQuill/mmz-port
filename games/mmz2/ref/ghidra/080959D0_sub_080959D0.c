// sub_080959D0 at 0x080959D0 (thumb)

undefined4 sub_080959D0(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_20 [2];
  
  local_20[0] = -0x880;
  local_20[1] = 0x880;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x909);
    if (*(byte *)(param_1 + 0xbd) == 0) {
      uVar4 = 0xffffff80;
    }
    else {
      uVar4 = 0x80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    bVar1 = *(byte *)(param_1 + 0xbd);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  sVar3 = sub_08008CFC(iVar5,*(int *)(param_1 + 0x58) + 0x800);
  if (sVar3 == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    iVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar5;
    iVar6 = *(int *)(param_1 + 0x54) + local_20[*(byte *)(param_1 + 0xbd)];
    sVar3 = sub_08008CFC(iVar6,iVar5 + -0x800);
    if (((sVar3 == 0) && (sVar3 = sub_08008CFC(iVar6,iVar5 + 0xa00), sVar3 != 0)) &&
       ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54)) + 0x2800U < 0x5001)) {
      iVar5 = sub_08065A4C(param_1);
      if (((*(int *)(iVar5 + 0x54) <= *(int *)(param_1 + 0x54) !=
            (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) &&
          ((*(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54)) + 0x6e00U < 0xdc01)) &&
         ((*(int *)(iVar5 + 0x58) - *(int *)(param_1 + 0x58)) + 0x5000U < 0xa001)) {
        *(undefined *)(param_1 + 0xf) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 9;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

