// sub_0801C4C8 at 0x0801C4C8 (thumb)

undefined4 sub_0801C4C8(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((((int)(uint)*(byte *)(param_1 + 0x188) >> (param_2 & 0xff) & 1U) != 0) &&
     ((param_2 & 0xff) != 0)) {
    sub_0801CC08((byte *)(param_1 + 0x188),*(undefined *)(param_1 + 0x10));
    sub_0801C5E8(param_1);
  }
  return in_lr;
}

