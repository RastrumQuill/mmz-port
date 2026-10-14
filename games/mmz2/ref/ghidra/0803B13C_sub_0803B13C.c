// sub_0803B13C at 0x0803B13C (thumb)

undefined4 sub_0803B13C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0803B414(param_1);
  }
  if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_080032EC(0x13);
  }
  return in_lr;
}

