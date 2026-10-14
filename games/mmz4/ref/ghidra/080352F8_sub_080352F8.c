// sub_080352F8 at 0x080352F8 (thumb)

undefined4 sub_080352F8(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08039FE4(param_1,param_1 + 0x144);
  if (cVar1 == '\0') {
    pcVar2 = (char *)(param_1 + 0x147);
    if (*pcVar2 == -1) {
      if (*(char *)(param_1 + 0x167) == '\0') {
LAB_0803539e:
        *pcVar2 = -1;
        return in_lr;
      }
      if ((*(char *)(param_1 + 0xc0) != '\x04') && (*(char *)(param_1 + 0xc1) != '\x04')) {
        *(char *)(param_1 + 0x167) = '\0';
        goto LAB_0803539e;
      }
      *(undefined *)(param_1 + 0x144) = 4;
    }
    else {
      *(char *)(param_1 + 0x144) = *pcVar2;
      *pcVar2 = -1;
    }
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x147) = 0xff;
    *(undefined *)(param_1 + 0x100) = 3;
    *(undefined *)(param_1 + 0x101) = 0;
  }
  sub_080353AC(param_1);
  return in_lr;
}

