// sub_0803481C at 0x0803481C (thumb)

undefined8 sub_0803481C(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 in_lr;
  
  bVar6 = *(byte *)(param_1 + 0x17d);
  uVar1 = (uint)bVar6;
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 3;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 1;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 1;
  *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
  *(byte *)(param_1 + 0x179) = bVar6;
  bVar6 = *(byte *)(param_1 + 0x2b9);
  uVar7 = (uint)bVar6;
  iVar4 = (int)*(char *)(param_1 + 0x71);
  uVar5 = (uint)(char)*(byte *)(param_1 + 0x72);
  if (1 < uVar1) {
    if ((*(char *)(param_1 + 0x174) == '\0') && (*(char *)(param_1 + 0x175) == '\x01')) {
      iVar4 = (byte)(&DAT_08335dfc)[uVar1] - 1;
      uVar5 = uVar7;
      if (*(byte *)(*(int *)(&DAT_08335dec + uVar1 * 4) + iVar4) < uVar7) {
        do {
          uVar7 = uVar7 - *(byte *)(*(int *)(&DAT_08335dec + uVar1 * 4) + iVar4);
          iVar4 = iVar4 + -1;
          uVar5 = uVar7;
        } while (*(byte *)(*(int *)(&DAT_08335dec + uVar1 * 4) + iVar4) < uVar7);
      }
    }
    else {
      uVar7 = iVar4 + 1;
      bVar6 = *(byte *)(param_1 + 0x72);
      if (uVar7 < (byte)(&DAT_08335dfc)[uVar1]) {
        uVar3 = uVar5;
        do {
          uVar3 = uVar3 + *(byte *)(*(int *)(&DAT_08335dec + uVar1 * 4) + uVar7);
          bVar6 = (byte)uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (byte)(&DAT_08335dfc)[uVar1]);
      }
    }
  }
  uVar3 = (uint)*(byte *)(param_1 + 0xd);
  uVar7 = uVar3 + 2;
  if (uVar3 == 0) {
    uVar7 = (uint)*(byte *)(param_1 + 0xe);
  }
  iVar2 = ((byte)(&DAT_08335ddc)[uVar7] - 1) + uVar1;
  if ((uVar3 == 0) && (*(byte *)(param_1 + 0xe) == 1)) {
    *(byte *)(param_1 + 0x2b9) = bVar6;
    if ((*(char *)(param_1 + 0x174) != '\0') || (*(char *)(param_1 + 0x175) != '\0')) {
      sub_0801EA38(param_1,iVar2,0,1);
      goto LAB_0803498c;
    }
  }
  else if (1 < uVar1) {
    sub_0801EA38(param_1,iVar2,iVar4,uVar5);
    goto LAB_0803498c;
  }
  sub_0801E9FC(param_1);
LAB_0803498c:
  return CONCAT44(in_lr,3);
}

