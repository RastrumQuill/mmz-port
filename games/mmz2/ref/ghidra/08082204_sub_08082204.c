// sub_08082204 at 0x08082204 (thumb)

undefined4 sub_08082204(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6106);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  sVar1 = sub_08008CFC(iVar2 + *(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    if (DAT_0202d004 < *(int *)(param_1 + 0x58)) {
      iVar2 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar2;
      iVar4 = 0x380;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      iVar4 = 0x700;
    }
    if (iVar4 < iVar2) {
      *(int *)(param_1 + 0x60) = iVar4;
    }
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    if (*(int *)(param_1 + 0x60) < 1) {
      sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar2 + -0x1000);
      if (sVar1 != 0) {
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
    }
    else {
      sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
      if (sVar1 != 0) {
        uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080821A4(param_1);
  }
  return in_lr;
}

