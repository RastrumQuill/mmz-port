// sub_080939CC at 0x080939CC (thumb)

undefined4 sub_080939CC(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      goto LAB_08093ab2;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    iVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3;
    iVar4 = sub_08009684(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x400);
    iVar3 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    iVar5 = sub_08009774(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
    iVar4 = sub_08009684(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x800);
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    if (*(int *)(param_1 + 0x54) < iVar3 + 0x1000) {
      *(int *)(param_1 + 0x54) = iVar3 + 0x1000;
    }
    if (iVar4 + -0x1000 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar4 + -0x1000;
    }
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8) + -0x16800) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xbd) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080032EC(0x49);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08342a86 + (uint)*(byte *)(param_1 + 0x12) * 2));
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08093ab2:
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\x01') {
    pcVar6 = (char *)(param_1 + 0x71);
    if ((*pcVar6 == '\x01') && (pcVar8 = (char *)(param_1 + 0xbd), *pcVar8 == '\0')) {
      iVar3 = param_1 + 0x54;
      sub_080B0ACC(iVar3,&DAT_08342a44,0,0);
      sub_080B0ACC(iVar3,&DAT_08342a44,0,1);
      sub_080B0ACC(iVar3,&DAT_08342a44,0,0);
      *pcVar8 = *pcVar8 + '\x01';
    }
    if (*pcVar6 == '\0') {
      sub_08006E08(param_1 + 0x74,&DAT_08342984);
    }
    if (*pcVar6 == '\x04') {
      sub_08006E08(param_1 + 0x74,&DAT_08342954);
    }
  }
  if ((*(char *)(param_1 + 0x12) == '\x04') && (*(char *)(param_1 + 0x71) == '\x03')) {
    sub_08006E08(param_1 + 0x74,&DAT_08342984);
  }
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if ((byte)(&DAT_08342a90)[*(byte *)(param_1 + 0x12)] <= bVar2) {
      uVar7 = *(byte *)(param_1 + 0x12) + 1;
      *(char *)(param_1 + 0x12) = (char)uVar7;
      if ((uVar7 & 0xff) == 1) {
        iVar3 = sub_08065A68(*(undefined *)(param_1 + 0x11));
        if (iVar3 == 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(undefined *)(param_1 + 0x4c) = 0;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        }
        else {
          bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
          if (bVar1) {
            bVar2 = *(byte *)(param_1 + 10) | 0x10;
          }
          else {
            bVar2 = *(byte *)(param_1 + 10) & 0xef;
          }
          *(byte *)(param_1 + 10) = bVar2;
          *(bool *)(param_1 + 0x4c) = bVar1;
          *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
        }
      }
      if (*(char *)(param_1 + 0x12) == '\x03') {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          local_20 = -0xe00;
        }
        else {
          local_20 = 0xe00;
        }
        local_20 = *(int *)(param_1 + 0x54) + local_20;
        local_1c = *(int *)(param_1 + 0x58) + -0xa00;
        sub_080ABC94(&local_20,0,((uint)*(byte *)(param_1 + 10) << 0x18) >> 0x1c & 1);
        sub_080032EC(0x2d);
      }
      bVar1 = *(byte *)(param_1 + 0x12) < 5;
      if (!bVar1) {
        *(undefined *)(param_1 + 0xd) = 0;
      }
      *(bool *)(param_1 + 0xe) = bVar1;
    }
  }
  return in_lr;
}

