// sub_08034D50 at 0x08034D50 (thumb)

undefined4 sub_08034D50(int param_1)

{
  short sVar1;
  char cVar2;
  undefined4 in_lr;
  
  sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  if (sVar1 != 0x902) {
    if (sVar1 == 0x901) {
      sub_0801CFC8(param_1,0x902,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    else {
      sub_0801CFC8(param_1,0x902,0,1);
    }
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CFC8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  cVar2 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar2 != '\0') {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_08034B54(param_1);
  }
  return in_lr;
}

