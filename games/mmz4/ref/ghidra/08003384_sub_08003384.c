// sub_08003384 at 0x08003384 (thumb)

undefined4 sub_08003384(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  sub_081284E4(local_14,param_1,0x1000080);
  *(int *)(param_1 + 0x200) = param_1;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  return in_lr;
}

