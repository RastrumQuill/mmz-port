// sub_0805495C at 0x0805495C (thumb)

undefined4 sub_0805495C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080032EC(0x94);
    sub_080127E4(param_1,0xa616);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
    *(undefined *)(param_1 + 0x12) = 0x1b;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if ((*(byte *)(param_1 + 10) >> 4 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0xb8) + 0x1000;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xb8) + 0xbfff;
    }
    *(int *)(param_1 + 0x54) = iVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

