// sub_0803C68C at 0x0803C68C (thumb)

undefined4 sub_0803C68C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x10800;
      iVar2 = *(int *)(param_1 + 0x50) + -0x4000;
    }
    else {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x8000;
      iVar2 = *(int *)(param_1 + 0x50) + -0x5000;
    }
    *(int *)(param_1 + 0x50) = iVar2;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffc00;
    *(undefined4 *)(param_1 + 0x58) = 0x100;
    *(undefined *)(param_1 + 0x12) = 0x36;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x12) == '\b') {
    sub_08029778(param_1,1);
    sub_080297C0(param_1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    sub_080014E8(&DAT_084e0208,(DAT_02022fb4 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0214,(DAT_02022ffa - 6) * 0x20 + 0x200);
    sub_080014E8(&DAT_084e021c,(DAT_02022fb6 - 0x290) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0228,(DAT_02022ffb - 7) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0x17;
  }
  return in_lr;
}

