// sub_080D11FC at 0x080D11FC (thumb)

undefined4 sub_080D11FC(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x11) == '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar6 * 2 >> 0x11) & 0x7f) + 0x1e;
      sub_080C50F4(1,0,*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x68) + 0x800);
    }
    sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    if (sVar3 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_0801ACF8(4,param_1 + 0x54);
        iVar5 = sub_080047C0(0x11d);
        if (iVar5 == 0) {
          sub_0800471C(0x11d);
        }
        local_24 = *(int *)(param_1 + 0x54) + -0x1000;
        local_20 = *(int *)(param_1 + 0x68) + -0x200;
        sub_080B2484(3,&local_24);
        local_20 = *(int *)(param_1 + 0x68) + 0x800;
        sub_080B2484(3,&local_24);
        uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        sub_080C5150(1,3,*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x68) + 0x800,
                     ((uVar6 * 2 >> 0x11 & 7) - 4) * 0x80,(uVar4 * 2 >> 0x11 & 7) * -0x80);
        uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        sub_080C5150(1,5,*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x68) + 0x400,
                     ((uVar6 * 2 >> 0x11 & 7) - 4) * 0x80,(uVar4 * 2 >> 0x11 & 7) * -0x80);
        uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        sub_080C5150(1,4,*(int *)(param_1 + 0x54) + -0x1000,*(undefined4 *)(param_1 + 0x68),
                     ((uVar6 * 2 >> 0x11 & 7) - 4) * 0x80,(uVar4 * 2 >> 0x11 & 7) * -0x80);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else {
        sub_0801ACF8(0x10,param_1 + 0x54);
        sub_0800471C(0x41);
        local_24 = *(int *)(param_1 + 0x54) + -0x1000;
        local_20 = *(undefined4 *)(param_1 + 0x58);
        sub_080B2484(3,&local_24);
        local_24 = *(int *)(param_1 + 0x54) + -0x800;
        local_20 = *(int *)(param_1 + 0x58) + 0x1000;
        sub_080B2484(3,&local_24);
        if (*(char *)(param_1 + 0x11) == '\x02') {
          local_24 = *(int *)(param_1 + 0x54);
          local_20 = *(int *)(param_1 + 0x68);
          sub_080B2484(1,&local_24);
        }
        uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        sub_080C5150(1,3,*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x68) + -0x800,
                     ((uVar6 * 2 >> 0x11 & 7) - 6) * 0x100,(uVar4 * 2 >> 0x11 & 7) * -0x80);
        uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        sub_080C5150(1,5,*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x68) + -0x800,
                     ((uVar6 * 2 >> 0x11 & 7) - 6) * 0x100,(uVar4 * 2 >> 0x11 & 7) * -0x80);
        uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
        uVar4 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        sub_080C5150(1,4,*(int *)(param_1 + 0x54) + -0x800,*(int *)(param_1 + 0x68) + 0x800,
                     ((uVar6 * 2 >> 0x11 & 7) - 6) * 0x100,(uVar4 * 2 >> 0x11 & 7) * -0x80);
        *(undefined *)(param_1 + 0xd) = 3;
      }
    }
    break;
  case 1:
    local_24 = *(int *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + 0x1000;
    iVar5 = sub_08009BE4();
    if (iVar5 != 0) {
      local_24 = *(int *)(param_1 + 0x54) + -0x800;
      local_20 = *(int *)(param_1 + 0x58) + 0x1000;
      sub_080B2484(3,&local_24);
      local_24 = local_24 + 0x1000;
      sub_080B2484(3,&local_24);
      iVar5 = sub_080047C0(0x41);
      if (iVar5 == 0) {
        sub_0800471C(0x41);
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0x60) = 0;
      sub_0801ACF8(2,param_1 + 0x54);
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 2:
    if (*(char *)(param_1 + 0xd) == '\x02') {
      bVar2 = *(byte *)(param_1 + 0x13);
      *(byte *)(param_1 + 0x13) = bVar2 + 1;
      if ((bVar2 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    }
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x60) < 0x700) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x2a;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    uVar6 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x3000 < uVar6) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
    sub_080177F4(param_1);
    break;
  case 3:
    local_24 = *(int *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + 0x800;
    iVar5 = sub_08009BE4();
    if (iVar5 != 0) {
      local_24 = *(int *)(param_1 + 0x54) + -0x800;
      local_20 = *(int *)(param_1 + 0x58) + 0x1000;
      sub_080B2484(3,&local_24);
      local_24 = local_24 + 0x1000;
      sub_080B2484(3,&local_24);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60) >> 1;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) >> 1;
      uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar6 & 0x7fffffff;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar6 * 2 >> 0x11) & 0xf) - 7;
      sub_0801ACF8(2,param_1 + 0x54);
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  case 4:
    if (*(char *)(param_1 + 0xd) == '\x04') {
      bVar2 = *(byte *)(param_1 + 0x13);
      *(byte *)(param_1 + 0x13) = bVar2 + 1;
      if ((bVar2 & 1) == 0) {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x60) < 0x700) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x2a;
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) + *(char *)(param_1 + 0x24);
    uVar6 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x3000 < uVar6) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
    sub_080177F4(param_1);
  }
  return in_lr;
}

