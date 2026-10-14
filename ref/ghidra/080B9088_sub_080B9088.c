// sub_080B9088 at 0x080B9088 (thumb)

undefined4 sub_080B9088(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 0x10);
  iVar3 = sub_080B9B78();
  *(uint *)(param_1 + 0x4c) =
       *(int *)(&DAT_082b86c4 + (uint)bVar2 * 8) +
       (uint)bVar1 * 0x200 * (8 - (uint)*(byte *)(iVar3 + 6));
  if (*(char *)(iVar3 + 2) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
  }
  return in_lr;
}

