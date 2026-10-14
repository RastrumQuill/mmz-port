// sub_08052194 at 0x08052194 (thumb)

undefined4 sub_08052194(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0xe);
  if (cVar2 == '\0') {
    sub_0801CF00(param_1,0xa10f);
    sub_08002B10(0xea);
    sub_08005784(param_1 + 0x74,&DAT_08854a98);
    iVar3 = DAT_0202dbf0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar4 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar4;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xcc);
  }
  else {
    if (cVar2 == '\x01') {
      if (*(char *)(param_1 + 0x71) < '\x04') goto LAB_0805225a;
      puVar5 = &DAT_08854b28;
    }
    else {
      if ((cVar2 != '\x02') || (*(char *)(param_1 + 0x71) < '\a')) goto LAB_0805225a;
      puVar5 = &DAT_08854ac8;
    }
    sub_08005784(param_1 + 0x74,puVar5);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805225a:
  sub_0801CFF0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xe2) = 1;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

