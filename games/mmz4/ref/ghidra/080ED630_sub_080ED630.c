// sub_080ED630 at 0x080ED630 (thumb)

undefined4 sub_080ED630(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e050 = 0x231;
    DAT_0202de50 = 4;
    sub_08001D30(&DAT_08c440a0,0xff00);
    sub_08002208(&DAT_08c440ac,(DAT_0202de50 - 4) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x25) = 0x10;
    sub_0801CF00(param_1,0x801);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    goto LAB_080edae8;
  case 1:
  case 0x11:
  case 0x21:
    goto switchD_080ed648_caseD_1;
  case 2:
    sub_080074C0(2,2,0x44);
    sub_080074C0(2,3,0x43);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0xfffffff8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 2;
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x54) + -0x100;
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0;
      *(int *)(param_1 + 100) = iVar3;
    }
    goto switchD_080ed648_caseD_b;
  case 5:
    cVar4 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar4 + '\x02';
    iVar3 = (int)((uint)(ushort)(&DAT_08128c10)[*(byte *)(param_1 + 0x13)] << 0x10) >> 0x11;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if (cVar4 == -2) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    }
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 8;
    break;
  case 6:
    cVar4 = *(char *)(param_1 + 0x13) + '\x02';
    *(char *)(param_1 + 0x13) = cVar4;
    iVar3 = (int)((uint)(ushort)(&DAT_08128c10)[*(byte *)(param_1 + 0x13)] << 0x10) >> 0x11;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if ((cVar4 != '@') && (cVar4 != -0x40)) goto switchD_080ed648_caseD_b;
    *(undefined4 *)(param_1 + 100) = 0x10;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    goto LAB_080edb08;
  case 7:
    if (*(int *)(param_1 + 0x5c) < 0x300) {
      iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    }
    else {
      iVar3 = 0x300;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < 0x1e001) goto switchD_080ed648_caseD_b;
    *(undefined4 *)(param_1 + 0x54) = 0x1e000;
    goto LAB_080edb08;
  case 8:
    iVar3 = *(int *)(param_1 + 0x5c);
    if (0 < iVar3) {
LAB_080ed8a2:
      *(int *)(param_1 + 0x5c) = iVar3 + -0x10;
      goto LAB_080edb4a;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = *(byte *)(*(int *)(param_1 + 0x18) + 9) | 0x10;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    goto LAB_080edb44;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) goto switchD_080ed648_caseD_b;
    sub_080074C0(2,2,0x16);
    sub_080074C0(2,3,3);
    goto LAB_080edb08;
  case 10:
    iVar3 = *(int *)(param_1 + 0x5c);
    if (-0x300 < iVar3) goto LAB_080ed8a2;
    goto LAB_080edb4a;
  default:
    goto switchD_080ed648_caseD_b;
  case 0x10:
    DAT_0202e050 = 0x231;
    DAT_0202de50 = 4;
    sub_08001D30(&DAT_08c440a0,0xff00);
    sub_08002208(&DAT_08c440ac,(DAT_0202de50 - 4) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x25) = 0x10;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_0801CF00(param_1,0x801);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar3 = sub_080ED144(param_1,2);
    *(undefined *)(iVar3 + 0x11) = 0x10;
    goto LAB_080edaf6;
  case 0x12:
    *(undefined4 *)(param_1 + 0x5c) = 200;
    *(undefined *)(param_1 + 0x13) = 0x78;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x13:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    bVar1 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    goto joined_r0x080ed944;
  case 0x14:
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x15:
    bVar2 = *(byte *)(param_1 + 0x13);
    uVar5 = bVar2 + 2;
    *(char *)(param_1 + 0x13) = (char)uVar5;
    iVar3 = (int)((uint)*(ushort *)((int)&DAT_08128c10 + ((bVar2 + 0x42) * 0x1000000 >> 0x17)) <<
                 0x10) >> 0x12;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if ((uVar5 & 0xff) == 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    }
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 2;
    break;
  case 0x16:
    bVar2 = *(byte *)(param_1 + 0x13);
    uVar5 = bVar2 + 2;
    *(char *)(param_1 + 0x13) = (char)uVar5;
    iVar3 = (int)((uint)*(ushort *)((int)&DAT_08128c10 + ((bVar2 + 0x42) * 0x1000000 >> 0x17)) <<
                 0x10) >> 0x12;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    uVar5 = uVar5 & 0xff;
    if ((uVar5 != 0x60) && (uVar5 != 0xe0)) goto switchD_080ed648_caseD_b;
    *(undefined4 *)(param_1 + 100) = 0x10;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    goto LAB_080edb08;
  case 0x17:
    if (*(int *)(param_1 + 0x5c) < 0x200) {
      iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    }
    else {
      iVar3 = 0x200;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < 0x120001) goto switchD_080ed648_caseD_b;
    *(undefined4 *)(param_1 + 0x54) = 0x120000;
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = *(byte *)(*(int *)(param_1 + 0x18) + 9) | 4;
    *(undefined *)(param_1 + 0x13) = 0xc;
    goto LAB_080edb08;
  case 0x18:
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar4 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar4, cVar4 == '\0')) {
      sub_080074C0(0x13,2,0x46);
      sub_080074C0(0x13,3,0x45);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 8;
    break;
  case 0x19:
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 0x10;
    break;
  case 0x1a:
    if (*(int *)(param_1 + 0x54) < 0x159000) {
      iVar3 = *(int *)(param_1 + 0x54) + 0x200;
    }
    else {
      iVar3 = 0x159000;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 0x20;
    break;
  case 0x1b:
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x1c:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 0x40;
    break;
  case 0x1d:
    if (-0x180 < *(int *)(param_1 + 0x5c)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x14;
    }
    goto LAB_080edb4a;
  case 0x20:
    DAT_0202e050 = 0x2b4;
    DAT_0202de50 = 8;
    sub_08001D30(&DAT_08c440a0,0x10f60);
    sub_08002208(&DAT_08c440ac,(DAT_0202de50 - 4) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    sub_0801CF00(param_1,0x800);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
LAB_080edae8:
    iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + -0x5000;
LAB_080edaf6:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080ed648_caseD_1:
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 1;
    break;
  case 0x22:
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x23:
    if (*(int *)(param_1 + 0x5c) < 1) {
LAB_080edb44:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    }
LAB_080edb4a:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    goto switchD_080ed648_caseD_b;
  }
  bVar1 = bVar1 & bVar2;
joined_r0x080ed944:
  if (bVar1 == 0) {
LAB_080edb08:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
switchD_080ed648_caseD_b:
  sub_0801CFF0(param_1);
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 6) {
      sub_0801CF00(param_1,0x801);
    }
    else {
      sub_0801CF00(param_1,0x802);
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  return in_lr;
}

