// sub_080C3FD8 at 0x080C3FD8 (thumb)

undefined2 sub_080C3FD8(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x194);
  if (199 < *(byte *)(param_1 + 0x198)) {
    uVar1 = uVar1 + 1;
  }
  return *(undefined2 *)(&DAT_082cc152 + uVar1 * 2);
}

