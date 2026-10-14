// sub_080A9D1C at 0x080A9D1C (thumb)

undefined4 sub_080A9D1C(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x6000);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368a68,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + -0x1500;
      uVar2 = 0xfffffb00;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + 0x1500;
      uVar2 = 0x500;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0x1700;
    iVar5 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + -0x1100;
      bVar1 = 0x60;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + 0x1100;
      bVar1 = 0x20;
    }
    pbVar3 = (byte *)(param_1 + 0xc0);
    *pbVar3 = bVar1;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + -0xe00;
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_080fe64c + ((*pbVar3 + 0x40) * 0x1000000 >> 0x17)) * 5;
    iVar5 = (short)(&DAT_080fe64c)[*pbVar3] * 5;
  }
  *(int *)(param_1 + 0x60) = iVar5;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080A9E8C(param_1);
  return in_lr;
}

