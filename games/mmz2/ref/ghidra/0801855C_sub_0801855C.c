// sub_0801855C at 0x0801855C (thumb)

longlong sub_0801855C(int param_1)

{
  char cVar1;
  uint in_lr;
  
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832b350);
      sub_08014D0C(1);
    }
    else {
      if (DAT_0202ec32 != 1) goto LAB_080185e6;
      sub_0801B454(&DAT_0202ec40,&DAT_0832b3c8);
    }
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  else if ((cVar1 == '\x01') && (0x26afff < *(int *)(*(int *)(param_1 + 0x20) + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_0801B454(&DAT_0202ec40,&DAT_0832b420);
    DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
  }
LAB_080185e6:
  return (ulonglong)in_lr << 0x20;
}

