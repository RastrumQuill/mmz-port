// sub_08037BF0 at 0x08037BF0 (thumb)

undefined4 sub_08037BF0(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  if ((((int)(uint)*(byte *)(param_1 + 0x210) >> (param_2 & 0xff) & 1U) != 0) && (param_2 != 0)) {
    sub_080314C4((byte *)(param_1 + 0x210),0);
    sub_08037CC8(param_1);
  }
  return in_lr;
}

