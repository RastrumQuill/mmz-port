// sub_080B93A8 at 0x080B93A8 (thumb)

undefined4 sub_080B93A8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  iVar2 = sub_080B9B78();
  *(uint *)(param_1 + 0x4c) = (uint)bVar1 * 0x200 * (uint)*(byte *)(iVar2 + 6) + 0x3400;
  if (*(char *)(iVar2 + 1) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
      sub_080033F0(param_1 + 0x6c,
                   (&DAT_082b8690)[(uint)*(byte *)(*(int *)(iVar2 + 0x10) + 0x19d) * 2]);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  return in_lr;
}

