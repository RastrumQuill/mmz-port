// sub_08036BE4 at 0x08036BE4 (thumb)

undefined4 sub_08036BE4(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x2b05);
    *(undefined *)(param_1 + 0x152) = 0xe;
    *pcVar2 = *pcVar2 + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 4;
    *pcVar2 = '\0';
  }
  return in_lr;
}

