// sub_08047404 at 0x08047404 (thumb)

undefined4 sub_08047404(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa50d);
    sub_08006E08(param_1 + 0x74,&DAT_0833aa94);
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x11) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}

