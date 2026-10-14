// sub_0801F218 at 0x0801F218 (thumb)

longlong sub_0801F218(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  char *pcVar4;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  pcVar4 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      sub_08021D7C(&DAT_020301b0,&DAT_08352d14);
      sub_0801A4CC(1);
      *pcVar4 = '\x01';
      goto LAB_0801f3c0;
    }
    if (DAT_020301a2 == '\x02') {
      sub_08021D7C(&DAT_020301b0,&DAT_083526dc);
      *pcVar4 = '\x02';
      goto LAB_0801f3c0;
    }
    if (DAT_020301a2 != '\x03') goto LAB_0801f3c0;
    sub_08021D7C(&DAT_020301b0,&DAT_08352814);
    uVar2 = 6;
  }
  else if (cVar1 == '\x01') {
    sub_0801A4CC(2);
    uVar2 = 2;
  }
  else if ((cVar1 == '\x02') && (0x1fffff < *(int *)(iVar3 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    uVar2 = 3;
  }
  else if (*(char *)(param_1 + 0x17c) == '\x03') {
    DAT_030032e1 = 0;
    sub_08021D7C(&DAT_020301b0,&DAT_08352734);
    uVar2 = 4;
  }
  else if ((*(char *)(param_1 + 0x17c) == '\x04') && ((DAT_020301a8 & 0x10) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_08021D7C(&DAT_020301b0,&DAT_083527c4);
    DAT_020301b2 = DAT_020301b2 & 0xfd;
    DAT_020301a8 = DAT_020301a8 & 0xffef | 1;
    uVar2 = 5;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x05') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      sub_0801A4CC(3);
      uVar2 = 6;
    }
    else if (cVar1 == '\x06') {
      if (*(int *)(iVar3 + 0x54) < 0x338000) goto LAB_0801f3c0;
      DAT_030032e1 = DAT_030032e1 | 2;
      uVar2 = 7;
    }
    else {
      if ((cVar1 != '\a') || (*(int *)(iVar3 + 0x54) < 0x348000)) goto LAB_0801f3c0;
      sub_08021D7C(&DAT_020301b0,&DAT_08352d8c);
      DAT_020301a8 = DAT_020301a8 & 0xfffe;
      uVar2 = 9;
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_0801f3c0:
  return (ulonglong)in_lr << 0x20;
}

