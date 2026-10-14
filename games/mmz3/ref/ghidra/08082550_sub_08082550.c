// sub_08082550 at 0x08082550 (thumb)

undefined4 sub_08082550(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0x24) = param_2 - 0x40;
    iVar1 = *(int *)(param_1 + 0x54);
    *(int *)(iVar2 + 0x54) = iVar1;
    *(int *)(iVar2 + 0x54) =
         iVar1 + *(short *)((int)&DAT_080fe64c + ((param_2 + 0x40) * 0x1000000 >> 0x17)) * 0x11;
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(iVar2 + 0x58) = iVar1;
    *(int *)(iVar2 + 0x58) = iVar1 + (short)(&DAT_080fe64c)[param_2] * 0x11;
  }
  return in_lr;
}

