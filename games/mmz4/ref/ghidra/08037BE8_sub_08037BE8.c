// sub_08037BE8 at 0x08037BE8 (thumb)

undefined4 sub_08037BE8(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(param_1 + 0xe)) {
    cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
    if (cVar1 == '\0') {
      pcVar2 = (char *)(param_1 + 0x147);
      if (*pcVar2 == -1) {
        *pcVar2 = -1;
        return in_lr;
      }
      *(char *)(param_1 + 0x144) = *pcVar2;
      *pcVar2 = -1;
      *(undefined *)(param_1 + 0x100) = 3;
      *(undefined *)(param_1 + 0x101) = 0;
    }
    else {
      *(undefined *)(param_1 + 0x147) = 0xff;
      *(undefined *)(param_1 + 0x100) = 3;
      *(undefined *)(param_1 + 0x101) = 0;
    }
    sub_08037C6C(param_1);
  }
  return in_lr;
}

