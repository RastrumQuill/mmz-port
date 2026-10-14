// sub_08100BFC at 0x08100BFC (thumb)

undefined4 sub_08100BFC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '<') && (*(char *)(param_1 + 0xb8) != '\x7f')) {
    *(char *)(param_1 + 0xb8) = '\x7f';
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0801CF00(param_1,*(byte *)(param_1 + 0x70) | 0x7f00);
    }
    else {
      sub_0801CF00(param_1,CONCAT11(*(undefined *)(*(int *)(param_1 + 0x28) + 0x1e),
                                    *(undefined *)(*(int *)(param_1 + 0x28) + 0x70)));
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

