// sub_080429D4 at 0x080429D4 (thumb)

void sub_080429D4(int param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  param_2 = param_2 & 0xff;
  piVar4 = (int *)(param_1 + 0xb8 + (param_2 + 6) * 4);
  iVar3 = *piVar4;
  if (iVar3 != 0) {
    *piVar4 = *(int *)(iVar3 + 0x24);
    sub_0808588C(iVar3);
    pcVar1 = (char *)(param_1 + 0xe0 + param_2);
    cVar2 = *pcVar1 + -1;
    *pcVar1 = cVar2;
    if (cVar2 == '\0') {
      *(undefined4 *)(*(int *)(param_1 + 0xb8 + (param_2 + 2) * 4) + 0x20) = 0;
    }
  }
  return;
}

