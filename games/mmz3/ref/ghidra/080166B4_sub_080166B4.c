// sub_080166B4 at 0x080166B4 (thumb)

undefined4 sub_080166B4(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  sub_08003AB0(&UNK_087d5eb4 + (*(ushort *)(param_1 + 0x10) >> 2 & 7) * 0x14,0x4000);
  sub_08003E14(&UNK_087d5ec0 + (*(ushort *)(param_1 + 0x10) >> 2 & 7) * 0x14,0);
  sub_08009550(param_1,param_2);
  return in_lr;
}

