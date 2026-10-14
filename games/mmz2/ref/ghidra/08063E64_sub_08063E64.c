// sub_08063E64 at 0x08063E64 (thumb)

undefined4 sub_08063E64(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x2200);
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(short *)(param_1 + 0xbe) == 0) {
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

