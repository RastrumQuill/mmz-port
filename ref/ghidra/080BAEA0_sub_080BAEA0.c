// sub_080BAEA0 at 0x080BAEA0 (thumb)

undefined4 sub_080BAEA0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  uVar1 = sub_080BAF44(param_1);
  *(undefined *)(param_1 + 0x11) = uVar1;
  return in_lr;
}

