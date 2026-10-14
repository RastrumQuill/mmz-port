// sub_0803A904 at 0x0803A904 (thumb)

undefined4 sub_0803A904(uint param_1,int param_2)

{
  undefined4 in_lr;
  
  sub_081284E4(&UNK_088501cc + ((uint)(param_2 << 0x10) >> 0xb),
               &DAT_03002cc0 + (uint)(byte)(&DAT_088501c8)[param_1 & 0xffff] * 0x20,8);
  return in_lr;
}

