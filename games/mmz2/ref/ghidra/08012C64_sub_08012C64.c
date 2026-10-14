// sub_08012C64 at 0x08012C64 (thumb)

ulonglong sub_08012C64(int param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
    puVar1 = &DAT_0202e390;
  }
  else {
    puVar1 = (undefined2 *)&DAT_0202e190;
  }
  return CONCAT44(in_lr,(uint)(ushort)puVar1[*(byte *)(param_1 + 0x1e)] +
                        (uint)*(byte *)(param_1 + 0x22)) & 0xffffffff000000ff;
}

