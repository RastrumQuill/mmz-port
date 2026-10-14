// sub_080D7340 at 0x080D7340 (thumb)

undefined4 sub_080D7340(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  uVar1 = sub_080BEE58(param_1,2);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  return in_lr;
}

