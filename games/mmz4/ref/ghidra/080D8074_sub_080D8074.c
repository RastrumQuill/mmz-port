// sub_080D8074 at 0x080D8074 (thumb)

undefined4 sub_080D8074(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined auStack_24 [4];
  undefined4 local_20 [2];
  
  sub_08128B5C(auStack_24,&DAT_08129b64,2);
  local_20[0] = 0x1d1a;
  local_20[1] = 0x1d1b;
  uVar6 = (uint)*(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar5 = bVar2 & 1;
  uVar7 = bVar2 >> 1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = ((uVar5 + uVar6 & 1) * 2 + -1) * 0x40;
  uVar3 = uVar7 + 1 & 1;
  *(uint *)(param_1 + 0x60) = uVar3 * -0x300;
  *(undefined *)(param_1 + 0x12) = 0x3c;
  *(undefined *)(param_1 + 0x13) = 1;
  sub_0801CC9C(param_1,uVar3,0);
  sub_0801CF00(param_1,*(undefined2 *)(local_20 + uVar6));
  *(undefined *)(param_1 + 0x25) = auStack_24[uVar6];
  if ((bVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar5 << 4);
  if ((bVar2 >> 1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar7;
  *pbVar4 = *pbVar4 & 0xdf | (byte)(uVar7 << 5);
  sub_080D831C(param_1);
  return in_lr;
}

