// sub_080DDAFC at 0x080DDAFC (thumb)

undefined4 sub_080DDAFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 0x10);
  iVar3 = sub_080DE178();
  *(uint *)(param_1 + 0x54) =
       *(int *)(&DAT_0834c3f8 + (uint)bVar2 * 8) +
       (uint)bVar1 * 0x200 * (8 - (uint)*(byte *)(iVar3 + 4));
  if (*(char *)(iVar3 + 9) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
  }
  return in_lr;
}

