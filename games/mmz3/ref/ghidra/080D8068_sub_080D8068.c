// sub_080D8068 at 0x080D8068 (thumb)

undefined4 sub_080D8068(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 == 1) {
LAB_080d80a6:
    sub_080177F4(param_1);
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      sub_08007390(param_1 + 0x74,&DAT_0836d730);
    }
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080d8146;
    cVar2 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar3 < 2) {
      if (bVar3 != 0) goto LAB_080d8146;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      sub_08007390(param_1 + 0x74,&DAT_0836d760);
      sub_08017700(param_1,0x7901);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080d80a6;
    }
    if (bVar3 == 2) {
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
      if (bVar1) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      sub_08017700(param_1,0x7905);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (bVar3 != 3) goto LAB_080d8146;
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080d8146;
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
  }
  *(char *)(param_1 + 0xe) = cVar2;
LAB_080d8146:
  iVar4 = DAT_0202e48c - *(int *)(param_1 + 0x58);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 3);
  return in_lr;
}

