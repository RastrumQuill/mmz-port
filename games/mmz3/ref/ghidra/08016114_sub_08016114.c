// sub_08016114 at 0x08016114 (thumb)

undefined4 sub_08016114(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if (DAT_0202f4a6 == '\0') {
    sub_08003AB0(&DAT_087d679c,0x4000);
    sub_08003E14(&DAT_087d67a8,0);
  }
  else {
    sub_08003AB0(&UNK_087d67b0 + (*(ushort *)(param_1 + 0x10) >> 2 & 3) * 0x14,0x4000);
    sub_08003E14(&UNK_087d67bc + (*(ushort *)(param_1 + 0x10) >> 2 & 3) * 0x14,0);
  }
  sub_08009550(param_1,param_2);
  return in_lr;
}

