// sub_080783CC at 0x080783CC (thumb)

undefined4 sub_080783CC(int param_1)

{
  char cVar1;
  char extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    sub_08017700(param_1,0x2f06);
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = sub_08063614(uVar5);
  if (iVar2 == 0) {
    iVar4 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    iVar7 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1800);
    iVar2 = iVar4 >> 8;
    iVar3 = iVar7 >> 8;
    iVar2 = sub_080FE124(iVar2 * iVar2 + iVar3 * iVar3);
    uVar6 = (uint)(iVar2 << 0x10) >> 8;
    iVar2 = FUN_080fe2f8(iVar4 * 0x100,uVar6);
    iVar3 = FUN_080fe2f8(iVar7 * 0x100,uVar6);
    iVar2 = iVar2 - *(int *)(param_1 + 0x5c);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar2 = *(int *)(param_1 + 0x5c) + (iVar2 >> 3);
    *(int *)(param_1 + 0x5c) = iVar2;
    iVar3 = iVar3 - *(int *)(param_1 + 0x60);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    iVar3 = *(int *)(param_1 + 0x60) + (iVar3 >> 3);
    *(int *)(param_1 + 0x60) = iVar3;
    sub_080FE10C(iVar2 * 0x10000 >> 0x10,iVar3 * 0x10000 >> 0x10);
    *(char *)(param_1 + 0x24) = extraout_var + -0x40;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

