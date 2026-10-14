// sub_0800BD80 at 0x0800BD80 (thumb)

undefined4 sub_0800BD80(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar1) = (short)*(undefined4 *)(param_1 + 0x34);
  *(ushort *)((int)&DAT_020023cc + uVar1 * 4 + 2) = *(ushort *)(param_1 + 0x10) >> 2;
  uVar1 = sub_080FE4D8(*(ushort *)(param_1 + 0x12) >> 3,6);
  sub_08003AB0(&UNK_087d610c + (uint)(byte)(&DAT_083379d8)[uVar1 & 0xffff] * 0x14,0x4000);
  uVar1 = sub_080FE4D8(*(ushort *)(param_1 + 0x12) >> 3,6);
  sub_08003E14(&UNK_087d6118 + (uint)(byte)(&DAT_083379d8)[uVar1 & 0xffff] * 0x14,0);
  return in_lr;
}

