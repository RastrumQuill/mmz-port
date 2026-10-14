// sub_08044778 at 0x08044778 (thumb)

undefined4 sub_08044778(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        *(undefined *)(param_1 + 0xe) = 3;
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      iVar4 = *(int *)(param_1 + 200);
      cVar1 = sub_08042A1C(param_1,2);
      bVar2 = sub_08042CE8(param_1,2,6);
      if (bVar2 != *(byte *)(param_1 + 0xe2)) {
        if (*(byte *)(param_1 + 0xe2) < bVar2) {
          sub_0804296C(param_1,2);
        }
        else {
          sub_080429D4(param_1,2);
        }
      }
      sub_08042C24(param_1,0,6);
      sub_08042C24(param_1,1,6);
      sub_08042C24(param_1,2,6);
      sub_08042C24(param_1,3,6);
      iVar3 = *(int *)(iVar4 + 0x4c);
      iVar4 = iVar3 - *(int *)(param_1 + 0x4c);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x4c) - iVar3;
      }
      if ((0x3800 < iVar4) || (cVar1 != '\0')) {
        *(undefined *)(param_1 + 0xd) = 0x13;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080297C0(param_1);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x13) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080297C0(param_1);
  return in_lr;
}

