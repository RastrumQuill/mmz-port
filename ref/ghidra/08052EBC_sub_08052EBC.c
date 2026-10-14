// sub_08052EBC at 0x08052EBC (thumb)

void sub_08052EBC(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  *(int *)(iVar2 + 0xc0) = *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar2 + 0x4c);
  puVar1 = (uint *)(iVar2 + 0xb8);
  *puVar1 = 0;
  if ((*(ushort *)(iVar2 + 0x90) & 0x1000) != 0) {
    *puVar1 = 1;
  }
  if ((*(ushort *)(iVar2 + 0x90) & 0x800) != 0) {
    *puVar1 = *puVar1 | 2;
  }
  return;
}

