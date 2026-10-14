// sub_08040BC8 at 0x08040BC8 (thumb)

undefined4 sub_08040BC8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa208);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(byte *)(param_1 + 0xbd) < 6) {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0xe;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

