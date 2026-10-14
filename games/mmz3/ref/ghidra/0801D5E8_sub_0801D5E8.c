// sub_0801D5E8 at 0x0801D5E8 (thumb)

longlong sub_0801D5E8(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint in_lr;
  
  pcVar2 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar2;
  if (cVar1 == '\0') {
    DAT_020301a8 = DAT_020301a8 | 1;
    if (DAT_020301a2 == '\0') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834f8a4);
      sub_0801A4CC(1);
      *pcVar2 = '\x01';
    }
    else if (DAT_020301a2 == '\x02') {
      sub_08021D7C(&DAT_020301b0,&DAT_0834e8a4);
      *pcVar2 = '\x02';
    }
  }
  else {
    if (cVar1 == '\x01') {
      sub_0801A4CC(2);
      cVar1 = '\x02';
    }
    else {
      if ((cVar1 != '\x02') || (*(int *)(*(int *)(param_1 + 0x20) + 0x54) < 0x78000))
      goto LAB_0801d67a;
      sub_08021D7C(&DAT_020301b0,&DAT_0834f91c);
      DAT_020301a8 = DAT_020301a8 & 0xfffe;
      cVar1 = '\x03';
    }
    *pcVar2 = cVar1;
  }
LAB_0801d67a:
  return (ulonglong)in_lr << 0x20;
}

