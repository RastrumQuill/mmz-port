// sub_080C6A2C at 0x080C6A2C (thumb)

undefined4 sub_080C6A2C(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(iVar3 + 10) << 0x18;
  uVar7 = uVar4 >> 0x1c & 1;
  uVar4 = uVar4 >> 0x1d & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  sub_08017700(param_1,0xdc06);
  if (uVar7 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | (byte)(uVar7 << 4);
  if (uVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *pbVar6 = *pbVar6 & 0xdf | (byte)(uVar4 << 5);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
  bVar1 = (byte)(*(char *)(iVar3 + 0xf) - 1U) < 2;
  *(bool *)(param_1 + 0x13) = bVar1;
  uVar5 = 0;
  if (bVar1) {
    uVar5 = *(undefined4 *)(iVar3 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined *)(param_1 + 0x12) = 0x16;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C69BC(param_1);
  return in_lr;
}

