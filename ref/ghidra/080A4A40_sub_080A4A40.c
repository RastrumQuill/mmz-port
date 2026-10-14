// sub_080A4A40 at 0x080A4A40 (thumb)

undefined4 sub_080A4A40(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  sub_0809C980();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
    if (cVar2 == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    goto LAB_080a4cfc;
  }
  if (bVar1 < 2) {
    if (((bVar1 != 0) || ((*(ushort *)(param_1 + 0x90) & 1) == 0)) ||
       ((*(byte *)(param_1 + 0x97) & 0xf) == 0)) goto LAB_080a4cfc;
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x4c) + (uVar4 * 2 >> 0x11 & 7) * 0x100;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x50) + (uVar4 * 2 >> 0x11 & 7) * 0x100 + 0x600;
    sub_0808827C(3,&local_28);
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x4c) + (uVar4 * 2 >> 0x11 & 7) * 0x100;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x50) + (uVar4 * 2 >> 0x11 & 7) * -0x100 + 0x600;
    sub_0808827C(3,&local_28);
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x4c) + (uVar4 * 2 >> 0x11 & 7) * -0x100;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x50) + (uVar4 * 2 >> 0x11 & 7) * 0x100 + 0x600;
    sub_0808827C(3,&local_28);
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    local_28 = *(int *)(param_1 + 0x4c) + (uVar4 * 2 >> 0x11 & 7) * -0x100;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x50) + (uVar4 * 2 >> 0x11 & 7) * -0x100 + 0x600;
    sub_0808827C(3,&local_28);
    sub_08001EAC(5);
    uVar4 = *(byte *)(param_1 + 0x10) + 0x19;
    (&DAT_02022ad4)[(int)uVar4 >> 3] = (byte)(1 << (uVar4 & 7)) | (&DAT_02022ad4)[(int)uVar4 >> 3];
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0x200;
    }
    else {
      uVar3 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b5e68);
  }
  else {
    if (bVar1 != 2) {
      if ((bVar1 == 3) && ((*(ushort *)(param_1 + 0x90) & 4) != 0)) {
        uVar4 = *(byte *)(param_1 + 0x10) + 0x21;
        (&DAT_02022ad4)[(int)uVar4 >> 3] =
             (byte)(1 << (uVar4 & 7)) | (&DAT_02022ad4)[(int)uVar4 >> 3];
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        iVar5 = 0;
        uVar4 = 0;
        do {
          if (((int)(uint)(byte)(&DAT_02022ad4)[uVar4 + 0x21 >> 3] >> (uVar4 + 0x21 & 7) & 1U) == 0)
          {
            iVar5 = iVar5 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 8);
        if (iVar5 == 0) {
          DAT_02022b64 = DAT_02022b64 | 4;
        }
        else {
          sub_080BC818((&DAT_082b5ea0)[iVar5 + -1],0x3c);
        }
      }
      goto LAB_080a4cfc;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar5 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar5;
    if (0x700 < iVar5) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x800);
    if (cVar2 == '\0') goto LAB_080a4cfc;
    iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar5 + -0x800;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080a4cfc:
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 7) == 0) {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    else {
      cVar2 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
      *(char *)(param_1 + 0x1e) = cVar2;
    }
    if ((DAT_02022ad9 & 4) != 0) {
      *(undefined *)(param_1 + 0x12) = 7;
      *(undefined *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && ((DAT_02022ad9 & 2) != 0)) {
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if (bVar1 == 2) {
    cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar2;
    if (*(char *)(param_1 + 0x12) == cVar2) {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      *(undefined *)(param_1 + 0x13) = 0;
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    else {
      cVar2 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
      *(char *)(param_1 + 0x1e) = cVar2;
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    }
  }
  return in_lr;
}

