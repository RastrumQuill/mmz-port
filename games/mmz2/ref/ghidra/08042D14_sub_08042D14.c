// sub_08042D14 at 0x08042D14 (thumb)

undefined4 sub_08042D14(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa311);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  uVar1 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

