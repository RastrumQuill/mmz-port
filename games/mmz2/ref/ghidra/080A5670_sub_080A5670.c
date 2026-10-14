// sub_080A5670 at 0x080A5670 (thumb)

undefined4 sub_080A5670(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 2;
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar3 = bVar3 & 0xef | 2;
  }
  else {
    bVar3 = bVar3 | 0x12;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08344f0c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar4 = *(undefined4 *)(iVar6 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1200;
    uVar2 = 0xfffc;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1200;
    uVar2 = 4;
  }
  *(undefined2 *)(param_1 + 0xbc) = uVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x300;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 9;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_080A5558(param_1);
  return in_lr;
}

