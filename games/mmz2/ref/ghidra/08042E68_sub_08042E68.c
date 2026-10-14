// sub_08042E68 at 0x08042E68 (thumb)

undefined4 sub_08042E68(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xc1) = 1;
    sub_080127E4(param_1,0xa302);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    *(undefined *)(param_1 + 0xb6) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  uVar1 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_08044EA4(param_1,0);
  if (-1 < *(int *)(param_1 + 0x60)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

