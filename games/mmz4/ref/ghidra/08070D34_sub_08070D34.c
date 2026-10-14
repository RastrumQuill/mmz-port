// sub_08070D34 at 0x08070D34 (thumb)

undefined4 sub_08070D34(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885932c + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

