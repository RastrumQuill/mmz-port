// sub_0803A200 at 0x0803A200 (thumb)

undefined4 sub_0803A200(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  char cVar9;
  short *psVar10;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    if ((*(short *)(param_1 + 0xc0) == 0x30) && ((*(byte *)(param_1 + 10) & 0x10) != 0)) {
      sub_0803A5F4(param_1,1);
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && ((*(byte *)(param_1 + 10) & 0x10) != 0)) {
      if (*(ushort *)(param_1 + 0xc0) == 0x20) {
        sub_08001EAC(0x2e);
      }
      if (((*(ushort *)(param_1 + 0xc0) < 0x20) && ((*(ushort *)(param_1 + 0x90) & 4) != 0)) &&
         (psVar10 = (short *)(param_1 + 0xc2), *psVar10 == 0)) {
        sub_08001EAC(0x83);
        *psVar10 = *psVar10 + 1;
      }
    }
  }
  else if (bVar1 == 2) {
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      if (*(ushort *)(param_1 + 0xc0) == 0x34) {
        uVar3 = sub_08001EAC(0x2d);
        *(undefined2 *)(param_1 + 200) = uVar3;
      }
      uVar2 = *(ushort *)(param_1 + 0xc0);
      if ((uVar2 < 0x34) && ((uVar2 & 1) != 0)) {
        sub_080014E8(&DAT_084e01cc,(DAT_02022fae - 0x308) * 0x20 + 0x10000);
        sub_0800179C(&DAT_084e01d8,(DAT_02022ff7 - 6) * 0x20 + 0x200);
        sub_0807F5E4(param_1,1);
      }
    }
  }
  else if (bVar1 == 3) {
    sVar4 = *(short *)(param_1 + 0xc0);
    if (sVar4 == 0x20) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_0803a414;
      sub_080014E8(&DAT_084e01e0,(DAT_02022fb0 - 0x308) * 0x20 + 0x10000);
      sub_0800179C(&DAT_084e01ec,(DAT_02022ff8 - 6) * 0x20 + 0x200);
      uVar5 = sub_080C88E8((*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) * 0x1000 >>
                           0x10,(*(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50)) * 0x1000
                                >> 0x10);
      iVar6 = (uVar5 & 0xffff) + 0x4000;
      pcVar8 = (char *)(param_1 + 0xcc);
      *pcVar8 = (char)((uint)iVar6 >> 8);
      if (0x68 < (iVar6 >> 8 & 0xffU)) {
        *pcVar8 = 'h';
      }
      iVar6 = *(int *)(param_1 + 0x4c);
      uVar7 = *(undefined4 *)(param_1 + 0x50);
      cVar9 = *pcVar8 + '\x18';
    }
    else {
      if (sVar4 != 0x16) {
        if ((sVar4 == 0xc) && ((*(byte *)(param_1 + 10) & 0x10) != 0)) {
          sub_0807FE50(*(int *)(param_1 + 0x4c) + 0x1500,*(undefined4 *)(param_1 + 0x50),0,
                       *(char *)(param_1 + 0xcc) + -0x18);
          sub_08001EAC(0x21);
        }
        goto LAB_0803a414;
      }
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_0803a414;
      iVar6 = *(int *)(param_1 + 0x4c);
      uVar7 = *(undefined4 *)(param_1 + 0x50);
      cVar9 = *(char *)(param_1 + 0xcc);
    }
    sub_0807FE50(iVar6 + 0x1500,uVar7,0,cVar9);
    sub_08001EAC(0x21);
  }
LAB_0803a414:
  sVar4 = *(short *)(param_1 + 0xc0) + -1;
  *(short *)(param_1 + 0xc0) = sVar4;
  if (sVar4 == -1) {
    sub_08001EE8((int)*(short *)(param_1 + 200));
    *(short *)(param_1 + 200) = -1;
    sub_08029778(param_1,2);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080297C0(param_1);
  return in_lr;
}

