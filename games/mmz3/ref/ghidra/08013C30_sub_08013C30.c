// sub_08013C30 at 0x08013C30 (thumb)

undefined4 sub_08013C30(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  uVar1 = (uint)DAT_0202e48c >> 8;
  uVar2 = (uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14;
  *(short *)(&DAT_020023cc + uVar2) = (short)*(undefined4 *)(param_1 + 0x34);
  *(short *)((int)&DAT_020023cc + uVar2 * 4 + 2) = ((short)uVar3 - (short)uVar1) + 5;
  sub_08003AB0(&UNK_087d6044 + (uint)(*(ushort *)(param_1 + 0x10) >> 2) * 0x14,0x4000);
  sub_08003E14(&UNK_087d6050 + (uint)(*(ushort *)(param_1 + 0x10) >> 2) * 0x14,0);
  return in_lr;
}

