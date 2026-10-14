// sub_080958C0 at 0x080958C0 (thumb)

undefined4 sub_080958C0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x903);
    sub_08006E08(param_1 + 0x74,&DAT_08342c78);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
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
  iVar2 = sub_0801E4D8(*(undefined4 *)(param_1 + 0xc0));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_08342c60);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

