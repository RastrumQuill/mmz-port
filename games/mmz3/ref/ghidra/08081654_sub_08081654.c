// sub_08081654 at 0x08081654 (thumb)

undefined4 sub_08081654(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar9 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    goto LAB_080818cc;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_083647f8);
    *(undefined *)(param_1 + 0x25) = 0xe;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar9 + 0x1c);
    *(undefined4 *)(param_1 + 0x68) = 0;
    iVar4 = sub_080FE10C((*(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54)) * 0x100 >> 0x10,
                         ((*(int *)(param_1 + 0x58) + 0x1800) - *(int *)(DAT_0202f5c0 + 0x58)) *
                         0x100 >> 0x10);
    uVar7 = ((uint)(iVar4 << 0x10) >> 0x18) + 0x80 & 0xff;
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar6 = uVar7 - 0x48 & 0xff;
      uVar7 = uVar6;
      if ((0x40 < uVar6) && (uVar7 = 0, uVar6 < 0xa0)) {
        uVar7 = 0x40;
      }
      uVar7 = uVar7 + 0x48;
      sub_08017700(param_1,0x4d05);
    }
    else {
      uVar6 = uVar7 + 8 & 0xff;
      uVar7 = uVar6;
      if ((0x40 < uVar6) && (uVar7 = 0, uVar6 < 0xa0)) {
        uVar7 = 0x40;
      }
      uVar7 = uVar7 - 8;
      sub_08017700(param_1,0x4d0a);
    }
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_080fe64c + (((uVar7 & 0xff) + 0x40) * 0x1000000 >> 0x17)) << 2;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080fe64c)[uVar7 & 0xff] << 2;
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar4;
      iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar5;
      sVar2 = sub_08009A3C(iVar4 + *(int *)(param_1 + 0x5c) * 4,iVar5 + *(int *)(param_1 + 0x60) * 4
                          );
      if (sVar2 != 0) {
LAB_080817d8:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
LAB_0808186a:
      sub_080177F4(param_1);
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 4:
    uVar3 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x5c),0xfffffffd);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    uVar3 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x60),0xfffffffd);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) * 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar4;
    if (iVar4 < 8) {
      if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
        if (*(char *)(param_1 + 0x11) == '\0') {
          uVar6 = *(uint *)(iVar9 + 0xb4);
          uVar7 = 0xffffff7f;
        }
        else {
LAB_080818ac:
          uVar6 = *(uint *)(iVar9 + 0xb4);
          uVar7 = 0xfffffeff;
        }
LAB_080818b4:
        *(uint *)(iVar9 + 0xb4) = uVar6 & uVar7;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
LAB_080818cc:
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        return in_lr;
      }
      goto LAB_080817d8;
    }
    goto LAB_0808186a;
  case 6:
    sub_08007390(param_1 + 0x74,&DAT_083648a0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if ((*(uint *)(param_1 + 0x8c) & 0x800) != 0) {
      sub_080177F4(param_1);
      break;
    }
    if (*(char *)(param_1 + 0x11) != '\0') goto LAB_080818ac;
    uVar6 = *(uint *)(iVar9 + 0xb4);
    uVar7 = 0xffffff7f;
    goto LAB_080818b4;
  default:
    break;
  }
  iVar4 = DAT_0202f5c0;
  puVar8 = (uint *)(param_1 + 0x8c);
  if (*(int *)(param_1 + 0x68) == 0) {
    if ((*puVar8 & 0x800) != 0) {
      sub_08007390(param_1 + 0x74,&DAT_08364828);
      *(uint *)(iVar9 + 0xb4) = *(uint *)(iVar9 + 0xb4) | 0x40;
      *(undefined4 *)(param_1 + 0x68) = 1;
      iVar9 = DAT_0202f5c0;
      iVar4 = *(int *)(DAT_0202f5c0 + 0x54);
      *(int *)(param_1 + 0xb8) = iVar4;
      *(int *)(param_1 + 0xb8) = iVar4 - *(int *)(param_1 + 0x54);
      iVar9 = *(int *)(iVar9 + 0x58);
      *(int *)(param_1 + 0xbc) = iVar9;
      *(int *)(param_1 + 0xbc) = iVar9 - *(int *)(param_1 + 0x58);
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_08017700(param_1,0x4d06);
      }
      else {
        sub_08017700(param_1,0x4d0b);
      }
      sub_080177F4(param_1);
    }
  }
  else if ((*puVar8 & 0x800) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08017700(param_1,0x4d05);
    }
    else {
      sub_08017700(param_1,0x4d0a);
    }
    sub_080177F4(param_1);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x54);
    *(int *)(DAT_0202f5c0 + 0x54) = iVar9;
    *(int *)(iVar4 + 0x54) = iVar9 + *(int *)(param_1 + 0xb8);
    iVar9 = *(int *)(param_1 + 0x58);
    *(int *)(iVar4 + 0x58) = iVar9;
    *(int *)(iVar4 + 0x58) = iVar9 + *(int *)(param_1 + 0xbc);
  }
  return in_lr;
}

