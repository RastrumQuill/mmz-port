// sub_0805F690 at 0x0805F690 (thumb)

undefined4 sub_0805F690(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  return in_lr;
}

