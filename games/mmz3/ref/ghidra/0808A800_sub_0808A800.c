// sub_0808A800 at 0x0808A800 (thumb)

undefined4 sub_0808A800(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((DAT_02030108 & 0x40) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar5 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      goto LAB_0808aaf8;
    }
LAB_0808aae0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar5 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_0808aaf8:
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    return in_lr;
  }
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_0808aaf8;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0x6e09);
    *(undefined *)(param_1 + 0xe) = 10;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  case 1:
  case 10:
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    DAT_0202f4ac._0_1_ = (char)DAT_0202f4ac + -1;
    *(undefined *)(param_1 + 0xc3) = 0;
    break;
  default:
    return in_lr;
  case 0xb:
    iVar3 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x1c0 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x1c0;
    }
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),6);
    if (cVar1 == '\0') {
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar7 = uVar4 & 0x7fffffff;
      DAT_0202f608 = uVar7;
      local_30 = iVar3;
      local_2c = iVar6;
      local_30 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x5000);
      local_30 = iVar3 + -0x2800 + local_30;
      uVar4 = uVar7 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      local_2c = sub_080FE4D8(uVar4 * 2 >> 0x11,0x3000);
      local_2c = iVar6 + -0x1800 + local_2c;
      sub_080B2484(1,&local_30);
      sub_0800471C(0x2a);
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar4 & 0x7fffffff;
      uVar4 = uVar4 * 2 >> 0x11 & 3;
      local_28 = local_30;
      local_24 = local_2c;
      sub_080C3198(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0x6e07,uVar4);
      sub_080C3198(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0x6e08,uVar4);
      sub_080C3198(&local_28,*(byte *)(param_1 + 10) >> 4 & 1,0x6e07,uVar4);
    }
    sub_080177F4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    break;
  case 0xc:
    local_30 = *(int *)(param_1 + 0x54);
    local_2c = *(undefined4 *)(param_1 + 0x58);
    sub_080B2484(1,&local_30);
    sub_0800471C(0x2a);
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08024FE4(0,param_1 + 0x54);
      if (DAT_0203016c < 9999) {
        DAT_0203016c = DAT_0203016c + 1;
      }
      sub_080250C4(param_1,param_1 + 0x54);
    }
    goto LAB_0808aae0;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

