// sub_08040014 at 0x08040014 (thumb)

undefined4 sub_08040014(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0xe2) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(undefined *)(param_1 + 0xe2) = 0;
  }
  sub_080128D4(param_1);
  if ((*(char *)(*(int *)(param_1 + 0xdc) + 0xd) == '\x01') && (*(char *)(param_1 + 0xe2) == '\0'))
  {
    *(undefined *)(param_1 + 0xe3) = 0;
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

