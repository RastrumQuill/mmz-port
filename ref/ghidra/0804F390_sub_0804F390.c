// sub_0804F390 at 0x0804F390 (thumb)

undefined4 sub_0804F390(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    if ((*(char *)(iVar2 + 0x10) != '\x02') && (iVar1 = *(int *)(iVar2 + 0x24), iVar1 != 0)) {
      *(byte *)(iVar1 + 0x41) = *(byte *)(iVar1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(iVar1 + 0x1e) = 0xd;
    }
    *(int *)(iVar2 + 0xbc) = *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar2 + 0x4c);
  }
  return in_lr;
}

