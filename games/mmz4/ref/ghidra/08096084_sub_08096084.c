// sub_08096084 at 0x08096084 (thumb)

undefined4 sub_08096084(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
    *pcVar1 = *pcVar1 + -1;
  }
  sub_0807F804(param_1);
  return in_lr;
}

