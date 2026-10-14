// sub_08037B5C at 0x08037B5C (thumb)

undefined8 sub_08037B5C(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_3 < 0) {
    if (*(byte *)(param_1 + 0x212) == param_2) {
      uVar1 = (uint)*(byte *)(param_1 + 0x188);
      goto LAB_08037baa;
    }
    if (*(byte *)(param_1 + 0x213) == param_2) {
      uVar1 = (uint)*(byte *)(param_1 + 0x189);
      goto LAB_08037baa;
    }
  }
  else if (*(byte *)(param_1 + 0x212 + param_3) == param_2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x188 + param_3);
    goto LAB_08037baa;
  }
  uVar1 = 0;
LAB_08037baa:
  return CONCAT44(in_lr,uVar1);
}

