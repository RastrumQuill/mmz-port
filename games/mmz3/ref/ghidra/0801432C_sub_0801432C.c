// sub_0801432C at 0x0801432C (thumb)

undefined4 sub_0801432C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 < 0x350) {
    iVar2 = iVar2 + -0xf0;
  }
  else {
    iVar2 = iVar2 + -0x4b0;
  }
  *(short *)(&DAT_020023cc + ((uVar1 << 0x10) >> 0x14)) = (short)(iVar2 >> 1);
  *(ushort *)((int)&DAT_020023cc + ((uVar1 & 0xffff) >> 4) * 4 + 2) =
       (short)*(undefined4 *)(param_1 + 0x38) + (*(ushort *)(param_1 + 0x10) >> 1);
  return in_lr;
}

