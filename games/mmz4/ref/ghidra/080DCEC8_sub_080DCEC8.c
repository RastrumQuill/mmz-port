// sub_080DCEC8 at 0x080DCEC8 (thumb)

undefined4 sub_080DCEC8(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  sub_0801CFF0();
  cVar1 = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar3 = sub_08007C7C(iVar4,*(undefined4 *)(param_1 + 0x58));
  if (sVar3 != 0) {
    *(int *)(param_1 + 0x5c) = -(*(int *)(param_1 + 0x5c) >> 1);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  pbVar6 = (byte *)(param_1 + 0x7d);
  if ((0x40 < *(int *)(param_1 + 0x60)) &&
     (sVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar3 != 0)) {
    uVar5 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(int *)(param_1 + 0x60) = -(*(int *)(param_1 + 0x60) >> 1);
    *pbVar6 = *pbVar6 + 1;
  }
  if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (2 < *pbVar6) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DC9FC(param_1);
  }
  return in_lr;
}

