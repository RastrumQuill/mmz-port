// sub_0809BD70 at 0x0809BD70 (thumb)

undefined4 sub_0809BD70(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar7 = 0;
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar8 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  cVar2 = (char)uVar8;
  *(char *)(param_1 + 0xb4) = cVar2 * '\x02' + -1;
  bVar3 = *(byte *)(param_1 + 0x10);
  if (bVar3 != 1) {
    if (bVar3 < 2) {
      if (bVar3 != 0) goto LAB_0809c050;
      *(undefined *)(param_1 + 0x22) = 1;
      sub_08012580(param_1);
      if ((bVar1 & 1) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(char *)(param_1 + 0x4c) = cVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
      sub_080127E4(param_1,0x2802);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08343870,param_1 + 0x54,4);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(undefined2 *)(param_1 + 0xb8) = 0x1c00;
        *(undefined2 *)(param_1 + 0xba) = 0xc00;
        *(int *)(param_1 + 0xbc) = *(int *)(iVar5 + 0x54) + *(char *)(param_1 + 0xb4) * 0xd00;
        *(int *)(param_1 + 0xc0) = *(int *)(iVar5 + 0x58) + -0x1200;
        puVar6 = (undefined2 *)(param_1 + 0xb6);
        uVar4 = 0x780;
      }
      else {
        *(undefined2 *)(param_1 + 0xb8) = 0x2000;
        *(undefined2 *)(param_1 + 0xba) = 0xc00;
        *(int *)(param_1 + 0xbc) = *(int *)(iVar5 + 0x54) + *(char *)(param_1 + 0xb4) * 0x3400;
        *(int *)(param_1 + 0xc0) = *(int *)(iVar5 + 0x58) + -0x1200;
        puVar6 = (undefined2 *)(param_1 + 0xb6);
        uVar4 = 0x400;
      }
    }
    else {
      if (bVar3 != 2) goto LAB_0809c050;
      sub_08012738(param_1);
      *(undefined *)(param_1 + 0x24) = 0;
      if ((bVar1 & 1) == 0) {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(char *)(param_1 + 0x4c) = cVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
      sub_080127E4(param_1,0x2801);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_083438d0,param_1 + 0x54,4);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x5c) =
           (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff] << 2;
      *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x11)] << 2;
      puVar6 = (undefined2 *)(param_1 + 0xb8);
      uVar4 = 0x1000;
    }
    *puVar6 = uVar4;
    goto LAB_0809c050;
  }
  *(undefined *)(param_1 + 0x22) = 1;
  sub_08012738(param_1);
  if ((bVar1 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = cVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
  sub_080127E4(param_1,0x2801);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_083438a0,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar3 = *(byte *)(param_1 + 0x11);
  if (bVar3 == 1) {
    iVar5 = (uVar8 * 2 + -1) * 0x28;
LAB_0809bf68:
    uVar7 = 0x40U - iVar5 & 0xff;
  }
  else if (bVar3 < 2) {
    if (bVar3 == 0) {
      iVar5 = (uVar8 * 2 + -1) * 0x20;
      goto LAB_0809bf68;
    }
  }
  else if (bVar3 == 2) {
    iVar5 = (uVar8 * 2 + -1) * 0x30;
    goto LAB_0809bf68;
  }
  iVar5 = (short)(&DAT_080ef450)[uVar7 + 0x40 & 0xff] * 0x480;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  iVar5 = (short)(&DAT_080ef450)[uVar7] * 0x480;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar5 >> 8;
  *(char *)(param_1 + 0x24) = (char)uVar7 + -0x60;
  *(undefined2 *)(param_1 + 0xb8) = 0;
LAB_0809c050:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_0809C07C(param_1);
  return in_lr;
}

