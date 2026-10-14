// sub_0803444C at 0x0803444C (thumb)

undefined4 sub_0803444C(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x1e00) {
    sub_0801CF00(param_1,0x1e00);
  }
  *(undefined *)(param_1 + 0x14e) = 0;
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0803D3B0(param_1,0);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0x100) = 3;
      *(undefined *)(param_1 + 0x101) = 0;
      sub_080334E8(param_1);
    }
    else if (*(char *)(param_1 + 0x167) == '\0') {
      *(undefined *)(param_1 + 0x101) = 2;
      *pcVar2 = '\0';
      sub_080344EC(param_1);
    }
  }
  return in_lr;
}

