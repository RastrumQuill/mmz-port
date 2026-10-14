// sub_080B5F1C at 0x080B5F1C (thumb)

undefined4 sub_080B5F1C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  uVar1 = sub_08099D0C(param_1);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  return in_lr;
}

