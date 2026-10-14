// sub_0801BE50 at 0x0801BE50 (thumb)

undefined4 sub_0801BE50(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  if (DAT_0202cab2 != 0) {
    sub_081284E4(&DAT_08b4d778,
                 ((ushort)(&DAT_02000a04)[(uVar1 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x6000000,0x200);
    local_24[0] = 0;
    sub_081284E4(local_24,&DAT_06000800 +
                          ((ushort)(&DAT_02000a04)[(uVar1 << 0x10) >> 0x14] & 0x1f00) * 8,0x1000200)
    ;
  }
  if (DAT_0202dad5 == '\a') {
    iVar2 = *(int *)(param_1 + 0x4c) + 2;
  }
  else if (DAT_0202dad5 == '\v') {
    iVar2 = *(int *)(param_1 + 0x4c) + -2;
  }
  else {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar2 = *(int *)(param_1 + 0x50) + -2;
  *(int *)(param_1 + 0x50) = iVar2;
  uVar1 = (uVar1 & 0xffff) >> 4;
  (&DAT_02000a0c)[uVar1 * 2] =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  (&DAT_02000a0e)[uVar1 * 2] =
       (short)iVar2 + (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  return in_lr;
}

