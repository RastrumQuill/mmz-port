// sub_0804058C at 0x0804058C (thumb)

undefined4 sub_0804058C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x1a);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080014E8(&DAT_084e0258,(DAT_02022fbc - 0x300) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0264,(DAT_02022ffe - 6) * 0x20 + 0x200);
    sub_080014E8(&DAT_084e026c,(DAT_02022fbe - 0x360) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e0278,(DAT_02022fff - 6) * 0x20 + 0x200);
    sub_080014E8(&DAT_084e0280,(DAT_02022fc0 - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e028c,(DAT_02023000 - 7) * 0x20 + 0x200);
    sub_080014E8(&DAT_084e0294,(DAT_02022fc2 - 0x370) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e02a0,(DAT_02023001 - 7) * 0x20 + 0x200);
    sub_080014E8(&DAT_084e02a8,(DAT_02022fc4 - 0x208) * 0x20 + 0x10000);
    sub_0800179C(&DAT_084e02b4,(DAT_02023002 - 7) * 0x20 + 0x200);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 < 0x4f) && (*(byte *)(param_1 + 0x12) = bVar1 + 1, bVar1 == 0x4e)) {
    sub_08001EAC(0xb1);
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if ((DAT_02022b6e & 1) == 0) {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080297C0(param_1);
  return in_lr;
}

