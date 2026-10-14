// sub_080D7E58 at 0x080D7E58 (thumb)

undefined4 sub_080D7E58(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_0836d730);
        sub_08017700(param_1,0x7904);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080d7ee4;
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      goto LAB_080d7ee4;
    }
    if (bVar1 != 0) goto LAB_080d7ee4;
    sub_08007390(param_1 + 0x74,&DAT_0836d6d0);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_08017700(param_1,0x7903);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
LAB_080d7ee4:
  iVar3 = DAT_0202e48c - *(int *)(param_1 + 0x58);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 3);
  return in_lr;
}

