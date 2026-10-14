// sub_0801EF54 at 0x0801EF54 (thumb)

undefined4 sub_0801EF54(int param_1,int *param_2)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (*param_2 == *(int *)(iVar3 + 0x54)) {
      cVar2 = -1;
      if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
        cVar2 = '\x01';
      }
    }
    else {
      cVar2 = -1;
      if (*param_2 - *(int *)(iVar3 + 0x54) < 0) {
        cVar2 = '\x01';
      }
    }
    *(char *)(iVar3 + 0x192) = *(char *)(iVar3 + 0x192) + cVar2;
    uVar1 = sub_080071B8(*(undefined4 *)(param_1 + 0xc),param_1);
    sub_08014360(uVar1);
  }
  return in_lr;
}

