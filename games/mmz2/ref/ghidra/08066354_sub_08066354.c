// sub_08066354 at 0x08066354 (thumb)

undefined4 sub_08066354(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sVar1 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0xa80,*(int *)(param_1 + 0x58) + -0x600);
  if ((sVar1 == 0) &&
     (sVar1 = sub_08008CFC(*(int *)(param_1 + 0x54) + 0xa80,*(int *)(param_1 + 0x58) + 0xa00),
     sVar1 != 0)) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_080127E4(param_1,0x6d01);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      sub_08006E08(param_1 + 0x74,&DAT_0833db44);
      *(undefined4 *)(param_1 + 0x5c) = 0x80;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((0x5fff < *(uint *)(param_1 + 0xbc)) && (0x2800 < iVar3 - *(int *)(param_1 + 0xb4))) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    sub_080128D4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

