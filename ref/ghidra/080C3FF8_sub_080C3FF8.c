// sub_080C3FF8 at 0x080C3FF8 (thumb)

undefined2 sub_080C3FF8(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x195);
  if (0x3b < *(byte *)(param_1 + 0x19a)) {
    uVar1 = uVar1 + 1;
  }
  if (99 < *(byte *)(param_1 + 0x19b)) {
    uVar1 = uVar1 + 1;
  }
  return *(undefined2 *)(&DAT_082cc15a + uVar1 * 2);
}

