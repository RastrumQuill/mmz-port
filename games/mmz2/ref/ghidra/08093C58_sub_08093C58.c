// sub_08093C58 at 0x08093C58 (thumb)

undefined4 sub_08093C58(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08093dce:
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08342a96 + (uint)*(byte *)(param_1 + 0x12) * 2));
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      iVar7 = sub_08009240(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar7 < 0) {
        iVar7 = 0x7fffffff;
      }
      iVar3 = sub_080090D4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (0 < iVar3) {
        iVar3 = -0x80000000;
      }
      if (iVar7 + iVar3 < 0 == SCARRY4(iVar7,iVar3)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        iVar3 = *(int *)(param_1 + 0x54) + iVar3;
        *(int *)(param_1 + 0x54) = iVar3;
        iVar3 = sub_080093C4(iVar3 + 0x400,*(undefined4 *)(param_1 + 0x58));
        iVar8 = -0x800;
        iVar7 = sub_0800958C(*(int *)(param_1 + 0x54) + -0x800,*(undefined4 *)(param_1 + 0x58));
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        iVar3 = *(int *)(param_1 + 0x54) + 0x400;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        iVar7 = *(int *)(param_1 + 0x54) + iVar7;
        *(int *)(param_1 + 0x54) = iVar7;
        iVar3 = sub_080093C4(iVar7 + -0x400,*(undefined4 *)(param_1 + 0x58));
        iVar8 = 0x400;
        iVar7 = sub_0800958C(*(int *)(param_1 + 0x54) + 0x400,*(undefined4 *)(param_1 + 0x58));
        if (iVar7 < iVar3) {
          iVar7 = iVar3;
        }
        iVar3 = *(int *)(param_1 + 0x54) + -0x400;
      }
      iVar4 = sub_0800958C(iVar3,*(undefined4 *)(param_1 + 0x58));
      iVar3 = sub_080093C4(*(int *)(param_1 + 0x54) + iVar8,*(undefined4 *)(param_1 + 0x58));
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      if (*(int *)(param_1 + 0x58) < iVar7 + 0x1000) {
        *(int *)(param_1 + 0x58) = iVar7 + 0x1000;
      }
      if (iVar3 + -0x1000 < *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x58) = iVar3 + -0x1000;
      }
      if (0x1000 < (uint)(iVar3 - iVar7)) {
        uVar2 = 0;
        *(undefined *)(param_1 + 0xd) = 0;
        goto LAB_08093f0e;
      }
      if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8) + -0x16800) {
        uVar2 = 0;
        *(undefined *)(param_1 + 0xd) = 0;
        goto LAB_08093f0e;
      }
      *(int *)(param_1 + 100) = iVar7;
      *(int *)(param_1 + 0x68) = iVar3;
      *(undefined *)(param_1 + 0xbd) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(undefined *)(param_1 + 0x12) = 0;
      sub_080032EC(0x49);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08093dce;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  if (((*(char *)(param_1 + 0x12) == '\x01') && (*(char *)(param_1 + 0x71) == '\x01')) &&
     (pcVar6 = (char *)(param_1 + 0xbd), *pcVar6 == '\0')) {
    iVar7 = param_1 + 0x54;
    sub_080B0ACC(iVar7,&DAT_08342a60,0,~(*(byte *)(param_1 + 10) >> 4) & 1);
    sub_080B0ACC(iVar7,&DAT_08342a60,0,~(*(byte *)(param_1 + 10) >> 4) & 1);
    sub_080B0ACC(iVar7,&DAT_08342a60,0,~(*(byte *)(param_1 + 10) >> 4) & 1);
    *pcVar6 = *pcVar6 + '\x01';
  }
  if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if (bVar1 < (byte)(&DAT_08342aa0)[*(byte *)(param_1 + 0x12)]) {
    return in_lr;
  }
  uVar5 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  if ((uVar5 & 0xff) == 1) {
    sub_08006E08(param_1 + 0x74,&DAT_083429e4);
  }
  if (*(char *)(param_1 + 0x12) == '\x02') {
    sub_08006E08(param_1 + 0x74,&DAT_083429b4);
  }
  if (*(char *)(param_1 + 0x12) == '\x03') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_20 = -0x1600;
    }
    else {
      local_20 = 0x1600;
    }
    local_20 = *(int *)(param_1 + 0x54) + local_20;
    local_1c = *(undefined4 *)(param_1 + 0x58);
    sub_080ABC94(&local_20,0,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
    sub_080032EC(0x2d);
  }
  if (*(char *)(param_1 + 0x12) == '\x04') {
    sub_08006E08(param_1 + 0x74,&DAT_083429e4);
  }
  if (*(byte *)(param_1 + 0x12) < 5) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *(undefined *)(param_1 + 0xd) = 0;
  }
LAB_08093f0e:
  *(undefined *)(param_1 + 0xe) = uVar2;
  return in_lr;
}

