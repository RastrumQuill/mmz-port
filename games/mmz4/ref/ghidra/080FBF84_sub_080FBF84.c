// sub_080FBF84 at 0x080FBF84 (thumb)

undefined4 sub_080FBF84(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if ((*(char *)(param_1 + 0x11) == '\x01') && (2 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    if (((*(char *)(param_1 + 0xd) == '\0') &&
        (((iVar3 = *(int *)(param_1 + 0xc0), iVar3 != 0 && (*(char *)(iVar3 + 0xd) == '\x02')) &&
         (*(char *)(iVar3 + 0xe) != '\0')))) && (sVar2 = sub_0803864C(iVar3), sVar2 != 0)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x30;
        iVar5 = 0x2d034;
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x30;
        iVar5 = 0x2d036;
      }
      *(short *)(&DAT_02000ab0 + iVar5) = *(short *)(&DAT_02000ab0 + iVar5) + 0x30;
      iVar5 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
      }
      uVar4 = FUN_081288bc(iVar5,0x555);
      if (uVar4 < 3) {
        sub_0801CF00(param_1,uVar4 + 0x9800 & 0xffff);
      }
      else {
        sub_0801CF00(param_1,0x9803);
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if ((bVar1 & 3) == 0) {
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x10) == 0) {
          local_28 = *(int *)(param_1 + 0x54) + 0x900;
        }
        else {
          local_28 = *(int *)(param_1 + 0x54) + -0x900;
        }
        local_24 = *(int *)(iVar3 + 0x58) + -0x800;
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        uVar6 = uVar4 & 0x7fffffff;
        DAT_0202dc38 = uVar6;
        iVar3 = sub_08128A9C(uVar4 * 2 >> 0x11,3);
        uVar4 = uVar6 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 1;
        if ((bVar1 & 0x10) == 0) {
          uVar4 = uVar4 << 4;
        }
        else {
          uVar4 = uVar4 << 4 | 1;
        }
        sub_080D4898(&local_28,&UNK_088678b0 + iVar3 * 0x1c,0,uVar4);
      }
    }
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0xc0) = 0;
  }
  return in_lr;
}

