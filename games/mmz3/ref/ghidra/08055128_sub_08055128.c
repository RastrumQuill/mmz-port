// sub_08055128 at 0x08055128 (thumb)

undefined4 sub_08055128(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0x2a);
    sub_08017700(param_1,0x5408);
    if (*(char *)(param_1 + 0xbe) != '\0') {
      sub_08004230();
      *(char *)(param_1 + 0xbe) = '\0';
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0xc2) = 1;
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc4) + 0xc2) = 1;
    }
    if (*(int *)(param_1 + 200) != 0) {
      *(undefined *)(*(int *)(param_1 + 200) + 0xc2) = 1;
    }
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    local_30 = *(undefined4 *)(param_1 + 0x54);
    local_2c = *(undefined4 *)(param_1 + 0x58);
    sub_080B7A3C(param_1,&local_30,"\tT\nT\nT",3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_28 = (uVar2 * 2 >> 0x11 & 0x3fff) + *(int *)(param_1 + 0x54) + -0x2000;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      local_24 = (uVar2 * 2 >> 0x11 & 0x3fff) + *(int *)(param_1 + 0x58) + -0x2000;
      sub_080B2484(1);
      iVar3 = *(int *)(param_1 + 0x54) + -0x1800;
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar4 = uVar2 & 0x7fffffff;
      DAT_0202f608 = uVar4;
      local_28 = iVar3;
      local_28 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x3000);
      local_28 = iVar3 + local_28;
      iVar3 = *(int *)(param_1 + 0x58) + -0x1800;
      uVar2 = uVar4 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      local_24 = iVar3;
      local_24 = sub_080FE4D8(uVar2 * 2 >> 0x11,0x3000);
      local_24 = iVar3 + local_24;
      sub_080C0570(param_1,local_28,local_24);
    }
    cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0x14);
    if (cVar1 == '\0') {
      sub_0800471C(0x2a);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_08024FE4(0xe,param_1 + 0x54);
      DAT_020301b2 = DAT_020301b2 | 2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

