// sub_0807A9B4 at 0x0807A9B4 (thumb)

undefined4 sub_0807A9B4(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x21) {
      return in_lr;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0x700;
    iVar3 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar3 + 0x700;
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x1b00);
    if (sVar2 == 0) {
      return in_lr;
    }
    iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1400);
    *(int *)(param_1 + 0x58) = iVar3 + -0x1400;
    sub_08015518(8,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08340038,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_080032EC(0x56);
  }
  else {
    if (bVar1 != 2) {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    if (*(int *)(param_1 + 0xb8) <= iVar3) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

