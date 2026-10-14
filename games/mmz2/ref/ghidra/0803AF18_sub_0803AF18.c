// sub_0803AF18 at 0x0803AF18 (thumb)

undefined4 sub_0803AF18(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080126A0(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined *)(param_1 + 0x22) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0x1d);
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)(bVar1 & 1);
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)((bVar1 & 1) << 4);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar3 = -1;
    if ((bVar1 & 1) != 0) {
      iVar3 = 1;
    }
    iVar4 = *(int *)(iVar6 + 0x58);
    *(int *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + iVar3 * 0x2200;
    *(int *)(param_1 + 0x58) = iVar4 + -0x1400;
    *(int *)(param_1 + 0x5c) = iVar3 << 10;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 100) = iVar3 * -0x55;
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08337ad0,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x803b4d5;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *pbVar5 = *pbVar5 & 0xdf | 0x20;
  }
  sub_0803B048(param_1);
  return in_lr;
}

