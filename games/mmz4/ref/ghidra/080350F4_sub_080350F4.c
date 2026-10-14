// sub_080350F4 at 0x080350F4 (thumb)

undefined4 sub_080350F4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x14e) = 1;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x2000) {
    if (*(short *)(param_1 + 0xfc) == 0x100) {
      sub_0801CFC8(param_1,0x2000,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72))
      ;
    }
    else {
      sub_0801CF00(param_1,0x2000);
    }
  }
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0803D3B0(param_1,1);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
    if (cVar1 == '\x01') {
      *(undefined *)(param_1 + 0x100) = 3;
      *(undefined *)(param_1 + 0x101) = 0;
      sub_08034B54(param_1);
    }
    else if (*(char *)(param_1 + 0x167) == '\0') {
      *(undefined *)(param_1 + 0x101) = 2;
      *pcVar2 = '\0';
      sub_080351C0(param_1);
    }
  }
  return in_lr;
}

