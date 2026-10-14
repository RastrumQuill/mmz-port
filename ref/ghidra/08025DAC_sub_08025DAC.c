// sub_08025DAC at 0x08025DAC (thumb)

undefined4 sub_08025DAC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(param_1 + 9)] + 4);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 0x19d);
  *(byte *)(param_1 + 0x12) = bVar1;
  sub_08025BE4(param_1);
  sub_08025C54(param_1,*(undefined2 *)(&DAT_082aa1e4 + (uint)bVar1 * 2));
  sub_08025F64(param_1);
  return in_lr;
}

