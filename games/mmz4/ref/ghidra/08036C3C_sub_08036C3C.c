// sub_08036C3C at 0x08036C3C (thumb)

undefined4 sub_08036C3C(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x2b07);
    *(undefined *)(param_1 + 0x152) = 4;
    *pcVar2 = *pcVar2 + '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CFC8(param_1,0x403,2,1);
    }
    else {
      sub_0801CFC8(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

