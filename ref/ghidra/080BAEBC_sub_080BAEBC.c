// sub_080BAEBC at 0x080BAEBC (thumb)

undefined4 sub_080BAEBC(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  uVar1 = sub_080BAF44(param_1);
  *(undefined *)(param_1 + 0x11) = uVar1;
  return in_lr;
}

