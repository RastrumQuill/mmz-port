// sub_0802B574 at 0x0802B574 (thumb)

undefined4 sub_0802B574(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11a) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x404) {
      sub_08017700(param_1,0x404);
    }
  }
  else {
    sub_08017700(param_1,0x401);
  }
  if ((*(int *)(param_1 + 0x5c) == 0) && (sVar1 = sub_08032C9C(param_1), 0 < sVar1)) {
    sVar1 = sub_08032C9C(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0802B5E4(param_1);
  return in_lr;
}

