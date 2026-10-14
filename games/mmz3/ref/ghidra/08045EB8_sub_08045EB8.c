// sub_08045EB8 at 0x08045EB8 (thumb)

undefined4 sub_08045EB8(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) && (*(char *)(iVar2 + 0x10) == '\x01')) {
    psVar1 = (short *)(*(int *)(iVar2 + 0x28) + 0xa4);
    *psVar1 = *psVar1 + -0x60 + *(short *)(iVar2 + 0xa4);
    *(short *)(iVar2 + 0xa4) = 0x60;
  }
  return in_lr;
}

