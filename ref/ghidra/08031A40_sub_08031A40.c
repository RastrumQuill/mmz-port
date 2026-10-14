// sub_08031A40 at 0x08031A40 (thumb)

undefined4 sub_08031A40(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      sub_08029778(param_1,0xd);
      sub_080297C0(param_1);
      sub_08001EAC(0x3a);
    }
  }
  else if ((DAT_02022b6e & 1) == 0) {
    sub_0800561C(param_1 + 0x74,&DAT_082ad494);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_080014E8(&DAT_084e012c,(DAT_02022f9e - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0138,(DAT_02022fef - 6) * 0x20 + 0x200);
    sub_080014E8(&DAT_084e0140,(DAT_02022fa0 - 0x300) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e014c,(DAT_02022ff0 - 7) * 0x20 + 0x200);
    sub_080014E8(&DAT_084e0154,(DAT_02022fa2 - 0x350) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0160,(DAT_02022ff1 - 8) * 0x20 + 0x200);
    sub_080014E8(&DAT_08500398,(DAT_0202306c - 0x3d0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_085003a4,(DAT_020230ee - 9) * 0x20 + 0x200);
  }
  return in_lr;
}

