// sub_080CDA1C at 0x080CDA1C (thumb)

undefined4 sub_080CDA1C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(*(int *)(param_1 + 0x28) + 0xd7) = 1;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0886357c + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

