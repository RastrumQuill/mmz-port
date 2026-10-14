// sub_0806B5EC at 0x0806B5EC (thumb)

undefined4 sub_0806B5EC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x808);
    }
    else {
      sub_080127E4(param_1,0x800);
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833e400);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0xc2) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
  if (sVar1 == 0) {
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
    }
  }
  iVar2 = sub_0801E4D8(*(undefined4 *)(param_1 + 0x2c));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_08006E08(param_1 + 0x74,&DAT_0833e3e8);
    }
    else {
      sub_08006E08(param_1 + 0x74,&DAT_0833e3d0);
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

