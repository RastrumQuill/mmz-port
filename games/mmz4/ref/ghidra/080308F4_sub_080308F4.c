// sub_080308F4 at 0x080308F4 (thumb)

undefined4 sub_080308F4(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x175) == '\x01') || (*(char *)(param_1 + 0x175) == '\x03')) {
    sub_0801CF00(param_1,0x301);
  }
  else {
    uVar1 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar1);
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0803094C(param_1);
  return in_lr;
}

