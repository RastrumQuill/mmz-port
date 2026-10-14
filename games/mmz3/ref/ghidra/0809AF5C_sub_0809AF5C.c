// sub_0809AF5C at 0x0809AF5C (thumb)

undefined4 sub_0809AF5C(int param_1)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    if (*(byte *)(param_1 + 0xb6) == 0) {
      if (*(char *)(param_1 + 0xb4) == '\x01') {
        iVar5 = *(int *)(param_1 + 0x28);
        if (*(short *)(iVar5 + 4) != 2) {
          sVar2 = *(short *)(iVar5 + 0x38) + 5;
          goto LAB_0809afac;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0x28);
        if (*(short *)(iVar5 + 4) != 2) {
          *(short *)(iVar5 + 0x38) = *(short *)(iVar5 + 0x38) + 1;
          sub_0800471C(0x137);
        }
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x28);
      if (*(short *)(iVar5 + 4) != 2) {
        sVar2 = (ushort)*(byte *)(param_1 + 0xb6) * 2 + *(short *)(iVar5 + 0x38);
LAB_0809afac:
        *(short *)(iVar5 + 0x38) = sVar2;
        sub_0800471C(0x137);
      }
    }
    pcVar3 = (char *)(param_1 + 0xb4);
    sub_080B2484(1,param_1 + 0x54);
    sub_0800471C(0x2a);
    uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar7 & 0x7fffffff;
    uVar7 = uVar7 * 2 >> 0x11 & 3;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    sub_080C9120(&local_18,*pcVar3 + '\x01',0x4707,uVar7);
    sub_080C9120(&local_18,*pcVar3 + '\x01',0x4708,uVar7);
    sub_080C9120(&local_18,*pcVar3 + '\x01',0x4709,uVar7);
    goto LAB_0809b3a4;
  }
  pcVar3 = (char *)(param_1 + 0xb5);
  if (((*pcVar3 == '\0') && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) &&
     (*(int *)(param_1 + 0x2c) != 0)) {
    *pcVar3 = '\x01';
    *(undefined *)(param_1 + 0xe) = 10;
  }
  iVar5 = DAT_0202f5c0;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *pcVar3 = '\0';
    *(undefined *)(param_1 + 0xb6) = 0;
    *(undefined *)(param_1 + 0xb7) = 0;
    sub_08017700(param_1,0x4703);
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x18 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x18 >> 8);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) * 0x18 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)) * 0x18 >> 8);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xe) = 5;
    }
    break;
  default:
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *pcVar3 = '\0';
    sub_08017700(param_1,0x4703);
    iVar5 = DAT_0202f5c0;
    iVar6 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 100) = iVar6;
    iVar5 = (*(int *)(param_1 + 0x58) + 0x1000) - *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x68) = iVar5;
    iVar6 = iVar6 >> 2;
    iVar5 = iVar5 >> 2;
    iVar5 = sub_080FE124(iVar6 * iVar6 + iVar5 * iVar5);
    uVar7 = (uint)(iVar5 << 0x10) >> 0xe;
    if (uVar7 == 0) {
      if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) == 0) {
        uVar4 = 0xffffff00;
      }
      else {
        uVar4 = 0x100;
      }
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 100) << 8,uVar7);
      *(undefined4 *)(param_1 + 100) = uVar4;
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x68) << 8,uVar7);
      *(undefined4 *)(param_1 + 0x68) = uVar4;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * -0x280 >> 8;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * -0x280 >> 8;
    sub_0800471C(0x108);
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 6:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_0809b3a4:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
    break;
  case 10:
    iVar6 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    *(int *)(param_1 + 100) = iVar6;
    iVar5 = (*(int *)(param_1 + 0x58) + 0x1000) - *(int *)(iVar5 + 0x58);
    *(int *)(param_1 + 0x68) = iVar5;
    iVar6 = iVar6 >> 2;
    iVar5 = iVar5 >> 2;
    iVar5 = sub_080FE124(iVar6 * iVar6 + iVar5 * iVar5);
    uVar7 = (uint)(iVar5 << 0x10) >> 0xe;
    if (uVar7 == 0) {
      if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) == 0) {
        uVar4 = 0xffffff00;
      }
      else {
        uVar4 = 0x100;
      }
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    else {
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 100) << 8,uVar7);
      *(undefined4 *)(param_1 + 100) = uVar4;
      uVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x68) << 8,uVar7);
      *(undefined4 *)(param_1 + 0x68) = uVar4;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * 0x700 >> 8;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) * 0x700 >> 8;
    sub_08017700(param_1,0x4703);
    sub_08007390(param_1 + 0x74,&DAT_08366fc8);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar6 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
    *(int *)(param_1 + 0x5c) = iVar5 + (iVar5 * -0x18 >> 8);
    *(int *)(param_1 + 0x60) = iVar6 + (iVar6 * -0x18 >> 8);
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    iVar5 = *(int *)(param_1 + 0x28);
    if (*(short *)(iVar5 + 4) != 2) {
      *(short *)(iVar5 + 0x38) = *(short *)(iVar5 + 0x38) + 5;
      sub_0800471C(0x137);
    }
    sub_080B2484(1,param_1 + 0x54);
    sub_0800471C(0x2a);
    goto LAB_0809b3a4;
  }
  return in_lr;
}

