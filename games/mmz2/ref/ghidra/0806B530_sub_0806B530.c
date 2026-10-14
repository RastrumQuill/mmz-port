// sub_0806B530 at 0x0806B530 (thumb)

undefined4 sub_0806B530(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x820);
      sub_08006E08(param_1 + 0x74,&DAT_0833e3e8);
    }
    else {
      sub_080127E4(param_1,0x81d);
      sub_08006E08(param_1 + 0x74,&DAT_0833e3d0);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0xc2) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
      *(undefined *)(param_1 + 0x10) = 1;
    }
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}

