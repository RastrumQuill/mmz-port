// sub_08077B14 at 0x08077B14 (thumb)

undefined4 sub_08077B14(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_080128D4(param_1);
  return in_lr;
}

