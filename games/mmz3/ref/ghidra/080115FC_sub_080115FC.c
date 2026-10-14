// sub_080115FC at 0x080115FC (thumb)

undefined4 sub_080115FC(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080FE4D8(*(ushort *)(param_1 + 0x10) >> 3,6);
  sub_08003AB0(&UNK_087d5f54 + (uVar1 & 0xffff) * 0x14,0x4000);
  uVar1 = sub_080FE4D8(*(ushort *)(param_1 + 0x10) >> 3,6);
  sub_08003E14(&UNK_087d5f60 + (uVar1 & 0xffff) * 0x14,0);
  sub_08009550(param_1,param_2);
  return in_lr;
}

