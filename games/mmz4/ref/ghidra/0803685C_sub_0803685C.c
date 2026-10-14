// sub_0803685C at 0x0803685C (thumb)

undefined4 sub_0803685C(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x2102);
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0xe) == '\x01') {
        sub_0801CFC8(param_1,0x403,2,1);
      }
      else {
        sub_0801CFC8(param_1,0x404,2,1);
      }
      *(undefined *)(param_1 + 0x100) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_08035B88(param_1);
  }
  return in_lr;
}

