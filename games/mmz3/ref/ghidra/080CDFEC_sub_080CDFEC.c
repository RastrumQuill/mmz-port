// sub_080CDFEC at 0x080CDFEC (thumb)

undefined4 sub_080CDFEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x54);
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x54) =
       iVar1 + *(short *)((int)&DAT_080fe64c +
                         (((*(ushort *)(param_1 + 0xb4) >> 8) + 0x40) * 0x1000000 >> 0x17)) * 0x38;
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x1000;
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x58) = iVar1 + (short)(&DAT_080fe64c)[*(ushort *)(param_1 + 0xb4) >> 8] * 0x38
  ;
  return in_lr;
}

