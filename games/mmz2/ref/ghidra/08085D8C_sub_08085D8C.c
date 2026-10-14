// sub_08085D8C at 0x08085D8C (thumb)

undefined4 sub_08085D8C(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (uint)*(byte *)(param_1 + 10) << 0x18;
    uVar6 = uVar2 >> 0x1c & 1;
    sub_080127E4(param_1,0x7212);
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x200);
    if (sVar1 == 0) {
      *(undefined *)(param_1 + 0xe) = 2;
      *(uint *)(param_1 + 0x60) = (uVar2 >> 0x1d & 1 ^ 1) * -0x140;
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(uint *)(param_1 + 0x5c) = (uVar6 * 2 + -1) * 0x60;
      *(uint *)(param_1 + 100) = (uVar6 * -2 + 1) * 4;
    }
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar6 = uVar6 | 2;
    }
    sub_080BABAC(param_1 + 0x54,2,0,uVar6);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 != 0) {
      sVar1 = sub_08008CFC(iVar5,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar1 != 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined4 *)(param_1 + 0x60) = 0x80;
      return in_lr;
    }
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 == 0) {
      return in_lr;
    }
  }
  sub_0808604C(param_1);
  sub_0801DD2C(1,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

