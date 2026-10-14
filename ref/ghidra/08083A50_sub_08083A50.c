// sub_08083A50 at 0x08083A50 (thumb)

undefined4 sub_08083A50(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 2) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
      pcVar2 = (char *)(*(int *)(param_1 + 0x20) + 0xe4);
      cVar1 = *pcVar2 + -1;
      *pcVar2 = cVar1;
      if (cVar1 == '\0') {
        sub_08001EE8((int)*(short *)(param_1 + 0xc4));
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0x10);
    sub_08001EE8((int)*(short *)(param_1 + 0xc4));
  }
  return in_lr;
}

