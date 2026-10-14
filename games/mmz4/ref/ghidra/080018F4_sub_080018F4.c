// sub_080018F4 at 0x080018F4 (thumb)

undefined4 sub_080018F4(undefined *param_1)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08001AA0();
  bVar1 = param_1[3];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar4 = 8;
        if (*(uint *)(param_1 + 0x18) < 9) {
          param_1[3] = 3;
          uVar4 = *(uint *)(param_1 + 0x18);
        }
        sub_08001B38(*(undefined2 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),
                     (int)(short)uVar4);
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar4;
        goto LAB_08001a8c;
      }
      if (bVar1 != 3) goto LAB_08001a8c;
      if (DAT_020007ae == 0) {
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
        for (uVar4 = *(uint *)(param_1 + 0x14); uVar4 != 0; uVar4 = uVar4 - 1) {
          pbVar3 = *(byte **)(param_1 + 0xc);
          DAT_0200000c = DAT_0200000c - (uint)*pbVar3;
          DAT_02000014 = (*pbVar3 << (uVar4 & 7) |
                         (byte)((int)(uint)*pbVar3 >> (8 - (uVar4 & 7) & 0xff))) ^ DAT_02000014;
          *(byte **)(param_1 + 0xc) = pbVar3 + 1;
        }
        if ((DAT_0200000c != 0) || (DAT_02000014 != 0)) {
          sVar2 = *(short *)(param_1 + 4);
          *(short *)(param_1 + 4) = sVar2 + -1;
          if ((short)(sVar2 + -1) != 0) {
            param_1[3] = 1;
            goto LAB_08001a8c;
          }
          DAT_020007ae = -1;
        }
        if (DAT_020007ae != 0) goto LAB_08001a5e;
LAB_08001a80:
        DAT_020007ae = 1;
      }
      else {
LAB_08001a5e:
        if (*(short *)(param_1 + 6) == 0) {
          DAT_020007ae = *(short *)(param_1 + 6);
          *(undefined2 *)(param_1 + 4) = 3;
          *(undefined2 *)(param_1 + 6) = 1;
          param_1[3] = 1;
          goto LAB_08001a8c;
        }
        if (DAT_020007ae == 0) goto LAB_08001a80;
      }
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      goto LAB_08001a8c;
    }
    if (bVar1 != 0) goto LAB_08001a8c;
    *(undefined2 *)(param_1 + 4) = 3;
    *(undefined2 *)(param_1 + 6) = 0;
    param_1[3] = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  uVar4 = ((uint)*(ushort *)(param_1 + 6) * 6 + (uint)(byte)param_1[1]) * 0x55;
  *(uint *)(param_1 + 0x10) = uVar4;
  sub_08001B38(uVar4 & 0xffff,&DAT_02000008,0x10);
  if (DAT_02000008 == 0x49544e49) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
    param_1[3] = 2;
  }
  else {
    sVar2 = *(short *)(param_1 + 4);
    *(short *)(param_1 + 4) = sVar2 + -1;
    if ((short)(sVar2 + -1) == 0) {
      DAT_020007ae = -1;
      param_1[3] = 3;
    }
  }
LAB_08001a8c:
  sub_08001B24(param_1);
  return in_lr;
}

