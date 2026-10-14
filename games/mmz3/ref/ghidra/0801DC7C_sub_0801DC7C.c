// sub_0801DC7C at 0x0801DC7C (thumb)

void sub_0801DC7C(int param_1)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  
  cVar2 = DAT_020301a2;
  iVar5 = *(int *)(param_1 + 0x20);
  pcVar6 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar6;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      sub_08021D7C(&DAT_020301b0,&DAT_08350818);
      sub_0801A4CC(1);
      *pcVar6 = '\x01';
    }
    else {
      if (DAT_020301a2 == '\x02') {
        puVar4 = &DAT_083503e8;
      }
      else {
        if (DAT_020301a2 != '\x03') {
          return;
        }
        puVar4 = &DAT_08350440;
      }
      sub_08021D7C(&DAT_020301b0,puVar4);
      *pcVar6 = cVar2;
    }
  }
  else {
    if (cVar1 == '\x01') {
      sub_0801A4CC(2);
      uVar3 = 2;
    }
    else if ((cVar1 == '\x02') && (0xa4fff < *(int *)(iVar5 + 0x54))) {
      sub_0801A4CC(3);
      uVar3 = 3;
    }
    else if (*(char *)(param_1 + 0x17c) == '\x03') {
      if (*(int *)(iVar5 + 0x54) < 0x1c1000) {
        return;
      }
      DAT_030032e1 = DAT_030032e1 | 2;
      uVar3 = 4;
    }
    else {
      if (*(char *)(param_1 + 0x17c) != '\x04') {
        return;
      }
      if (*(int *)(iVar5 + 0x54) < 0x1d1000) {
        return;
      }
      sub_08021D7C(&DAT_020301b0,&DAT_08350890);
      DAT_020301a8 = DAT_020301a8 & 0xfffe;
      uVar3 = 6;
    }
    *(undefined *)(param_1 + 0x17c) = uVar3;
  }
  return;
}

