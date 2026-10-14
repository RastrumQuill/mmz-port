// sub_0801BF54 at 0x0801BF54 (thumb)

undefined4 sub_0801BF54(int param_1)

{
  undefined4 in_lr;
  
  sub_08002B10(0x76);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 8;
  DAT_02000a42 = 0x1000;
  DAT_0202dad5 = DAT_0202dad5 + '\x01';
  return in_lr;
}

