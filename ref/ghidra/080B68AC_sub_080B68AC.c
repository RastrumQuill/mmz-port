// sub_080B68AC at 0x080B68AC (thumb)

undefined4 sub_080B68AC(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\x03') {
    if (-1 < *(int *)(param_1 + 0xc0)) {
      *(undefined *)(param_1 + 0xd) = 2;
      sub_080B68F4(param_1);
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0xc0) < 1) {
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080B6860(param_1);
    return in_lr;
  }
  uVar1 = sub_08025930(-*(int *)(param_1 + 0xbc));
  *(undefined *)(param_1 + 0xd3) = uVar1;
  return in_lr;
}

