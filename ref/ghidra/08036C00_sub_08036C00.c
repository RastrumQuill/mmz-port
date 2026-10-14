// sub_08036C00 at 0x08036C00 (thumb)

undefined4 sub_08036C00(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    sub_08001EAC(0x8f);
  }
  *(bool *)(iVar1 + 0xcf) = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar1 + 0x4c);
  return in_lr;
}

