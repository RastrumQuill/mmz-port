// sub_0800A5C8 at 0x0800A5C8 (thumb)

undefined4 sub_0800A5C8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 3;
  if ((*(char *)(param_1 + 0x68) == '\0') && ((DAT_02022ad4 & 0x20) != 0)) {
    sub_080067C4(0x15,4,&DAT_082948a6);
    *(char *)(param_1 + 0x68) = '\x01';
  }
  return in_lr;
}

