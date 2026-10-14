// sub_081283F0 at 0x081283F0 (thumb)

undefined4 sub_081283F0(undefined4 param_1,int param_2)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_2 + 0x28) = **(undefined4 **)(param_2 + 0x40);
  *(undefined4 **)(param_2 + 0x40) = *(undefined4 **)(param_2 + 0x40) + 1;
  return in_lr;
}

