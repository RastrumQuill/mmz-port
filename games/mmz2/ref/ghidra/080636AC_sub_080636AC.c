// sub_080636AC at 0x080636AC (thumb)

undefined4 sub_080636AC(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x2500);
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0xbf) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(short *)(param_1 + 0xbe) == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

