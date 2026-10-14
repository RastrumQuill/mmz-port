// sub_08013ED0 at 0x08013ED0 (thumb)

undefined4 sub_08013ED0(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if (DAT_0202f4a4 == '\0') {
    sub_08003AB0(&DAT_087d60a8,0x4000);
    sub_08003E14(&DAT_087d60b4,0);
  }
  else {
    sub_08003AB0(&UNK_087d60bc + (*(ushort *)(param_1 + 0x10) >> 2 & 3) * 0x14,0x4000);
    sub_08003E14(&UNK_087d60c8 + (*(ushort *)(param_1 + 0x10) >> 2 & 3) * 0x14,0);
  }
  sub_08009550(param_1,param_2);
  return in_lr;
}

