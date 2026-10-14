// sub_08064F4C at 0x08064F4C (thumb)

undefined4 sub_08064F4C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad0e);
    sub_08006E08(param_1 + 0x74,&DAT_0833d778);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

