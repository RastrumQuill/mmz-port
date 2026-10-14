// sub_0806ACBC at 0x0806ACBC (thumb)

undefined4 sub_0806ACBC(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833e2e0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08012ACC(param_1);
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 != 0) {
      uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    pbVar3 = (byte *)(param_1 + 0xb6);
    *pbVar3 = 0xc0;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x58) + 0x1000;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar3 + 0x40 & 0xff] * 0x10;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080ef450)[*pbVar3] * 0x10;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xb7) = 0;
  }
  return in_lr;
}

