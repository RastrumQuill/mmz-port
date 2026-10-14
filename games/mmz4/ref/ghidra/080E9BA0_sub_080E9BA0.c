// sub_080E9BA0 at 0x080E9BA0 (thumb)

undefined4 sub_080E9BA0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)(param_1 + 0xb8) != '\x12')) {
    *(char *)(param_1 + 0xb8) = '\x12';
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0801CF00(param_1,*(byte *)(param_1 + 0x70) | 0x1200);
    }
    else {
      sub_0801CF00(param_1,CONCAT11(*(undefined *)(*(int *)(param_1 + 0x28) + 0x1e),
                                    *(undefined *)(*(int *)(param_1 + 0x28) + 0x70)));
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

