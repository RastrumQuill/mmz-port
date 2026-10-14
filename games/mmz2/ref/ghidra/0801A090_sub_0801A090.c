// sub_0801A090 at 0x0801A090 (thumb)

longlong sub_0801A090(int param_1)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar3 = (char *)(param_1 + 0x17c);
  if (*pcVar3 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832e8d4);
      sub_08014D0C(1);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832e954);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832e9ac);
      *pcVar3 = '\x04';
    }
  }
  else if (((*pcVar3 == '\x01') && (0xd2fff < *(int *)(iVar2 + 0x54))) && ((DAT_0202ec44 & 1) == 0))
  {
    DAT_0202e01c = 1;
    *pcVar3 = '\x02';
  }
  else if (*(char *)(param_1 + 0x17c) == '\x02') {
    if ((0x148fff < *(int *)(iVar2 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
      sub_08003274(DAT_0202ed98 & 0xffff);
      DAT_0202ed98 = 0xffffffff;
    }
    if (0x14afff < *(int *)(iVar2 + 0x54)) {
      DAT_030032e1 = DAT_030032e1 | 2;
      if (DAT_0202ed98 != 0xba) {
        if (DAT_0202ed98 != 0xffffffff) {
          sub_08003274(DAT_0202ed98 & 0xffff);
          DAT_0202ed98 = 0xffffffff;
        }
        sub_08003264(0xba);
        DAT_0202ed98 = 0xba;
      }
      sub_08014D0C(2);
      DAT_0202ed80 = 0x25000;
      *(undefined *)(param_1 + 0x17c) = 3;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x158fff < *(int *)(iVar2 + 0x54))) {
      puVar1 = &DAT_0832ea04;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar2 + 0x54) < 0x159000)) {
        if ((*(char *)(param_1 + 0x17c) == '\x05') && ((DAT_0202ec38 & 0x20) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_0801B454(&DAT_0202ec40,&DAT_0832ebdc);
          DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
          DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
        }
        goto LAB_0801a298;
      }
      puVar1 = &DAT_0832eafc;
    }
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,puVar1);
    *(undefined *)(param_1 + 0x17c) = 5;
  }
LAB_0801a298:
  return (ulonglong)in_lr << 0x20;
}

