// sub_080E8534 at 0x080E8534 (thumb)

undefined4 sub_080E8534(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xdd4) = param_1 + 0xe6c;
  *(int *)(param_1 + 0xdd8) = param_1 + 0xe88;
  *(int *)(param_1 + 0xddc) = param_1 + 0xea0;
  *(int *)(param_1 + 0xde0) = param_1 + 0xeb8;
  sub_080E85B0(param_1);
  sub_080E85D0(param_1);
  sub_080E85F0(param_1);
  sub_080E860C(param_1);
  sub_080E862C(param_1,0);
  sub_080E8640(param_1,0);
  sub_080E8654(param_1,0);
  sub_080E8664(param_1,0);
  return in_lr;
}

