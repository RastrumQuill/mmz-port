// sub_080B50B4 at 0x080B50B4 (thumb)

undefined4 sub_080B50B4(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (uVar3 < 0x2001) {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      *(char *)(param_1 + 0xb5) = '\x01';
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  else {
    *(undefined *)(param_1 + 0xb5) = 0;
  }
  iVar4 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
  }
  cVar1 = FUN_081288bc(iVar4 >> 8,0x30);
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  else if (cVar1 == '\x01') {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      *(undefined *)(param_1 + 0xb6) = 0;
      *(undefined *)(param_1 + 0xd) = 1;
      goto LAB_080b515e;
    }
    uVar2 = 0;
  }
  else {
    *(undefined *)(param_1 + 0xb6) = 0;
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
LAB_080b515e:
  sub_080B5268(param_1);
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

