// sub_0805ECE4 at 0x0805ECE4 (thumb)

undefined4 sub_0805ECE4(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) goto LAB_0805ee5e;
  if (1 < bVar1) {
    if (bVar1 != 2) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    return in_lr;
  }
  if (bVar1 != 0) {
    return in_lr;
  }
  uVar6 = 0;
  bVar1 = *(byte *)(param_1 + 0xc2);
  if (bVar1 == 2) {
    uVar6 = 0xffffe800;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar6 = 0x1800;
    }
  }
  else if (bVar1 < 3) {
    if ((bVar1 == 1) && (uVar6 = 0xffffee00, (*(byte *)(param_1 + 10) & 0x20) != 0)) {
      uVar6 = 0x1200;
    }
  }
  else {
    if (bVar1 == 3) {
      uVar6 = 0xffffdd00;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        uVar6 = 0x2300;
      }
      bVar1 = (*(byte *)(param_1 + 10) >> 5 ^ 1) & 1;
      *(byte *)(param_1 + 0x45) = bVar1;
      if (bVar1 == 0) {
LAB_0805edb4:
        bVar1 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x20;
      }
    }
    else {
      if (bVar1 != 4) goto LAB_0805edbc;
      uVar6 = 0xffffd500;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        uVar6 = 0x2b00;
      }
      bVar1 = (*(byte *)(param_1 + 10) >> 5 ^ 1) & 1;
      *(byte *)(param_1 + 0x45) = bVar1;
      if (bVar1 == 0) goto LAB_0805edb4;
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
LAB_0805edbc:
  sub_0805DEC8(param_1,0,uVar6);
  sub_080033F0(param_1 + 0x6c,7);
  local_14 = *(undefined4 *)(param_1 + 0x4c);
  local_10 = *(int *)(param_1 + 0x50) + -0x1000;
  uVar7 = (uint)(0 < *(int *)(param_1 + 0xb8));
  uVar5 = uVar7 ^ 1;
  *(char *)(param_1 + 0x44) = (char)uVar5;
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(uint *)(param_1 + 0x54) = uVar7 * -0x200 + 0x100;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) >> 1;
  sub_08090AE8(param_1);
  iVar4 = *(int *)(param_1 + 0x54) * 0xb4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar4 >> 8;
  iVar4 = *(int *)(param_1 + 0x58) * 0xb4;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar4 >> 8;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805ee5e:
  cVar2 = sub_0805DEC8(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar4 = *(int *)(param_1 + 0x54) * 0xe1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar4 >> 8;
  if (((*(int *)(param_1 + 0x58) != 0) || ((*(byte *)(param_1 + 10) & 0x20) != 0)) &&
     (iVar4 = *(int *)(param_1 + 0x58) + 0x40, *(int *)(param_1 + 0x58) = iVar4, 0x700 < iVar4)) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if ((cVar3 == '\0') || (cVar2 != '\0')) {
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(int *)(param_1 + 0x50) + -0x1000;
    sub_0808827C(1,&local_14);
    sub_08001EAC(2);
    sub_08015698(1,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

