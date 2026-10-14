// sub_0803FFBC at 0x0803FFBC (thumb)

undefined4 sub_0803FFBC(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ushort *puVar5;
  short *psVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08029710(param_1);
    sub_08029790(param_1,1,4,0);
    sub_080297C0(param_1);
    *(undefined2 *)(param_1 + 0xc0) = 0x100;
    *(undefined2 *)(param_1 + 0xc2) = 0x100;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
    sub_08001EE8((int)*(short *)(param_1 + 0xc4));
    *(short *)(param_1 + 0xc4) = -1;
    sub_08001EAC(0xd4);
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    puVar5 = (ushort *)(param_1 + 0xc2);
    uVar2 = *puVar5;
    *puVar5 = (ushort)(uVar2 - 0x10);
    if (0x7f < (int)((uVar2 - 0x10) * 0x10000) >> 0x10) goto LAB_080400de;
    *puVar5 = 0x80;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080400de;
    puVar5 = (ushort *)(param_1 + 0xc0);
    uVar2 = *puVar5;
    *puVar5 = (ushort)(uVar2 - 0x40);
    if (3 < (int)((uVar2 - 0x40) * 0x10000) >> 0x10) goto LAB_080400de;
    *puVar5 = 4;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      goto LAB_080400de;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x800;
    psVar6 = (short *)(param_1 + 0xc2);
    sVar3 = *psVar6;
    *psVar6 = sVar3 + 0x20;
    if (0x200 < (short)(sVar3 + 0x20)) {
      *psVar6 = 0x200;
    }
    uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar4 < 0x801) goto LAB_080400de;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_080400de:
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0xc0);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xc2);
  return in_lr;
}

