// sub_080A0098 at 0x080A0098 (thumb)

undefined4 sub_080A0098(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08006E08(param_1 + 0x74,&DAT_08344300);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar2 & 0x7fffffff;
        sub_080127E4(param_1,uVar2 * 2 >> 0x11 & 1 | 0x5300);
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      if (*(char *)(param_1 + 0x12) == '\0') {
        iVar3 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (iVar3 < 0) {
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined *)(param_1 + 0x12) = 1;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
          *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60) >> 1;
        }
      }
      else {
        bVar1 = *(char *)(param_1 + 0x13) + 1;
        *(byte *)(param_1 + 0x13) = bVar1;
        if ((bVar1 & 2) == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        *(byte *)(param_1 + 10) = bVar1;
        uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
        if (0x2000 < uVar2) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
        }
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08006E08(param_1 + 0x74,&DAT_08344330);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_14 = *(int *)(param_1 + 0x54) + ((uVar2 * 0x10 >> 0x14) - 0x800);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_0809F6EC(&local_14);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -2;
  return in_lr;
}

