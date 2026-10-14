// sub_0802E244 at 0x0802E244 (thumb)

undefined4 sub_0802E244(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  pbVar4 = (byte *)(param_1 + 0xd8);
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 + 1;
  if (0x44 < (byte)(bVar1 + 1)) {
    *pbVar4 = 0;
  }
  pbVar4 = (byte *)(param_1 + 200);
  uVar7 = (uint)*pbVar4;
  if (*(int *)(&DAT_082ad010 + uVar7 * 4) <= *(int *)(param_1 + 0x4c)) goto LAB_0802e2be;
  if (uVar7 < 2) {
LAB_0802e282:
    *(undefined4 *)(param_1 + 0x54) = 0xffffffe0;
  }
  else if (uVar7 < 0xf) {
LAB_0802e294:
    *(undefined4 *)(param_1 + 0x54) = 0xffffff40;
  }
  else {
    if (uVar7 < 0x36) goto LAB_0802e282;
    if (uVar7 < 0x37) goto LAB_0802e294;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  DAT_02022aed = *pbVar4 + 1;
  *pbVar4 = DAT_02022aed;
  if (*(int *)(param_1 + 0x54) == -0xc0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
LAB_0802e2be:
  puVar5 = (uint *)(param_1 + 0xd0);
  uVar7 = *puVar5 + 1;
  *puVar5 = uVar7;
  if (*pbVar4 == 0x38) {
    iVar8 = *(int *)(param_1 + 0x4c) + -0x5800;
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    local_18 = iVar8;
    iVar3 = sub_080C8CB0(uVar2 * 2 >> 0x11,0x60);
    local_14 = *(int *)(param_1 + 0x50) + (iVar3 + -0x10) * -0x100;
    if ((uVar7 & 7) == 0) {
      sub_0809B340(iVar8,local_14,7,0);
    }
    else if ((uVar7 & 7) == 3) {
      sub_0809B340(iVar8,local_14,7,1);
    }
    else if ((uVar7 & 3) == 1) {
      sub_0808827C(3,&local_18);
    }
    if (*(int *)(param_1 + 0xd4) == 0) {
      DAT_02022ad5 = DAT_02022ad5 | 8;
      *(int *)(param_1 + 0xd4) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x54) == -0x20) {
    if (*pbVar4 < 0x31) {
      uVar6 = 0x60;
    }
    else {
      uVar6 = 0x30;
    }
    uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar7 & 0x7fffffff;
    iVar3 = sub_080C8CB0(uVar7 * 2 >> 0x11,uVar6);
    local_14 = *(int *)(param_1 + 0x50) + (iVar3 + -0x10) * -0x100;
    uVar7 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar7 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x4c) - ((uVar7 * 2 >> 0x11 & 3) * 0x100 + 0x5800);
    uVar7 = *puVar5 & 7;
    if (uVar7 == 0) {
      sub_0809B340(local_18,local_14,7,0);
    }
    else if (uVar7 == 3) {
      sub_0809B340(local_18,local_14,7,1);
    }
    else if ((*puVar5 & 3) == 1) {
      sub_0808827C(3,&local_18);
    }
  }
  return in_lr;
}

