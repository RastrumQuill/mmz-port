// sub_0805D574 at 0x0805D574 (thumb)

undefined4 sub_0805D574(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xbe) = 4;
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_080032EC(0x75);
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

