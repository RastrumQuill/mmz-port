// sub_080115D0 at 0x080115D0 (thumb)

undefined4 sub_080115D0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 8;
  DAT_02000a42 = 0x1000;
  sub_08002B10(0x76);
  DAT_0202dad4 = DAT_0202dad4 + '\x01';
  return in_lr;
}

