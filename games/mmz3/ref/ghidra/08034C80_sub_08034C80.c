// sub_08034C80 at 0x08034C80 (thumb)

undefined4 sub_08034C80(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    sub_0800471C(4);
    sub_0800471C(0xff);
    pcVar2 = (char *)(*(int *)(iVar3 + 0x28) + 0xd5);
    cVar1 = *pcVar2;
    if (cVar1 != '\0') {
      *pcVar2 = cVar1 + -1;
    }
    sub_0800471C(10);
  }
  return in_lr;
}

