// sub_0801B310 at 0x0801B310 (thumb)

longlong sub_0801B310(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  pcVar2 = (char *)(param_1 + 0x17c);
  if (*pcVar2 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    DAT_02030104 = DAT_02030104 & 0xfb;
    if (DAT_020301a2 == '\0') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834b398);
      sub_0801A4CC(1);
      *pcVar2 = '\x01';
    }
    else if (DAT_020301a2 == '\x01') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834a1c8);
      *pcVar2 = '\x01';
    }
    else if (DAT_020301a2 == '\x02') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834a790);
      *pcVar2 = '\x02';
    }
  }
  else if ((*pcVar2 == '\x01') && (0xd97ff < *(int *)(iVar1 + 0x54))) {
    DAT_020302e4 = 0xd2000;
    sub_0801A4CC(2);
    *pcVar2 = '\x02';
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x02') && (*(int *)(iVar1 + 0x58) < 0x14000)) {
    if (0xdffff < *(int *)(iVar1 + 0x54)) {
      DAT_030032e1 = DAT_030032e1 | 2;
    }
    if (0xe1fff < *(int *)(iVar1 + 0x54)) {
      DAT_030032e1 = 0;
      *(char *)(param_1 + 0x17c) = '\x03';
    }
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x03') && (0xeffff < *(int *)(iVar1 + 0x54))) {
    sub_08021D7C(&DAT_020301b0,&DAT_0834b410);
    DAT_020301a8 = DAT_020301a8 & 0xfffe;
  }
  return (ulonglong)in_lr << 0x20;
}

