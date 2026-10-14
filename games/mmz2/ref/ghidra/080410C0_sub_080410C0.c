// sub_080410C0 at 0x080410C0 (thumb)

undefined4 sub_080410C0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa209);
    if (*(char *)(param_1 + 0xc0) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0xc4) + 0x54) + 0x7000 < *(int *)(param_1 + 0x54)) {
        cVar1 = '\x01';
      }
      else {
        cVar1 = '\x03';
      }
      *(char *)(param_1 + 0xc0) = cVar1;
      *(char *)(param_1 + 0xc2) = cVar1;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x11') {
    *(undefined2 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0xbe) + 4) * 4) + 0xbe) = 0x1d14;
  }
  uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x13;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

