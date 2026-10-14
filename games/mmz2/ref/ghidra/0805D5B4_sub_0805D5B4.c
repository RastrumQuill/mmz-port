// sub_0805D5B4 at 0x0805D5B4 (thumb)

undefined4 sub_0805D5B4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xbe) = 5;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xc0) = 0x60;
    *(undefined *)(param_1 + 0xc1) = 0x20;
    *(undefined *)(param_1 + 0xc2) = 0x40;
    *(undefined *)(param_1 + 0xc3) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

