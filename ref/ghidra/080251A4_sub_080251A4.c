// sub_080251A4 at 0x080251A4 (thumb)

undefined4 sub_080251A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08018580(param_1);
    sub_080186CC(param_1);
  }
  return in_lr;
}

