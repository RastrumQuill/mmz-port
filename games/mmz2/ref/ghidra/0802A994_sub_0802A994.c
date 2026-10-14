// sub_0802A994 at 0x0802A994 (thumb)

undefined4 sub_0802A994(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  sub_08039F4C(*(undefined4 *)(param_1 + 0x2c));
  iVar3 = sub_08039F6C();
  if (iVar3 != 0) {
    if ((*(char *)(param_1 + 0x2b8) == '\0') || (iVar3 == -1)) {
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 3;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      goto LAB_0802aa72;
    }
    cVar2 = (&DAT_08333d64)[iVar3];
    if ('\0' < cVar2) {
      *(char *)(param_1 + 0x17d) = *(char *)(param_1 + 0x179);
      *(char *)(param_1 + 0x179) = cVar2;
      sub_0802AD28(param_1);
      return in_lr;
    }
    if (iVar3 == 5) {
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 3;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      goto LAB_0802aa72;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x2b9);
  if (bVar1 != 0) {
    iVar3 = bVar1 - 1;
    *(byte *)(param_1 + 0x2b9) = (byte)iVar3;
    sub_08035F88(param_1,&DAT_08335d44 + (uint)*(byte *)(param_1 + 0x177) * 4);
    sub_08035FB4(param_1,*(undefined2 *)(param_1 + 0x2c2),8 - iVar3,8);
    uVar4 = sub_08036844(param_1,(int)*(char *)(param_1 + 0x2b8));
    uVar5 = uVar4 >> 0x10;
    if (((uVar4 & 0xf) == 0) && ((uVar5 & 0xf) == 0)) {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x2b8) == '\0') ||
       ((((((uVar4 & 0xf) == 0 || ((uVar4 & 0x400) != 0)) || ((uVar4 & 0xff7f) == 0xf)) ||
         ((uVar4 & 0xff7f) == 0xe)) &&
        ((((uVar5 & 0xf) == 0 || ((uVar5 & 0x400) != 0)) ||
         (((uVar5 & 0xffffff7f) == 0xf || ((uVar5 & 0xffffff7f) == 0xe)))))))) {
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 3;
    }
    else {
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 3;
    }
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    return in_lr;
  }
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 3;
  *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
  *(byte *)(param_1 + 0x179) = bVar1;
LAB_0802aa72:
  sub_0802AB78(param_1);
  return in_lr;
}

