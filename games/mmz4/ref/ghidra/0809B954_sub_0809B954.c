// sub_0809B954 at 0x0809B954 (thumb)

undefined4 sub_0809B954(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb4) = 1;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x19;
  bVar3 = (&DAT_0885de2c)[bVar1];
  if (bVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = bVar3 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)(uVar4 << 4);
  bVar1 = (&DAT_0885de30)[bVar1];
  if (bVar1 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar4 = bVar1 & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar4 << 5);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar6 + 0x1c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885dcd0,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_0809BA58(param_1);
  return in_lr;
}

