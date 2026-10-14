// sub_0803442C at 0x0803442C (thumb)

undefined4 sub_0803442C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar1;
    if (-0x40 < iVar1) {
      *(undefined4 *)(param_1 + 0x58) = 0xffffffc0;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xc0) + -0x4000) {
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    else if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0xc0) + -0x4000) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else if ((DAT_02022b6e & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080014E8(&DAT_084b8334,(DAT_02022ef2 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b8340,(DAT_02022f59 - 6) * 0x20 + 0x200);
    sub_080014E8(&DAT_084b8348,(DAT_02022ef4 - 0x3d0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b8354,(DAT_02022f5a - 7) * 0x20 + 0x200);
    sub_0800561C(param_1 + 0x74,&DAT_082ad5f4);
  }
  return in_lr;
}

