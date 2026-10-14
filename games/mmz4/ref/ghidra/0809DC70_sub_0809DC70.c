// sub_0809DC70 at 0x0809DC70 (thumb)

undefined4 sub_0809DC70(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x6e05);
    if (*(int *)(DAT_0202dbf0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0xbc) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xbc) = 1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(int *)(param_1 + 0xc0) == 0) {
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 - 1;
    if ((bVar1 & 1) == 0) {
      pbVar4 = (byte *)(param_1 + 0xbc);
      sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                           *(int *)(&DAT_0885e010 + (uint)*pbVar4 * 8) * 0x100,
                           *(int *)(param_1 + 0x58) + -0x800);
      if ((sVar3 == 0) &&
         (sVar3 = sub_08007C7C(*(int *)(param_1 + 0x54) +
                               *(int *)(&DAT_0885e010 + (uint)*pbVar4 * 8) * 0x100,
                               *(int *)(param_1 + 0x58) + 0x800), sVar3 != 0)) {
        *(int *)(param_1 + 0x54) =
             *(int *)(param_1 + 0x54) + *(int *)(&DAT_0885e014 + (uint)*pbVar4 * 8) * 0x100;
      }
    }
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xbd) = 1;
      if (*(byte *)(param_1 + 0x12) < 8) {
        cVar2 = '\b';
      }
      else {
        cVar2 = *(byte *)(param_1 + 0x12) - 8;
      }
      *(char *)(param_1 + 0x12) = cVar2;
    }
  }
  return in_lr;
}

