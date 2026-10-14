// sub_080111BC at 0x080111BC (thumb)

undefined4 sub_080111BC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08008814();
  uVar1 = sub_080EF2B8(*(undefined2 *)(param_1 + 0x68),9);
  sub_080027AC(&UNK_087fb1a4 + (uVar1 & 0xffff) * 0x14,0x4000);
  uVar1 = sub_080EF2B8(*(undefined2 *)(param_1 + 0x68),9);
  sub_08002AEC(&UNK_087fb1b0 + (uVar1 & 0xffff) * 0x14,0);
  return in_lr;
}

