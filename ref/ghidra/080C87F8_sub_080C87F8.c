// sub_080C87F8 at 0x080C87F8 (thumb)

undefined4 sub_080C87F8(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_2 + 0x28) = **(undefined4 **)(param_2 + 0x40);
  *(undefined4 **)(param_2 + 0x40) = *(undefined4 **)(param_2 + 0x40) + 1;
  return in_lr;
}

