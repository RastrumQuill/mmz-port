// sub_08034158 at 0x08034158 (thumb)

undefined4 sub_08034158(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    sub_0801CF00(param_1,0x2708);
    *(undefined *)(param_1 + 0x151) = 4;
    *pcVar3 = *pcVar3 + '\x01';
  }
  sub_0803A3BC(param_1,0x2708);
  sub_0803A3FC(param_1,0x2708);
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0x151) + -1;
    *(char *)(param_1 + 0x151) = cVar1;
    if (cVar1 == -1) {
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

