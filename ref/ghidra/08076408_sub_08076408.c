// sub_08076408 at 0x08076408 (thumb)

undefined4 sub_08076408(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if ((*(ushort *)(param_1 + 0x1a) & 4) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
    if (*(char *)(iVar1 + 8) == '\0') {
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
      if (*(char *)(iVar1 + 0x11e) == '\0') {
        sub_08001EAC(0x89);
        sub_080754EC(*(undefined4 *)(iVar2 + 0x20));
      }
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfa;
    }
  }
  return in_lr;
}

