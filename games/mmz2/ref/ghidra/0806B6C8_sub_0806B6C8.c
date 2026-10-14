// sub_0806B6C8 at 0x0806B6C8 (thumb)

undefined4 sub_0806B6C8(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x808);
    }
    else {
      sub_080127E4(param_1,0x800);
    }
    *(undefined *)(param_1 + 0xc2) = 1;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x02') goto LAB_0806b744;
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar2 = 1;
    }
    *(char *)(param_1 + 0xd) = (char)iVar2;
    bVar3 = *(byte *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      bVar3 = bVar3 | 0x10;
    }
    sub_080B0ACC(param_1 + 0x54,&DAT_0833e4ec,0,bVar3);
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xe) = cVar1;
LAB_0806b744:
  sub_080128D4(param_1);
  return in_lr;
}

