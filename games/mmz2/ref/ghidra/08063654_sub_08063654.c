// sub_08063654 at 0x08063654 (thumb)

undefined4 sub_08063654(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x2503);
    sub_08003338((int)*(short *)(param_1 + 0xd0));
    *(short *)(param_1 + 0xd0) = -1;
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

