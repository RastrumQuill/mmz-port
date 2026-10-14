// sub_08034064 at 0x08034064 (thumb)

undefined4 sub_08034064(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0884fb84 + (uint)*(byte *)(param_1 + 0x156) * 2));
    sub_08040BF0(param_1);
    *(undefined *)(param_1 + 0x151) = 0x18;
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_0803A3BC(param_1,*(undefined2 *)(&DAT_0884fb84 + (uint)*(byte *)(param_1 + 0x156) * 2));
  sub_0803A3FC(param_1,*(undefined2 *)(&DAT_0884fb84 + (uint)*(byte *)(param_1 + 0x156) * 2));
  if (*(char *)(param_1 + 0x71) < '\x01') {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 6;
  }
  else {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
    cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0x100) = 3;
      *(undefined *)(param_1 + 0x101) = 0;
      sub_080334E8(param_1);
      return in_lr;
    }
  }
  cVar1 = *(char *)(param_1 + 0x151) + -1;
  *(char *)(param_1 + 0x151) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 3;
    *(undefined *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}

