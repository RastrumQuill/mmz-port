// sub_08065688 at 0x08065688 (thumb)

undefined4 sub_08065688(int param_1)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  uint uVar4;
  ushort uVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0xc;
    sub_08003338((int)*(short *)(param_1 + 0xc2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  puVar3 = (ushort *)(param_1 + 0xc0);
  uVar1 = *puVar3;
  uVar5 = uVar1 + 1;
  *puVar3 = uVar5;
  if (0x40 < uVar1) {
    if ((uVar5 & 3) == 0) {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      local_24 = *(int *)(param_1 + 0x54) + (0x20 - (uVar4 * 2 >> 0x11 & 0x3f)) * 0x100;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_20 = *(int *)(param_1 + 0x58) + (0x20 - (uVar4 * 2 >> 0x11 & 0x3f)) * 0x100;
      uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      sub_080B87E0(param_1,&local_24,2,uVar4 * 2 >> 0x11 & 0xff);
    }
    if ((*puVar3 & 0xf) == 0) {
      sub_08015518(8,param_1 + 0x54);
      sub_080032EC(0x35);
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == -1) {
      sub_08012CD0(param_1);
      cVar2 = *(char *)(param_1 + 0x12);
      *(char *)(param_1 + 0x12) = cVar2 + -1;
      if (cVar2 == '\0') {
        DAT_0202ec42 = DAT_0202ec42 | 2;
        (&DAT_0202ebb4)[*(ushort *)(&DAT_0833d958 + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3] =
             (byte)(1 << (*(ushort *)(&DAT_0833d958 + (uint)*(byte *)(param_1 + 0x10) * 2) & 7)) |
             (&DAT_0202ebb4)[*(ushort *)(&DAT_0833d958 + (uint)*(byte *)(param_1 + 0x10) * 2) >> 3];
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x12) >> 1;
    }
    else {
      sub_08012C04(param_1);
    }
  }
  else if ((*puVar3 & 1) == 0) {
    sub_08012C04(param_1);
  }
  else {
    sub_08012CD0(param_1);
  }
  return in_lr;
}

