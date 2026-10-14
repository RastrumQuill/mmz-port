// sub_080B28C4 at 0x080B28C4 (thumb)

undefined4 sub_080B28C4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  uint local_34 [4];
  undefined4 uStack_24;
  
  local_34[0] = 0xf;
  local_34[1] = 0x10;
  local_34[2] = 0x11;
  local_34[3] = 0x12;
  uStack_24 = 0x13;
  sub_0809C980(param_1,&stack0xffffffe0);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      iVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x50) = iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
      if (*(char *)(param_1 + 0x12) == '\0') {
        uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar3 & 0x7fffffff;
        sub_0809B340(*(int *)(param_1 + 0x4c) + 0x2100,
                     iVar4 + ((uVar3 * 2 >> 0x11 & 7) * 7 + 6) * 0x100,3,0);
      }
      else {
        uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
        DAT_02022890 = uVar3 & 0x7fffffff;
        sub_0809B340(*(int *)(param_1 + 0x4c) + -0x2100,
                     iVar4 + ((uVar3 * 2 >> 0x11 & 7) * 7 + 6) * 0x100,3,0);
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
      if (uVar3 < 0x801) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080B2B20(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(ushort *)(param_1 + 0x90) & 4) == 0) {
      if (*(char *)(param_1 + 0x10) != '\x03') {
        return in_lr;
      }
      if ((DAT_02022ad6 & 8) == 0) {
        return in_lr;
      }
    }
    if ((*(char *)(DAT_0202286c + 0xd) != '\0') && (*(char *)(DAT_0202286c + 0xd) != '\x02')) {
      return in_lr;
    }
    (&DAT_02022ad4)[(int)local_34[*(byte *)(param_1 + 0x10)] >> 3] =
         (byte)(1 << (local_34[*(byte *)(param_1 + 0x10)] & 7)) |
         (&DAT_02022ad4)[(int)local_34[*(byte *)(param_1 + 0x10)] >> 3];
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x12) = 0x14;
    iVar4 = 0x600;
    iVar5 = 6;
    do {
      sub_0809B340(*(int *)(param_1 + 0x4c) + 0x2100,*(int *)(param_1 + 0x50) + iVar4,3,0);
      sub_0809B340(*(int *)(param_1 + 0x4c) + -0x2100,*(int *)(param_1 + 0x50) + iVar4,3,0);
      iVar4 = iVar4 + 0x800;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    iVar4 = 0x600;
    iVar5 = 3;
    do {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + 0x2100,*(int *)(param_1 + 0x50) + iVar4,4,
                   (uVar3 * 2 >> 0x11 & 1) << 4 | 1);
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_0809B340(*(int *)(param_1 + 0x4c) + -0x2100,*(int *)(param_1 + 0x50) + iVar4,4,
                   (uVar3 * 2 >> 0x11 & 1) << 4);
      iVar4 = iVar4 + 0xa00;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    sub_08001EAC(0xac);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

