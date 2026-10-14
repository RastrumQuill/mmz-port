// sub_080C5670 at 0x080C5670 (thumb)

undefined4 sub_080C5670(int param_1)

{
  undefined4 in_lr;
  
  sub_080C55F0();
  if (*(char *)(param_1 + 0x9f6) < '\0') {
    *(undefined *)(param_1 + 0x9e8) = 0;
    *(undefined2 *)(param_1 + 4) = 4;
  }
  return in_lr;
}

