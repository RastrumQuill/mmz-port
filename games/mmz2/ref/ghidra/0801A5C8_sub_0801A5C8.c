// sub_0801A5C8 at 0x0801A5C8 (thumb)

longlong sub_0801A5C8(int param_1)

{
  char cVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832f7f4);
      sub_08014D0C(1);
    }
    else {
      if (DAT_0202ec32 != 1) goto LAB_0801a690;
      sub_0801B454(&DAT_0202ec40,&DAT_0832f05c);
    }
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  else if ((cVar1 == '\x01') && (*(int *)(iVar2 + 0x58) < 0x1a001)) {
    if (0x85fff < *(int *)(iVar2 + 0x54)) {
      DAT_030032e1 = DAT_030032e1 | 2;
      if (DAT_0202ed98 != 0xffffffff) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
    }
    if ((*(int *)(iVar2 + 0x58) < 0x1a001) && (0x87fff < *(int *)(iVar2 + 0x54))) {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_0832f86c);
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
    }
  }
LAB_0801a690:
  return (ulonglong)in_lr << 0x20;
}

