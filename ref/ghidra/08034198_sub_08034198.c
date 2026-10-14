// sub_08034198 at 0x08034198 (thumb)

undefined4 sub_08034198(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 < 0x1e) && (*(byte *)(param_1 + 0x12) = bVar1 + 1, bVar1 == 0x1d)) {
    sub_08001EAC(0xb0);
  }
  if ((DAT_02022b6e & 1) == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 5;
    sub_080014E8(&DAT_084b8334,(DAT_02022ef2 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b8340,(DAT_02022f59 - 6) * 0x20 + 0x200);
    sub_080014E8(&DAT_084b8348,(DAT_02022ef4 - 0x3d0) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084b8354,(DAT_02022f5a - 7) * 0x20 + 0x200);
    sub_0800561C(param_1 + 0x74,&DAT_082ad5f4);
  }
  return in_lr;
}

