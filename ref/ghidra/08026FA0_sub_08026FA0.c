// sub_08026FA0 at 0x08026FA0 (thumb)

undefined4 sub_08026FA0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == (&DAT_082aa45c)[*(byte *)(param_1 + 0x10)]) &&
     (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_08026FD8(param_1);
  }
  return in_lr;
}

