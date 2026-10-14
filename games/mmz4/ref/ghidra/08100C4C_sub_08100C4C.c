// sub_08100C4C at 0x08100C4C (thumb)

undefined4 sub_08100C4C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '<') && (*(char *)(param_1 + 0xb8) != -0x80)) {
    *(char *)(param_1 + 0xb8) = -0x80;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0801CF00(param_1,*(byte *)(param_1 + 0x70) | 0x8000);
    }
    else {
      sub_0801CF00(param_1,CONCAT11(*(undefined *)(*(int *)(param_1 + 0x28) + 0x1e),
                                    *(undefined *)(*(int *)(param_1 + 0x28) + 0x70)));
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

