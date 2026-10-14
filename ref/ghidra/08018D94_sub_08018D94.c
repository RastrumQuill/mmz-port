// sub_08018D94 at 0x08018D94 (thumb)

undefined4 sub_08018D94(int param_1,int *param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    if (*param_2 == *(int *)(iVar3 + 0x4c)) {
      cVar2 = -1;
      if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
        cVar2 = '\x01';
      }
    }
    else {
      cVar2 = -1;
      if (*param_2 - *(int *)(iVar3 + 0x4c) < 0) {
        cVar2 = '\x01';
      }
    }
    *(char *)(iVar3 + 299) = *(char *)(iVar3 + 299) + cVar2;
    uVar1 = sub_08005E58(*(undefined4 *)(param_1 + 0x10),param_1);
    sub_0800F664(uVar1);
  }
  return in_lr;
}

