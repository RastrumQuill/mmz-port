// sub_080A39EC at 0x080A39EC (thumb)

undefined4 sub_080A39EC(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xda);
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    *pcVar2 = cVar1 + -1;
  }
  sub_0807F804(param_1);
  return in_lr;
}

