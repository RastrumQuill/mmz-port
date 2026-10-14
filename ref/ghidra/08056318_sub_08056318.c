// sub_08056318 at 0x08056318 (thumb)

undefined4 sub_08056318(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x7a;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    uVar8 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_18 = ((uVar8 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar8 = (uVar8 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar8 & 0x7fffffff;
    local_14 = (uVar8 * 2 >> 0x11 & 0x3f) * -0x100;
    iVar2 = local_18 * (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1f) + 0x40];
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar3 = local_14 * (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1f)];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar4 = local_18 * (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1f)];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar5 = local_14 * (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x1f) + 0x40];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    local_20 = *(int *)(param_1 + 0x4c) + ((iVar2 >> 8) - (iVar3 >> 8));
    local_1c = *(int *)(param_1 + 0x50) + (iVar4 >> 8) + (iVar5 >> 8);
    sub_0808827C(2,&local_20);
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 8;
    uVar8 = *(byte *)(param_1 + 0x1f) + 0xc0 & 0xff;
    *(int *)(param_1 + 0x54) = (int)(short)(&DAT_080c8e24)[uVar8 + 0x40] << 3;
    *(int *)(param_1 + 0x58) = (int)(short)(&DAT_080c8e24)[uVar8] << 3;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    if (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xc0) < 0x800) {
      piVar6 = (int *)(param_1 + 0xc4);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *piVar6;
      *piVar6 = *piVar6 + 0x40;
    }
    bVar7 = *(byte *)(param_1 + 0x12);
    if ((bVar7 & 1) == 0) {
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == '\0') {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      sub_0808827C(1,param_1 + 0x5c);
      if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
        sub_08001EAC(2);
      }
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58);
      bVar7 = *(byte *)(param_1 + 0x12);
    }
    *(byte *)(param_1 + 0x12) = bVar7 + 1;
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if ((*(uint *)(*(int *)(param_1 + 0x20) + 0xbc) & 0x400) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

