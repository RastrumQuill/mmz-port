// sub_0804274C at 0x0804274C (thumb)

undefined4 sub_0804274C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x71) == '\x05') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

