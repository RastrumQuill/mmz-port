// sub_080666D4 at 0x080666D4 (thumb)

undefined4 sub_080666D4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6d04);
    sub_08006E08(param_1 + 0x74,&DAT_0833db44);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

