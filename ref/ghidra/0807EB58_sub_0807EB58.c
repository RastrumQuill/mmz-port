// sub_0807EB58 at 0x0807EB58 (thumb)

undefined4 sub_0807EB58(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  bool bVar6;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b25ec,param_1 + 0x4c,0);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,0);
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(iVar3 + 0x4c);
  iVar5 = *(int *)(iVar3 + 0x50);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  bVar6 = (bVar1 & 1) == 0;
  *(bool *)(param_1 + 0x44) = bVar6;
  if (bVar6) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar3 = -1;
  if ((bVar1 & 1) != 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x4c) = iVar4 + iVar3 * 0x2100;
  *(int *)(param_1 + 0x50) = iVar5 + -0xe00;
  *(int *)(param_1 + 0x54) = iVar3 << 10;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(int *)(param_1 + 0x5c) = iVar3 * -0x40;
  return in_lr;
}

