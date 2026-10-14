// sub_0803CDB0 at 0x0803CDB0 (thumb)

undefined4 sub_0803CDB0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0x13a);
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    *pcVar2 = cVar1 + -1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_08036F70(param_1);
  return in_lr;
}

