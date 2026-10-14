// sub_080D7778 at 0x080D7778 (thumb)

undefined4 sub_080D7778(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\x03') {
    if (-1 < *(int *)(param_1 + 0xb8)) {
      *(undefined *)(param_1 + 0xd) = 2;
      sub_080D77C0(param_1);
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0xb8) < 1) {
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080D772C(param_1);
    return in_lr;
  }
  uVar1 = sub_08038E6C(-*(int *)(param_1 + 0xb4));
  *(undefined *)(param_1 + 0xcb) = uVar1;
  return in_lr;
}

