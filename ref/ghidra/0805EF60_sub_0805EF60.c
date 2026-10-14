// sub_0805EF60 at 0x0805EF60 (thumb)

undefined4 sub_0805EF60(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) goto LAB_0805f07e;
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
  uVar4 = 0;
  bVar1 = *(byte *)(param_1 + 0xc2);
  if (bVar1 == 2) {
    uVar4 = 0xffffe800;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar4 = 0x1800;
    }
  }
  else if (bVar1 < 3) {
    if ((bVar1 == 1) && (uVar4 = 0xffffee00, (*(byte *)(param_1 + 10) & 0x20) != 0)) {
      uVar4 = 0x1200;
    }
  }
  else {
    if (bVar1 == 3) {
      uVar4 = 0xffffdd00;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        uVar4 = 0x2300;
      }
      bVar1 = (*(byte *)(param_1 + 10) >> 5 ^ 1) & 1;
      *(byte *)(param_1 + 0x45) = bVar1;
      if (bVar1 == 0) {
LAB_0805f030:
        bVar1 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x20;
      }
    }
    else {
      if (bVar1 != 4) goto LAB_0805f038;
      uVar4 = 0xffffd500;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        uVar4 = 0x2b00;
      }
      bVar1 = (*(byte *)(param_1 + 10) >> 5 ^ 1) & 1;
      *(byte *)(param_1 + 0x45) = bVar1;
      if (bVar1 == 0) goto LAB_0805f030;
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
LAB_0805f038:
  sub_0805DEC8(param_1,0,uVar4);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(uint *)(param_1 + 0x54) = (uint)(0 < *(int *)(param_1 + 0xb8)) * -0x500 + 0x280;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffb80;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805f07e:
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') ||
     (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     cVar2 != '\0')) {
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_10 = *(int *)(param_1 + 0x50) + 0x100;
    sub_0808827C(1,&local_14);
    sub_08090B38(param_1,&local_14);
    sub_08001EAC(2);
    sub_08015698(1,param_1 + 0x4c);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

