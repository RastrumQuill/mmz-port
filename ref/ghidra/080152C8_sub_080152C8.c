// sub_080152C8 at 0x080152C8 (thumb)

longlong sub_080152C8(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(uint *)(iVar1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  else {
    *(uint *)(param_1 + 0x150) =
         *(uint *)(iVar1 + 4) & 0xffff | (uint)*(byte *)(iVar1 + 1) << 0x10 |
         (uint)*(ushort *)(iVar1 + 2) << 0x18;
  }
  return (ulonglong)in_lr << 0x20;
}

