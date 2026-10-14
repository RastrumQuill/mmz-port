// sub_0803703C at 0x0803703C (thumb)

undefined4 sub_0803703C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0xc01) {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      sub_0801CFC8(param_1,0xc01,2,2);
    }
  }
  else {
    sub_0801CFC8(param_1,0xc01,2,2);
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined *)(param_1 + 0x100) = 0;
    sub_0801CFC8(param_1,0x500,2,1);
  }
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_08036F08(param_1);
  }
  return in_lr;
}

