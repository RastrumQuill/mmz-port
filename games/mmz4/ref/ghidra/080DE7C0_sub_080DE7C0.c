// sub_080DE7C0 at 0x080DE7C0 (thumb)

undefined4 sub_080DE7C0(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb6);
  *pcVar1 = *pcVar1 + -1;
  sub_080D083C();
  return in_lr;
}

