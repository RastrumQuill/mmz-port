// sub_0806B128 at 0x0806B128 (thumb)

undefined4 sub_0806B128(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x55ff) {
      sub_0801CF00(param_1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 2;
  }
  if (((1 < *(byte *)(param_1 + 0xf)) && (*(byte *)(param_1 + 0xf) == 2)) &&
     ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

