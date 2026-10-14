// sub_0802F5D8 at 0x0802F5D8 (thumb)

undefined4 sub_0802F5D8(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0802DC88(param_1);
  uVar1 = sub_08032D6C(param_1);
  *(undefined2 *)(param_1 + 0x138) = uVar1;
  return in_lr;
}

