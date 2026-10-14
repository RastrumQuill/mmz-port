// sub_080801DC at 0x080801DC (thumb)

undefined4 sub_080801DC(int param_1,byte param_2)

{
  undefined4 in_lr;
  
  sub_08006E08(param_1 + 0x74,&DAT_08340940 + (uint)param_2 * 0x30);
  *(byte *)(param_1 + 0xb5) = param_2;
  return in_lr;
}

