// sub_080344EC at 0x080344EC (thumb)

undefined4 sub_080344EC(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    sub_0801CF00(param_1,0x1e02);
    *pcVar3 = *pcVar3 + '\x01';
  }
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x100) = 0;
      uVar2 = sub_0802B7C0(param_1);
      sub_0801CF00(param_1,uVar2);
    }
  }
  else {
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
    sub_080334E8(param_1);
  }
  return in_lr;
}

