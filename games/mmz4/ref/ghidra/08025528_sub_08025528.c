// sub_08025528 at 0x08025528 (thumb)

longlong sub_08025528(int param_1)

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
      sub_080275F0(&DAT_0202e920,&DAT_08849b74);
      sub_0801F63C(2);
      uVar2 = 2;
    }
    else {
      if (DAT_0202e912 == '\x02') {
        sub_080275F0(&DAT_0202e920,&DAT_08849364);
        *(char *)(param_1 + 0x17c) = '\x02';
        goto LAB_08025644;
      }
      if (DAT_0202e912 != '\x03') goto LAB_08025644;
      sub_080275F0(&DAT_0202e920,&DAT_088493bc);
      uVar2 = 4;
    }
  }
  else if ((cVar1 == '\x02') && (0xa4000 < *(int *)(iVar3 + 0x54))) {
    uVar2 = 3;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x03') {
      sub_0801F63C(3);
      uVar2 = 4;
    }
    else if (cVar1 == '\x04') {
      if (0x175fff < *(int *)(iVar3 + 0x54)) {
        DAT_030032e1 = DAT_030032e1 | 2;
      }
      if (*(int *)(iVar3 + 0x54) < 0x178000) goto LAB_08025644;
      DAT_030032e1 = 0;
      DAT_0202e8b4 = DAT_0202e8b4 & 0xf7;
      uVar2 = 5;
    }
    else {
      if ((cVar1 != '\x05') || (*(int *)(iVar3 + 0x54) < 0x186000)) goto LAB_08025644;
      sub_080275F0(&DAT_0202e920,&DAT_08849bec);
      DAT_0202e918 = DAT_0202e918 & 0xfffe;
      uVar2 = 7;
    }
  }
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_08025644:
  return (ulonglong)in_lr << 0x20;
}

