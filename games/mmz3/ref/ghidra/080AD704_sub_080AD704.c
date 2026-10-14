// sub_080AD704 at 0x080AD704 (thumb)

undefined4 sub_080AD704(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  puVar8 = (uint *)(param_1 + 0x8c);
  if ((*puVar8 & 0x200) != 0) {
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0800471C(0x35);
LAB_080ad79a:
    sub_080B2484(2,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if ((*puVar8 & 4) != 0) {
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0800471C(0x35);
    goto LAB_080ad79a;
  }
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  uVar4 = (uint)bVar1;
  if ((uVar4 == 0) ||
     ((uVar4 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      (uVar4 & 0xffff) != 0 && (uVar4 = uVar4 & 0x8000, uVar4 == 0)))) {
    *puVar8 = uVar4;
    *(uint *)(param_1 + 0x90) = uVar4;
    *(char *)(param_1 + 0x94) = (char)uVar4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    goto LAB_080ad79a;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6f08);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    if (0x380 < iVar5) {
      *(undefined4 *)(param_1 + 0x60) = 0x380;
    }
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    iVar5 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),iVar5 + 0x1800);
    if (iVar5 != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 2:
    sub_0800471C(100);
    *(undefined4 *)(param_1 + 0x5c) = 0x20;
    *(undefined *)(param_1 + 0x13) = 0xc;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar5 = *(int *)(param_1 + 0x60) + -0x80;
    *(int *)(param_1 + 0x60) = iVar5;
    if (iVar5 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
    cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    if (cVar2 == '\0') {
      local_24 = *(undefined4 *)(param_1 + 0x54);
      local_20 = *(int *)(param_1 + 0x58) + 0x400;
      sub_080B2484(3,&local_24);
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x13) = 0xd;
    iVar5 = DAT_0202f5c0;
    iVar6 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar5 = *(int *)(iVar5 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000);
    *(int *)(param_1 + 0x60) = iVar5;
    iVar6 = iVar6 >> 2;
    iVar5 = iVar5 >> 2;
    iVar5 = sub_080FE124(iVar6 * iVar6 + iVar5 * iVar5);
    uVar4 = (uint)(iVar5 << 0x10) >> 0xe;
    if (uVar4 != 0) {
      uVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar4);
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      uVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar4);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
    }
    iVar6 = (*(int *)(param_1 + 0x5c) << 9) >> 8;
    *(int *)(param_1 + 100) = iVar6;
    iVar7 = *(int *)(param_1 + 0x60);
    iVar5 = (iVar7 << 9) >> 8;
    *(int *)(param_1 + 0x68) = iVar5;
    if (iVar6 < 1) {
      if (0 < iVar5) {
        if (iVar7 < 0x5f) {
          uVar3 = 0x6f02;
        }
        else if (iVar7 < 0xeb) {
          uVar3 = 0x6f03;
        }
        else {
          uVar3 = 0x6f04;
        }
        goto LAB_080ad9f2;
      }
      if (-0x5f < iVar7) {
        uVar3 = 0x6f02;
        goto LAB_080ad9f2;
      }
      if (-0xeb < iVar7) {
        uVar3 = 0x6f01;
        goto LAB_080ad9f2;
      }
      sub_08017700(param_1,0x6f00);
    }
    else {
      if (iVar5 < 1) {
        if (iVar7 < -0x5e) {
          if (iVar7 < -0xea) {
            uVar3 = 0x6f00;
          }
          else {
            uVar3 = 0x6f07;
          }
        }
        else {
          uVar3 = 0x6f06;
        }
      }
      else if (iVar7 < 0x5f) {
        uVar3 = 0x6f06;
      }
      else if (iVar7 < 0xeb) {
        uVar3 = 0x6f05;
      }
      else {
        uVar3 = 0x6f04;
      }
LAB_080ad9f2:
      sub_08017700(param_1,uVar3);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    if (*(char *)(param_1 + 0x13) == '\0') {
LAB_080ada3c:
      iVar5 = DAT_0202f5c0;
      if ((*(byte *)(DAT_0202f5c0 + 10) & 1) != 0) {
        *(undefined *)(param_1 + 0x13) = 0xd;
        iVar6 = *(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x5c) = iVar6;
        iVar5 = *(int *)(iVar5 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1000);
        *(int *)(param_1 + 0x60) = iVar5;
        iVar6 = iVar6 >> 2;
        iVar5 = iVar5 >> 2;
        iVar5 = sub_080FE124(iVar6 * iVar6 + iVar5 * iVar5);
        uVar4 = (uint)(iVar5 << 0x10) >> 0xe;
        if (uVar4 != 0) {
          uVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar4);
          *(undefined4 *)(param_1 + 0x5c) = uVar3;
          uVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar4);
          *(undefined4 *)(param_1 + 0x60) = uVar3;
        }
        iVar7 = *(int *)(param_1 + 0x60);
        iVar6 = ((*(int *)(param_1 + 100) << 6) >> 8) +
                (((*(int *)(param_1 + 0x5c) << 9) >> 8) * 0xc0 >> 8);
        *(int *)(param_1 + 100) = iVar6;
        iVar5 = ((*(int *)(param_1 + 0x68) << 6) >> 8) + (((iVar7 << 9) >> 8) * 0xc0 >> 8);
        *(int *)(param_1 + 0x68) = iVar5;
        if (iVar6 < 1) {
          if (iVar5 < 1) {
            if (iVar7 < -0x5e) {
              if (iVar7 < -0xea) {
                sub_08017700(param_1,0x6f00);
                goto LAB_080adb7a;
              }
              uVar3 = 0x6f01;
            }
            else {
              uVar3 = 0x6f02;
            }
          }
          else if (iVar7 < 0x5f) {
            uVar3 = 0x6f02;
          }
          else if (iVar7 < 0xeb) {
            uVar3 = 0x6f03;
          }
          else {
            uVar3 = 0x6f04;
          }
        }
        else if (iVar5 < 1) {
          if (iVar7 < -0x5e) {
            if (iVar7 < -0xea) {
              uVar3 = 0x6f00;
            }
            else {
              uVar3 = 0x6f07;
            }
          }
          else {
            uVar3 = 0x6f06;
          }
        }
        else if (iVar7 < 0x5f) {
          uVar3 = 0x6f06;
        }
        else if (iVar7 < 0xeb) {
          uVar3 = 0x6f05;
        }
        else {
          uVar3 = 0x6f04;
        }
        sub_08017700(param_1,uVar3);
      }
    }
    else {
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        if ((*(byte *)(DAT_0202f5c0 + 10) & 1) == 0) {
          *(undefined *)(param_1 + 0x13) = 0xd;
        }
        if (*(char *)(param_1 + 0x13) == '\0') goto LAB_080ada3c;
      }
    }
LAB_080adb7a:
    cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),6);
    if (cVar2 == '\0') {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = *(int *)(param_1 + 0x58) + 0x400;
      sub_080B2484(3);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68);
    sub_080177F4(param_1);
    break;
  default:
    break;
  }
  return in_lr;
}

