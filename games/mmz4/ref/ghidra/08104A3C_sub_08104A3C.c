// sub_08104A3C at 0x08104A3C (thumb)

undefined4 sub_08104A3C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\x01') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(undefined *)(param_1 + 0xb4) = 0;
      sub_08005784(param_1 + 0x74,&DAT_08868c20);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_08868c38);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(char *)(*(int *)(param_1 + 0x2c) + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xb5) = 1;
    }
    *(undefined *)(param_1 + 0xb5) = 0;
  }
  return in_lr;
}

