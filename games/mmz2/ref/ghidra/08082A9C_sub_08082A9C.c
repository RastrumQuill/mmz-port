// sub_08082A9C at 0x08082A9C (thumb)

undefined4 sub_08082A9C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 in_lr;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  char *local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801260C(param_1);
    uVar6 = *(byte *)(param_1 + 0x11) ^ 1;
    if (uVar6 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar6 & 1) << 4);
    sub_080127E4(param_1,0x6e02);
    sub_08006E08(param_1 + 0x74,&DAT_08341118);
    uVar3 = sub_080EEF7C(0x500000);
    uVar3 = uVar3 & 0xffff;
    *(uint *)(param_1 + 0x60) = -uVar3;
    uVar6 = uVar3 * -8;
    if ((int)uVar6 < 0) {
      uVar6 = uVar3 * 8;
    }
    iVar4 = sub_080EF150(0xa00000,uVar6 & 0xffff);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = -iVar4;
    }
    *(int *)(param_1 + 0x5c) = iVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 2) {
    local_30 = param_1 + 0x54;
    local_28 = (char *)(param_1 + 0x24);
    local_2c = (int *)(param_1 + 0xb8);
    if (DAT_0202d004 <= *(int *)(param_1 + 0x58)) {
      sub_080032EC(0xf);
      sub_080B9E5C(param_1,2,0,0);
      iVar4 = 0x269ec3;
      uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar6 & 0x7fffffff;
      uVar6 = uVar6 * 2 >> 0x11 & 1;
      uVar3 = 0;
      if (uVar6 != 0xfffffffc) {
        do {
          uVar5 = DAT_0202e188 * 0x343fd + iVar4;
          uVar7 = (uVar5 & 0x7fffffff) * 0x343fd + iVar4;
          DAT_0202e188 = uVar7 & 0x7fffffff;
          local_24 = iVar4;
          sub_080AC8A4(*(int *)(param_1 + 0x54) + ((uVar5 * 2 >> 0x11 & 7) - 3) * 0x100,
                       DAT_0202d004 + (uVar7 * 2 >> 0x11 & 7) * 0x100,2);
          uVar3 = uVar3 + 1 & 0xff;
          iVar4 = local_24;
        } while (uVar3 < uVar6 + 4);
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        local_30 = param_1 + 0x54;
        local_28 = (char *)(param_1 + 0x24);
        local_2c = (int *)(param_1 + 0xb8);
        if (*(int *)(param_1 + 0x58) <= DAT_0202d004) {
          sub_080B9E5C(param_1,2,0,0);
          iVar4 = 0x269ec3;
          uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3;
          DAT_0202e188 = uVar6 & 0x7fffffff;
          uVar6 = uVar6 * 2 >> 0x11 & 1;
          uVar3 = 0;
          if (uVar6 != 0xfffffffc) {
            do {
              uVar5 = DAT_0202e188 * 0x343fd + iVar4;
              uVar7 = (uVar5 & 0x7fffffff) * 0x343fd + iVar4;
              DAT_0202e188 = uVar7 & 0x7fffffff;
              local_24 = iVar4;
              sub_080AC8A4(*(int *)(param_1 + 0x54) + ((uVar5 * 2 >> 0x11 & 7) - 3) * 0x100,
                           DAT_0202d004 + (uVar7 * 2 >> 0x11 & 7) * 0x100,2);
              uVar3 = uVar3 + 1 & 0xff;
              iVar4 = local_24;
            } while (uVar3 < uVar6 + 4);
          }
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        }
        goto LAB_08082d54;
      }
    }
    else if (bVar1 == 3) {
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      local_30 = param_1 + 0x54;
      local_28 = (char *)(param_1 + 0x24);
      local_2c = (int *)(param_1 + 0xb8);
      if (((bVar1 & 3) != 0) ||
         (uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar6 & 0x7fffffff,
         (uVar6 * 2 >> 0x11 & 3) != 0)) goto LAB_08082d54;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(param_1 + 0x54) + -0xc00;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54) + 0xc00;
      }
      sub_080AC8A4(iVar4,*(undefined4 *)(param_1 + 0x58),0);
    }
    local_30 = param_1 + 0x54;
    local_28 = (char *)(param_1 + 0x24);
    local_2c = (int *)(param_1 + 0xb8);
  }
LAB_08082d54:
  pcVar8 = (char *)(param_1 + 0xbe);
  sub_080128D4(param_1);
  local_38 = *(int *)(param_1 + 0x54);
  local_34 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = local_38 + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = local_34 + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    cVar2 = sub_08038ED4(local_30,&local_38);
    *pcVar8 = cVar2;
  }
  else {
    cVar2 = sub_08038ED4(local_30,&local_38);
    *pcVar8 = -0x80 - cVar2;
  }
  *local_28 = *pcVar8;
  if (*local_2c < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *local_2c;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

