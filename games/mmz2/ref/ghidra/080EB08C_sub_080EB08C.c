// sub_080EB08C at 0x080EB08C (thumb)

undefined4 sub_080EB08C(undefined4 param_1,uint param_2)

{
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (param_2 - 1 < 0x51) {
    sub_080D5B80(param_2);
    sub_080D5BBC(param_1,param_2);
  }
  return in_lr;
}

