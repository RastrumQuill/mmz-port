// sub_08073CCC at 0x08073CCC (thumb)

undefined4 sub_08073CCC(int param_1)

{
  int iVar1;
  char cVar2;
  char extraout_var;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = param_1;
  if (param_1 != 0) {
    do {
      iVar5 = *(int *)(iVar6 + 0x60) + 0x40;
      *(int *)(iVar6 + 0x60) = iVar5;
      if (*(char *)(iVar6 + 0x12) != '\0') {
        if (*(char *)(param_1 + 0xd) == '\x01') {
          *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + *(int *)(iVar6 + 0x5c);
          *(int *)(iVar6 + 0x58) = *(int *)(iVar6 + 0x58) + iVar5;
        }
        else {
          sub_08073C38(iVar6,*(undefined4 *)(iVar6 + 0x5c));
          sub_08073C80(iVar6,*(undefined4 *)(iVar6 + 0x60));
        }
      }
      iVar6 = *(int *)(iVar6 + 0x28);
    } while (iVar6 != 0);
  }
  cVar2 = '\0';
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = param_1;
  while (iVar1 = iVar5, iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x54) - *(int *)(iVar6 + 0x54);
    iVar7 = *(int *)(iVar1 + 0x58) - *(int *)(iVar6 + 0x58);
    sub_080FE10C(iVar5 * 0x10000 >> 0x10,iVar7 * 0x10000 >> 0x10);
    if (cVar2 == '\0') {
      *(char *)(iVar6 + 0x24) = extraout_var;
    }
    *(char *)(iVar1 + 0x24) = extraout_var + '@';
    uVar3 = sub_080FE124(iVar5 * iVar5 + iVar7 * iVar7);
    uVar3 = uVar3 & 0xffff;
    if (uVar3 != 0) {
      iVar4 = FUN_080fe2f8(iVar5 * 0x100,uVar3);
      iVar7 = FUN_080fe2f8(iVar7 * 0x100,uVar3);
      iVar5 = (uVar3 - 0xe00) * 0xa0;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      iVar4 = (iVar5 >> 8) * iVar4;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      iVar4 = iVar4 >> 8;
      iVar7 = (iVar5 >> 8) * iVar7;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      iVar7 = iVar7 >> 8;
      if (*(char *)(param_1 + 0xd) == '\x01') {
        *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + iVar4;
        *(int *)(iVar6 + 0x58) = *(int *)(iVar6 + 0x58) + iVar7;
        if (*(char *)(iVar1 + 0x12) != '\0') {
          *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) - iVar4;
          *(int *)(iVar1 + 0x58) = *(int *)(iVar1 + 0x58) - iVar7;
        }
      }
      else {
        sub_08073C38(iVar6,iVar4);
        sub_08073C80(iVar6,iVar7);
        if (*(char *)(iVar1 + 0x12) != '\0') {
          sub_08073C38(iVar1,-iVar4);
          sub_08073C80(iVar1,-iVar7);
        }
      }
    }
    cVar2 = cVar2 + '\x01';
    iVar6 = iVar1;
    iVar5 = *(int *)(iVar1 + 0x28);
  }
  if (param_1 != 0) {
    do {
      iVar6 = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 100)) * 0xfe;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar6 >> 8;
      iVar6 = (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x68)) * 0xfe;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar6 >> 8;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58);
      param_1 = *(int *)(param_1 + 0x28);
    } while (param_1 != 0);
  }
  return in_lr;
}

