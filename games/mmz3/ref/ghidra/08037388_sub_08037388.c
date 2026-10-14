// sub_08037388 at 0x08037388 (thumb)

undefined4 sub_08037388(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0xb4) + 300);
  *pcVar1 = *pcVar1 + -1;
  sub_080071B0();
  return in_lr;
}

