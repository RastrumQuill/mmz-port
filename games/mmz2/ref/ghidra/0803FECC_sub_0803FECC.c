// sub_0803FECC at 0x0803FECC (thumb)

undefined4 sub_0803FECC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe0) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0xc0;
  if (*(int *)(param_1 + 0x54) + 0xf000 < 0x393001) {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (0x47 < bVar1) {
      *(undefined *)(param_1 + 0xe0) = 0;
    }
    if (*(byte *)(param_1 + 0x12) < 0x61) {
      return in_lr;
    }
    cVar2 = *(char *)(*(int *)(param_1 + 0xd4) + 0x71);
    if (cVar2 != '\0') {
      return in_lr;
    }
  }
  else {
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xe0) = 0;
  }
  *(undefined *)(param_1 + 0xd) = 2;
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

