// sub_0802A58C at 0x0802A58C (thumb)

undefined4 sub_0802A58C(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x148) == '\x01') || (*(char *)(param_1 + 0x148) == '\x03')) {
    sub_08017700(param_1,0x301);
  }
  else {
    uVar1 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar1);
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xf) = 1;
  sub_0802A5E4(param_1);
  return in_lr;
}

