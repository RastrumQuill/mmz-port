// sub_08011520 at 0x08011520 (thumb)

undefined4 sub_08011520(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 3) {
    if (DAT_0202dad4 == '\a') {
      iVar1 = *(int *)(param_1 + 0x4c) + 2;
    }
    else if (DAT_0202dad4 == '\v') {
      iVar1 = *(int *)(param_1 + 0x4c) + -2;
    }
    else {
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
    iVar1 = *(int *)(param_1 + 0x50) + -2;
    *(int *)(param_1 + 0x50) = iVar1;
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    (&DAT_02000a0c)[uVar2 * 2] =
         (short)*(undefined4 *)(param_1 + 0x4c) +
         (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
    (&DAT_02000a0e)[uVar2 * 2] =
         (short)iVar1 + (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  }
  return in_lr;
}

