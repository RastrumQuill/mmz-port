// sub_0801A2B4 at 0x0801A2B4 (thumb)

longlong sub_0801A2B4(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar1 = (char *)(param_1 + 0x17c);
  if (*pcVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832ed54);
      sub_08014D0C(1);
    }
    else {
      if (DAT_0202ec32 != 1) goto LAB_0801a3a8;
      sub_0801B454(&DAT_0202ec40,&DAT_0832e954);
    }
    *pcVar1 = '\x01';
  }
  else if (((*pcVar1 == '\x01') && (0xd2fff < *(int *)(iVar2 + 0x54))) && ((DAT_0202ec44 & 1) == 0))
  {
    DAT_0202e01c = 1;
    *pcVar1 = '\x02';
  }
  else if (*(char *)(param_1 + 0x17c) == '\x02') {
    if (0x148fff < *(int *)(iVar2 + 0x54)) {
      DAT_030032e1 = DAT_030032e1 | 2;
      if (DAT_0202ed98 != 0xffffffff) {
        sub_08003274(DAT_0202ed98 & 0xffff);
        DAT_0202ed98 = 0xffffffff;
      }
    }
    if (0x14afff < *(int *)(iVar2 + 0x54)) {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_0832edcc);
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
    }
  }
LAB_0801a3a8:
  return (ulonglong)in_lr << 0x20;
}

