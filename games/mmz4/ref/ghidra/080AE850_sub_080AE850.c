// sub_080AE850 at 0x080AE850 (thumb)

undefined4 sub_080AE850(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

