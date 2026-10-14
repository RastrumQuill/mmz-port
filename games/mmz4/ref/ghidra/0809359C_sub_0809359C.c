// sub_0809359C at 0x0809359C (thumb)

undefined4 sub_0809359C(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08094B68();
  *(undefined *)(param_1 + 0xb8) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,0x80935c9);
  return in_lr;
}

