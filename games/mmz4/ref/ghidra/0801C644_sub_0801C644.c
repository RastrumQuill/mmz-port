// sub_0801C644 at 0x0801C644 (thumb)

undefined4 sub_0801C644(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08128A24(DAT_0202dad8,9);
  sub_08001EA4(&UNK_08fa4d4c + (uVar1 & 0xff) * 0x14,0x4000);
  uVar1 = sub_08128A24(DAT_0202dad8,9);
  sub_08002208(&UNK_08fa4d58 + (uVar1 & 0xff) * 0x14,0);
  return in_lr;
}

