// sub_0804296C at 0x0804296C (thumb)

undefined8 sub_0804296C(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  iVar2 = 0;
  if ((*(char *)(param_1 + 0xd) == '\t') || (*(char *)(param_1 + 0xd) == '\x0e')) {
    iVar2 = 1;
  }
  iVar2 = sub_0808582C(param_1,iVar2 << 1,*(byte *)(param_1 + 10) >> 4 & 1);
  if (iVar2 != 0) {
    piVar3 = (int *)(param_1 + 0xb8 + (param_2 + 6) * 4);
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x20) = iVar2;
    }
    *piVar3 = iVar2;
    *(int *)(iVar2 + 0x24) = iVar1;
    *(int *)(iVar2 + 0x20) = param_1;
    pcVar4 = (char *)(param_1 + 0xe0 + param_2);
    if (*pcVar4 == '\0') {
      *(int *)(*(int *)(param_1 + 0xb8 + (param_2 + 2) * 4) + 0x20) = iVar2;
    }
    *pcVar4 = *pcVar4 + '\x01';
  }
  return CONCAT44(in_lr,iVar2);
}

