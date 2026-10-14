// sub_080354E0 at 0x080354E0 (thumb)

undefined4 sub_080354E0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0xa01) {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      sub_0801CFC8(param_1,0xa01,2,2);
    }
  }
  else {
    sub_0801CFC8(param_1,0xa01,2,2);
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CF00(param_1,0x300);
  }
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_080353AC(param_1);
  }
  return in_lr;
}

