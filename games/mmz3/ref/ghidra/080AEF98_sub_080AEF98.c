// sub_080AEF98 at 0x080AEF98 (thumb)

undefined4 sub_080AEF98(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  bool bVar6;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08369b20,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08017700(param_1,0x8600);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(iVar3 + 0x54);
  iVar4 = *(int *)(iVar3 + 0x58);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  bVar6 = (bVar1 & 1) == 0;
  if (bVar6) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar6 << 4;
  iVar3 = -1;
  if ((bVar1 & 1) != 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x54) = iVar5 + iVar3 * 0x2100;
  *(int *)(param_1 + 0x58) = iVar4 + -0xe00;
  *(int *)(param_1 + 0x5c) = iVar3 << 10;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 100) = iVar3 * -0x40;
  return in_lr;
}

