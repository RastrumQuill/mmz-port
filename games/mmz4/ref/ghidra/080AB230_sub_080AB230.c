// sub_080AB230 at 0x080AB230 (thumb)

undefined4 sub_080AB230(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xbb);
  if (*pcVar1 != '\0') {
    *pcVar1 = *pcVar1 + -1;
  }
  sub_0807F804(param_1);
  return in_lr;
}

