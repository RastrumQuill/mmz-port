// sub_080DC578 at 0x080DC578 (thumb)

undefined4 sub_080DC578(int param_1)

{
  undefined4 in_lr;
  
  sub_080DC910();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080DC59C(param_1);
  return in_lr;
}

