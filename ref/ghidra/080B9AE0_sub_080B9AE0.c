// sub_080B9AE0 at 0x080B9AE0 (thumb)

undefined4 sub_080B9AE0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  iVar2 = sub_080B4634((uint)bVar1,*(undefined *)(param_1 + 0x13));
  puVar3 = (undefined4 *)(((iVar2 << 0x18) >> 0x15) + *(int *)(&DAT_082b7830 + (uint)bVar1 * 4));
  *(undefined4 *)(param_1 + 0x4c) = *puVar3;
  *(undefined4 *)(param_1 + 0x50) = puVar3[1];
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b87fc + (uint)*(byte *)(param_1 + 0x11) * 4));
  return in_lr;
}

