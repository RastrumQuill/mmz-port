// sub_08019D3C at 0x08019D3C (thumb)

longlong sub_08019D3C(int param_1)

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
      sub_0801B454(&DAT_0202ec40,&DAT_0832e190);
      sub_08014D0C(1);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832e210);
      *pcVar3 = '\x01';
    }
    else if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832e2f8);
      *pcVar3 = '\x04';
    }
  }
  else if (((*pcVar3 == '\x01') && (0xd2fff < *(int *)(iVar2 + 0x54))) && ((DAT_0202ec44 & 1) == 0))
  {
    sub_0801B454(&DAT_0202ec40,&DAT_0832e268);
    *pcVar3 = '\x02';
  }
  else if (*(char *)(param_1 + 0x17c) == '\x02') {
    if ((0xeefff < *(int *)(iVar2 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
      sub_08003274(DAT_0202ed98 & 0xffff);
      DAT_0202ed98 = 0xffffffff;
    }
    if (0xf0fff < *(int *)(iVar2 + 0x54)) {
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
      *(undefined *)(param_1 + 0x17c) = 3;
    }
  }
  else {
    if ((*(char *)(param_1 + 0x17c) == '\x03') && (0x4ffff < *(int *)(iVar2 + 0x58))) {
      puVar1 = &DAT_0832e350;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x04') || (*(int *)(iVar2 + 0x58) < 0x50000)) {
        if (*(char *)(param_1 + 0x17c) == '\x05') {
          DAT_0202ed74 = *(int *)(*(int *)(param_1 + 0x30) + 0x54) + -0xc800;
          DAT_0202ed78 = *(int *)(*(int *)(param_1 + 0x30) + 0x54) + 0x3000;
          if ((DAT_0202ec38 & 0x20) != 0) {
            DAT_030032e0 = DAT_030032e0 | 0x80;
            DAT_030032e1 = DAT_030032e1 | 2;
            sub_0801B454(&DAT_0202ec40,&DAT_0832e538);
            DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
            DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
          }
        }
        goto LAB_08019f50;
      }
      puVar1 = &DAT_0832e458;
    }
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,puVar1);
    *(undefined *)(param_1 + 0x17c) = 5;
  }
LAB_08019f50:
  return (ulonglong)in_lr << 0x20;
}

