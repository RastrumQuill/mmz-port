// sub_080B19E0 at 0x080B19E0 (thumb)

undefined4 sub_080B19E0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc202);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xb5) + 0xc203);
    sub_08005784(param_1 + 0x74,&DAT_08860010 + (uint)*(byte *)(param_1 + 0xb5) * 0x60);
    sub_08002B10(0x16f);
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x02') {
      cVar1 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080b1a6c;
    }
    sub_0801CF00(param_1,0xc205);
    sub_08005784(param_1 + 0x74,&DAT_0885ffc8);
  }
  cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b1a6c:
  *(char *)(param_1 + 0xe) = cVar1;
  return in_lr;
}

