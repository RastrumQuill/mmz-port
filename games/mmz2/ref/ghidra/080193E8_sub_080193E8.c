// sub_080193E8 at 0x080193E8 (thumb)

longlong sub_080193E8(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  int iVar4;
  uint in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    *(undefined2 *)(param_1 + 0x16e) = 0xc01;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832cf7c);
      sub_08014D0C(1);
    }
    else {
      if (DAT_0202ec32 == 1) {
        puVar3 = &DAT_0832d00c;
      }
      else {
        if (DAT_0202ec32 != 2) goto LAB_0801957e;
        puVar3 = &DAT_0832d064;
      }
      sub_0801B454(&DAT_0202ec40,puVar3);
    }
    *(char *)(param_1 + 0x17c) = '\x01';
  }
  else if (cVar1 == '\x01') {
    if ((0x184fff < *(int *)(iVar4 + 0x54)) && (DAT_0202ed98 != 0xffffffff)) {
      sub_08003274(DAT_0202ed98 & 0xffff);
      DAT_0202ed98 = 0xffffffff;
    }
    if (0x186fff < *(int *)(iVar4 + 0x54)) {
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
      DAT_0202ed80 = 0x7e000;
      *(undefined *)(param_1 + 0x17c) = 2;
    }
  }
  else {
    if ((cVar1 == '\x02') && (0x194fff < *(int *)(iVar4 + 0x54))) {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_0832d0c4);
      uVar2 = 3;
    }
    else {
      if ((*(char *)(param_1 + 0x17c) != '\x03') || ((DAT_0202ec38 & 0x20) == 0)) goto LAB_0801957e;
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_0832d17c);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      uVar2 = 4;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
    }
    *(undefined *)(param_1 + 0x17c) = uVar2;
  }
LAB_0801957e:
  return (ulonglong)in_lr << 0x20;
}

