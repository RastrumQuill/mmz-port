// sub_0809B830 at 0x0809B830 (thumb)

undefined4 sub_0809B830(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  uVar6 = (uint)*(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x19;
  bVar1 = (&DAT_0885de2c)[uVar6];
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = bVar1 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar3 << 4);
  bVar1 = (&DAT_0885de30)[uVar6];
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar3 = bVar1 & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar3;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar3 << 5);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar5 + 0x1c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885dcd0,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = 0;
  do {
    sub_0809B7A8(param_1,param_1 + 0x54,uVar6,uVar3 & 0xff);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 5);
  sub_0809BA58(param_1);
  return in_lr;
}

