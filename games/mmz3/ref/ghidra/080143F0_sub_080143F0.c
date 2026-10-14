// sub_080143F0 at 0x080143F0 (thumb)

undefined4 sub_080143F0(int param_1)

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
  *(short *)(&DAT_020023cc + ((uVar1 << 0x10) >> 0x14)) = (short)(iVar2 >> 2);
  *(ushort *)((int)&DAT_020023cc + ((uVar1 & 0xffff) >> 4) * 4 + 2) =
       (short)*(undefined4 *)(param_1 + 0x38) + (*(ushort *)(param_1 + 0x10) >> 2);
  return in_lr;
}

