// sub_0802657C at 0x0802657C (thumb)

longlong sub_0802657C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  cVar1 = *(char *)(param_1 + 0x17c);
  if (cVar1 == '\0') {
    DAT_0202e918 = DAT_0202e918 | 1;
    DAT_0202e8b4 = DAT_0202e8b4 | 8;
    if (DAT_0202e912 == '\0') {
      sub_080275F0(&DAT_0202e920,&DAT_0884abbc);
      sub_0801F63C(2);
      uVar2 = 2;
    }
    else {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_0884a6e4);
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08026688;
      }
      if (DAT_0202e912 != '\x03') goto LAB_08026688;
      sub_080275F0(&DAT_0202e920,&DAT_0884a73c);
      uVar2 = 4;
    }
  }
  else if ((cVar1 == '\x02') && (0xfe000 < *(int *)(iVar3 + 0x54))) {
    uVar2 = 3;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x03') {
      sub_0801F63C(3);
      uVar2 = 4;
    }
    else if (cVar1 == '\x04') {
      if (0x1cffff < *(int *)(iVar3 + 0x54)) {
        DAT_030032e1 = DAT_030032e1 | 2;
      }
      if (*(int *)(iVar3 + 0x54) < 0x1d2000) goto LAB_08026688;
      DAT_030032e1 = 0;
      uVar2 = 5;
    }
    else {
      if ((cVar1 != '\x05') || (*(int *)(iVar3 + 0x58) < 0x14000)) goto LAB_08026688;
      sub_080275F0(&DAT_0202e920,&DAT_0884ac34);
      DAT_0202e918 = DAT_0202e918 & 0xfffe;
      uVar2 = 7;
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_08026688:
  return (ulonglong)in_lr << 0x20;
}

