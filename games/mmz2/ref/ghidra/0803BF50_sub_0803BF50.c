// sub_0803BF50 at 0x0803BF50 (thumb)

undefined4 sub_0803BF50(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\a') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803BF88(param_1);
  }
  return in_lr;
}

