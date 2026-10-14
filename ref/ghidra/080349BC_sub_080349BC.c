// sub_080349BC at 0x080349BC (thumb)

undefined4 sub_080349BC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xe);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x6e;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  sub_080297C0(param_1);
  bVar2 = *(byte *)(param_1 + 0x12);
  if (bVar2 == 0x46) {
    bVar2 = *(byte *)(param_1 + 10);
    uVar4 = 2;
  }
  else {
    if (bVar2 < 0x47) {
      if (bVar2 == 0x23) {
        sub_08064A8C(param_1 + 0x4c,3,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_08001EAC(0x34);
      }
      goto LAB_08034a5e;
    }
    if (bVar2 != 0x5f) goto LAB_08034a5e;
    bVar2 = *(byte *)(param_1 + 10);
    uVar4 = 1;
  }
  sub_08064A8C(param_1 + 0x4c,uVar4,bVar2 >> 4 & 1);
  sub_08001EAC(0x33);
LAB_08034a5e:
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

