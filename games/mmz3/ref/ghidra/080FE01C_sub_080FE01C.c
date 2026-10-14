// sub_080FE01C at 0x080FE01C (thumb)

undefined4 sub_080FE01C(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_2 + 0x28) = **(undefined4 **)(param_2 + 0x40);
  *(undefined4 **)(param_2 + 0x40) = *(undefined4 **)(param_2 + 0x40) + 1;
  return in_lr;
}

