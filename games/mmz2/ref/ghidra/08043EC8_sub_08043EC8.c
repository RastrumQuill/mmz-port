// sub_08043EC8 at 0x08043EC8 (thumb)

undefined4 sub_08043EC8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa302);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x80;
    }
    else {
      uVar1 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = 0xfffff980;
    *(undefined *)(param_1 + 0xb6) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_08044FAC(param_1,0x1000);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_08044EA4(param_1,0);
  if (-0x401 < *(int *)(param_1 + 0x60)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

