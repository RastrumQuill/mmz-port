// sub_0801C480 at 0x0801C480 (thumb)

longlong sub_0801C480(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = (uint)*(byte *)(iVar1 + 1) * 0x10;
  if (*(int *)(param_1 + 0x10 + iVar2) != 0) {
    *(short *)(param_1 + 0x1a + *(short *)(iVar1 + 2) * 2 + iVar2) =
         (short)*(undefined4 *)(iVar1 + 4);
  }
  return (ulonglong)in_lr << 0x20;
}

