// sub_080B914C at 0x080B914C (thumb)

undefined4 sub_080B914C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 0x10);
  iVar3 = sub_080B9B78();
  *(uint *)(param_1 + 0x4c) =
       *(int *)(&DAT_082b86c4 + (uint)bVar2 * 8) + (uint)bVar1 * 0x200 * (uint)*(byte *)(iVar3 + 6);
  if (*(char *)(iVar3 + 1) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
      sub_080033F0(param_1 + 0x6c,
                   (&DAT_082b8688)
                   [(uint)*(byte *)(*(int *)(iVar3 + 0x10) + 0x18a + (uint)bVar2) * 2]);
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

