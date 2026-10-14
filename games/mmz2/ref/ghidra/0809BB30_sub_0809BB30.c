// sub_0809BB30 at 0x0809BB30 (thumb)

undefined4 sub_0809BB30(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1704);
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343814,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = -0x2e00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
    iVar3 = *(int *)(param_1 + 0x54);
    iVar4 = 0x2e00;
  }
  *(int *)(param_1 + 0x54) = iVar3 + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1300;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809BC0C(param_1);
  return in_lr;
}

