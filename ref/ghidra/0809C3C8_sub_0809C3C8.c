// sub_0809C3C8 at 0x0809C3C8 (thumb)

undefined4 sub_0809C3C8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  iVar4 = *(int *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if ((bVar1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 0x4c) = iVar4;
  sub_08088120(param_1);
  sub_080033F0(param_1 + 0x6c,(&DAT_082b5168)[*(byte *)(param_1 + 0x10)]);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b516c + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_0809C488(param_1);
  return in_lr;
}

