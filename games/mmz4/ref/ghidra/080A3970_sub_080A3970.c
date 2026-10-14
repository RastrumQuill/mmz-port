// sub_080A3970 at 0x080A3970 (thumb)

undefined4 sub_080A3970(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xda);
    cVar1 = *pcVar2;
    if (cVar1 != '\0') {
      *pcVar2 = cVar1 + -1;
    }
    if (*(char *)(param_1 + 0xbd) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885e9dc + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

