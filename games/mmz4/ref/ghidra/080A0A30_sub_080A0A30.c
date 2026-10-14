// sub_080A0A30 at 0x080A0A30 (thumb)

undefined4 sub_080A0A30(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar6 = *(undefined4 *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58) + 0x800;
  sVar3 = sub_08007C7C(uVar6,iVar5);
  if (sVar3 != 0) {
    uVar6 = sub_08008534(uVar6,iVar5);
    *(undefined4 *)(param_1 + 0x58) = uVar6;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0x30;
  sub_0801CC9C(param_1);
  *(undefined *)(param_1 + 0x25) = 0x19;
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  uVar4 = bVar1 & 1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885e4e0,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080A0B04(param_1);
  return in_lr;
}

