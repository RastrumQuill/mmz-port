// sub_08033714 at 0x08033714 (thumb)

undefined4 sub_08033714(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_1 + 0x4c);
      iVar3 = iVar2 - *(int *)(DAT_0202286c + 0x4c);
      if (iVar3 < 0) {
        iVar3 = *(int *)(DAT_0202286c + 0x4c) - iVar2;
      }
      if (iVar3 < 0x2800) {
        cVar1 = '%';
      }
      else {
        iVar3 = iVar2 - *(int *)(DAT_0202286c + 0x4c);
        if (iVar3 < 0) {
          iVar3 = *(int *)(DAT_0202286c + 0x4c) - iVar2;
        }
        if (iVar3 < 0x5000) {
          cVar1 = '%';
        }
        else {
          cVar1 = '(';
        }
      }
    }
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

