// sub_0802B9AC at 0x0802B9AC (thumb)

void sub_0802B9AC(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(iVar1 + 0xb8) = *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar1 + 0x4c);
    *(undefined *)(iVar1 + 0xd6) = 0;
    if (((*(ushort *)(param_1 + 0x1c) & 0x800) != 0) || ((*(byte *)(param_1 + 0x23) & 0xf) == 3)) {
      *(undefined *)(iVar1 + 0xd6) = 1;
    }
  }
  return;
}

