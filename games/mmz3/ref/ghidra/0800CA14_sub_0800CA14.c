// sub_0800CA14 at 0x0800CA14 (thumb)

undefined4 sub_0800CA14(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = (&DAT_083386f5)[(uint)*(ushort *)(param_1 + 0x12) * 2];
  while ((ushort)bVar1 <= *(ushort *)(param_1 + 0x10)) {
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
    bVar1 = (&DAT_083386f5)[(uint)*(ushort *)(param_1 + 0x12) * 2];
  }
  sub_08003AB0(&UNK_087d5b94 +
               (uint)(byte)(&DAT_083386f4)[(uint)*(ushort *)(param_1 + 0x12) * 2] * 0x14,0x4000);
  sub_08003E14(&UNK_087d5ba0 +
               (uint)(byte)(&DAT_083386f4)[(uint)*(ushort *)(param_1 + 0x12) * 2] * 0x14,0);
  sub_08009550(param_1,param_2);
  return in_lr;
}

