// sub_08037724 at 0x08037724 (thumb)

undefined4 sub_08037724(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x2302);
    *pcVar2 = *pcVar2 + '\x01';
  }
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0801CFC8(param_1,0x500,4,1);
      *(undefined *)(param_1 + 0x100) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_08036F08(param_1);
  }
  return in_lr;
}

