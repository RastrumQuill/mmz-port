// sub_0807E898 at 0x0807E898 (thumb)

undefined4 sub_0807E898(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x5c) < -0x6ff) goto LAB_0807e8da;
    iVar2 = *(int *)(param_1 + 0x5c) + -0x20;
  }
  else {
    if (0x6ff < *(int *)(param_1 + 0x5c)) goto LAB_0807e8da;
    iVar2 = *(int *)(param_1 + 0x5c) + 0x20;
  }
  *(int *)(param_1 + 0x5c) = iVar2;
LAB_0807e8da:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

