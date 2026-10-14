// sub_08020D94 at 0x08020D94 (thumb)

undefined4 sub_08020D94(int param_1)

{
  undefined4 in_lr;
  
  sub_08016F5C();
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(ushort *)(param_1 + 0xe) = (ushort)*(byte *)(param_1 + 0xf) << 8 | 1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  DAT_02004fa0 = DAT_02004fa0 | 1;
  return in_lr;
}

