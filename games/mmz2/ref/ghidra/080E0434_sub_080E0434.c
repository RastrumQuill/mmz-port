// sub_080E0434 at 0x080E0434 (thumb)

undefined4 sub_080E0434(int param_1,int param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 7) == '\0') {
    sub_080032EC(199);
    sub_08002D68(0x52,0x1e0);
    DAT_02000fa0._0_2_ = 0;
    DAT_02000fa4._0_2_ = 0xfff8;
    DAT_02000fa4._2_2_ = 0xff92;
    DAT_02000fa0._2_2_ = (undefined2)DAT_02000fa0;
    *(undefined *)(param_2 + 0x5e3) = 0x40;
    *(undefined *)(param_2 + 0x5e2) = 0x10;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    return in_lr;
  }
  sub_08003338(0xfc);
  if (*(byte *)(param_2 + 0x5e3) == 0x3f) {
    sub_08002638(&DAT_083914a4,(DAT_02000f96 & 0xc) << 0xc);
    sub_08002AEC(&DAT_083914b0,0);
    sub_08002824(&DAT_083869b0,(DAT_02000f96 & 0x1f00) << 3,0x800);
    sub_08002824(&DAT_08386eb8,(DAT_02000f98 & 0x1f00) * 8,0x500);
  }
  sub_080E03D4(param_2);
  cVar1 = sub_080E0354(param_2);
  if (cVar1 == '\0') {
    if ((*(byte *)(param_2 + 0x5e3) < 0x30) && ((DAT_02000d14 & 8) != 0)) {
      sub_080DE274();
      sub_080032EC(2);
      DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x1300;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      *(undefined *)(param_1 + 6) = 0;
      *(undefined *)(param_1 + 7) = 0;
    }
  }
  else {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

