// sub_08083EA0 at 0x08083EA0 (thumb)

undefined4 sub_08083EA0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(char *)(param_1 + 0xd) != '\0') && (*(char *)(param_1 + 0xd) != '\x05')) {
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_08083eca;
    }
    uVar1 = 2;
  }
  else if (*(char *)(param_1 + 0xd) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
LAB_08083eca:
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

