// sub_080370D8 at 0x080370D8 (thumb)

void sub_080370D8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  if (*(char *)(param_1 + 0x1f5) == '\x01') {
    sub_08037088(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    sub_08037088(param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

