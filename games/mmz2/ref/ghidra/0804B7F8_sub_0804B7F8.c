// sub_0804B7F8 at 0x0804B7F8 (thumb)

undefined4 sub_0804B7F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa113);
    sub_08003338((int)*(short *)(param_1 + 0xc0));
    *(short *)(param_1 + 0xc0) = -1;
    *(undefined *)(param_1 + 0xdc) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  return in_lr;
}

