// sub_08022FBC at 0x08022FBC (thumb)

longlong sub_08022FBC(int param_1)

{
  int iVar1;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(uint *)(iVar1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    DAT_020023c0 = DAT_020023c0 & 0xfeff;
  }
  else {
    *(uint *)(param_1 + 0x150) =
         *(uint *)(iVar1 + 4) & 0xffff | (uint)*(byte *)(iVar1 + 1) << 0x10 |
         (int)*(short *)(iVar1 + 2) << 0x18;
    DAT_020023c0 = DAT_020023c0 | 0x100;
  }
  return (ulonglong)in_lr << 0x20;
}

