// sub_08028F5C at 0x08028F5C (thumb)

undefined4 sub_08028F5C(int param_1)

{
  undefined4 in_lr;
  
  sub_0803325C();
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(ushort *)(param_1 + 0xe) = (ushort)*(byte *)(param_1 + 0xf) << 8 | 1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  DAT_030032e0 = DAT_030032e0 | 1;
  return in_lr;
}

