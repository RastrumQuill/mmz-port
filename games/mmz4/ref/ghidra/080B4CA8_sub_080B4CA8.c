// sub_080B4CA8 at 0x080B4CA8 (thumb)

undefined4 sub_080B4CA8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xca02);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0xe) == '\x01') && (cVar1 = sub_080B52C4(param_1), cVar1 != '\0')) {
    sub_08005784(param_1 + 0x74,&DAT_08860454);
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886049c + (uint)*(byte *)(param_1 + 0xe) * 2));
    sub_08002B10(0x16f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x02') {
      sub_08005784(param_1 + 0x74,&DAT_0886046c);
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_0886049c + (uint)*(byte *)(param_1 + 0xe) * 2));
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      cVar1 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
    }
    *(char *)(param_1 + 0xe) = cVar1;
  }
  return in_lr;
}

