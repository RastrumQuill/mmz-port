// sub_080B25FC at 0x080B25FC (thumb)

undefined4 sub_080B25FC(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  char local_18;
  char local_17;
  char local_16;
  undefined4 local_14;
  int local_10;
  
  sub_08128B5C(&local_18,&DAT_08129724,3);
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x200;
  pcVar1 = &DAT_08860188 +
           ((uint)*(byte *)(param_1 + 0xb9) * 4 + (uint)*(byte *)(param_1 + 0xb8) & 0xff);
  local_18 = *pcVar1 + local_18;
  local_17 = local_17 + *pcVar1;
  local_16 = local_16 + *pcVar1;
  sub_080BD0F0(&local_14,0x300,local_18);
  sub_080BD0F0(&local_14,0x300,local_17);
  sub_080BD0F0(&local_14,0x300,local_16);
  return in_lr;
}

