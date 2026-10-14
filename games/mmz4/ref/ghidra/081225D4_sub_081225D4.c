// sub_081225D4 at 0x081225D4 (thumb)

undefined8 sub_081225D4(void)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = (char)DAT_020007ae;
  if (DAT_02000790 == '\x01') {
    cVar1 = '\0';
  }
  if (cVar1 == 1) {
    sub_081284E4(&DAT_0203c630,&DAT_0203586c,0x50);
    sub_081284E8(&DAT_0203c770,&DAT_020359ac,&DAT_04000003);
  }
  return CONCAT44(in_lr,(int)cVar1);
}

