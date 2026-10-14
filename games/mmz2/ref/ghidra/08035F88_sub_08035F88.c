// sub_08035F88 at 0x08035F88 (thumb)

undefined4 sub_08035F88(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08035F60();
  *(undefined4 *)(param_1 + 0x2d4) = uVar1;
  uVar1 = sub_08035F74(param_1,param_2);
  *(undefined4 *)(param_1 + 0x2d8) = uVar1;
  return in_lr;
}

