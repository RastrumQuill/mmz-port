// sub_0808E538 at 0x0808E538 (thumb)

undefined4 sub_0808E538(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x1c;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffdf6;
    if (*(char *)(param_1 + 0x10) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    *(undefined4 *)(param_1 + 0x68) = 7;
    *(undefined4 *)(param_1 + 0x60) = 0x150;
    sub_080127E4(param_1,0x7608);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

