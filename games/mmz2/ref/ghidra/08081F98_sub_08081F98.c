// sub_08081F98 at 0x08081F98 (thumb)

undefined4 sub_08081F98(int param_1,byte param_2)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb4) = param_2;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08340d08 + (uint)param_2 * 0x30);
  }
  else {
    sub_08006E08(param_1 + 0x74,&DAT_08340fd8);
  }
  return in_lr;
}

