// sub_08063FBC at 0x08063FBC (thumb)

undefined4 sub_08063FBC(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    sub_08064470(param_1);
    pcVar2 = (char *)(param_1 + 0xd8);
    if (*pcVar2 != '\0') {
      *pcVar2 = *pcVar2 + -1;
    }
    iVar1 = *(int *)(param_1 + 0xd0);
    if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
      *(int *)(param_1 + 0xd0) = 0;
      *pcVar2 = -0x10;
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d6dc + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar1 = *(int *)(param_1 + 0xc4);
    if ((*(int *)(param_1 + 0x54) < iVar1) ||
       (iVar1 = *(int *)(param_1 + 200), iVar1 < *(int *)(param_1 + 0x54))) {
      *(int *)(param_1 + 0x54) = iVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08064068(param_1);
  }
  return in_lr;
}

