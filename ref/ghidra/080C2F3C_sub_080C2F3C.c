// sub_080C2F3C at 0x080C2F3C (thumb)

undefined4 sub_080C2F3C(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x9e0) = param_1 + 0xa90;
  *(int *)(param_1 + 0x9e4) = param_1 + 0xaac;
  *(int *)(param_1 + 0x9e8) = param_1 + 0xac4;
  sub_080C2F9C(param_1);
  sub_080C2FB4(param_1);
  sub_080C2FD0(param_1);
  sub_080C2FEC(param_1,0);
  sub_080C2FFC(param_1,0);
  sub_080C3010(param_1,0);
  return in_lr;
}

