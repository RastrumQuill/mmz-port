// sub_08052290 at 0x08052290 (thumb)

undefined4 sub_08052290(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_lr;
  
  cVar4 = *(char *)(param_1 + 0xe);
  if (cVar4 == '\0') {
    sub_0801CF00(param_1,0xa110);
    iVar2 = DAT_0202dbf0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd7) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
  else if (cVar4 == '\x01') {
    if (*(char *)(param_1 + 0x71) < '\x03') goto LAB_08052396;
    sub_08005784(param_1 + 0x74,&DAT_08854af8);
  }
  else {
    if (cVar4 != '\x02') {
      if (*(char *)(param_1 + 0xe2) != '\0') {
        *(undefined *)(param_1 + 0x12) = 0;
      }
      goto LAB_08052396;
    }
    if (*(char *)(param_1 + 0x71) < '\x06') goto LAB_08052396;
    sub_08002B10(0xed);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      sub_080C1648(param_1,3);
      sub_080C1648(param_1,4);
      sub_080C1648(param_1,5);
    }
    else {
      sub_080C1648(param_1,0);
      sub_080C1648(param_1,1);
      sub_080C1648(param_1,2);
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08052396:
  sub_0801CFF0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xe2) = 1;
  }
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

