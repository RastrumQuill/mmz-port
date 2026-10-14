// sub_0807F67C at 0x0807F67C (thumb)

undefined4 sub_0807F67C(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (iVar8 == 0) {
      uVar2 = 2;
      goto LAB_0807f7bc;
    }
    sub_080127E4(param_1,0x5f04);
    sub_080801DC(param_1,1);
    uVar7 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar7 & 0x7fffffff;
    local_18 = *(int *)(iVar8 + 0x54) +
               ((uint)*(byte *)(param_1 + 0x11) * 2 + -1) *
               ((uVar7 * 2 >> 0x11 & 7) * 0x100 + 0x1000);
    local_14 = *(undefined4 *)(iVar8 + 0x58);
    uVar7 = sub_08038ED4(param_1 + 0x54,&local_18);
    iVar5 = (short)(&DAT_080ef450)[(uVar7 & 0xff) + 0x40 & 0xff] * 0x280;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
    iVar6 = (short)(&DAT_080ef450)[uVar7 & 0xff] * 0x280;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar6 >> 8;
    bVar1 = 0 < iVar5 >> 8;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  if (iVar8 != 0) {
    if (iVar5 < *(int *)(iVar8 + 0x58) + -0x1c00) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  sVar4 = sub_08008CFC(iVar6,iVar5 + 0x1c00);
  if (sVar4 == 0) {
    return in_lr;
  }
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) & 0xfd;
  uVar2 = 7;
LAB_0807f7bc:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(char *)(param_1 + 0xe) = (char)iVar8;
  return in_lr;
}

