// sub_0800259C at 0x0800259C (thumb)

undefined4 sub_0800259C(int param_1,undefined4 param_2)

{
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x1b) & 0x3f) == 0) {
    sub_080C8A9C(param_1,param_2,
                 *(undefined4 *)(&DAT_08290c2c + (uint)(*(byte *)(param_1 + 0x1b) >> 6) * 4));
  }
  else {
    sub_080025D4(param_1,param_2);
  }
  return in_lr;
}

