// sub_0800C840 at 0x0800C840 (thumb)

undefined4 sub_0800C840(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  byte local_28 [8];
  undefined4 uStack_4;
  
  uVar4 = *(uint *)(param_1 + 0x5c);
  bVar1 = *(byte *)(param_1 + 0xe);
  uStack_4 = in_lr;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar2 = *(short *)(param_1 + 0x10) + 1;
        *(short *)(param_1 + 0x10) = sVar2;
        if (sVar2 == 0x30) {
          uVar6 = 0;
          do {
            local_28[uVar6] = (byte)uVar6;
            uVar6 = uVar6 + 1 & 0xffff;
          } while (uVar6 < 7);
          uVar3 = 0;
          do {
            uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
            uVar5 = uVar6 & 0x7fffffff;
            DAT_0202f608 = uVar5;
            uVar6 = sub_080FE4D8(uVar6 * 2 >> 0x11,7);
            uVar5 = uVar5 * 0x343fd + 0x269ec3;
            DAT_0202f608 = uVar5 & 0x7fffffff;
            uVar5 = sub_080FE4D8(uVar5 * 2 >> 0x11,7);
            bVar1 = local_28[uVar6 & 0xff];
            local_28[uVar6 & 0xff] = local_28[uVar5 & 0xff];
            local_28[uVar5 & 0xff] = bVar1;
            uVar3 = uVar3 + 1;
          } while (uVar3 < 0x10);
          uVar6 = 0;
          do {
            *(uint *)(uVar6 * 4 + param_1 + 0x68) =
                 (*(int *)(param_1 + 0x34) + (uint)local_28[uVar6] * 0x20 + 0x18) * 0x100;
            uVar6 = uVar6 + 1 & 0xffff;
          } while (uVar6 < 3);
          sub_08071010(*(undefined4 *)(param_1 + 0x68),*(int *)(param_1 + 0x38) << 8);
        }
        else if (sVar2 == 0x40) {
          sub_08071010(*(undefined4 *)(param_1 + 0x6c),*(int *)(param_1 + 0x38) << 8);
        }
        else if (sVar2 == 0x50) {
          sub_08071010(*(undefined4 *)(param_1 + 0x70),*(int *)(param_1 + 0x38) << 8);
        }
        if (*(short *)(param_1 + 0x10) == 0xa0) {
          *(undefined2 *)(param_1 + 0x10) = 0;
          *(undefined2 *)(param_1 + 0x12) = 0;
          *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + -1;
        }
      }
      goto LAB_0800c9d8;
    }
    if (bVar1 != 0) goto LAB_0800c9d8;
    (&DAT_020023c4)[(uVar4 << 0x10) >> 0x14] = (&DAT_020023c4)[(uVar4 << 0x10) >> 0x14] & 0xfffc | 2
    ;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0;
    *(undefined4 *)(param_1 + 0x4c) = 0x168;
    *(undefined4 *)(param_1 + 0x50) = 0x78;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(param_1 + 0x34) - 0x508U < 0xdc) || (*(int *)(param_1 + 0x34) - 0x6a0U < 0xdc)) {
    sub_0800471C(0x78);
    sub_0801ACF8(8,&DAT_020302c0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0800c9d8:
  uVar3 = (ushort)((uVar4 & 0xffff) << 8);
  if (*(int *)(param_1 + 0x34) < 0x440) {
    DAT_020023c0 = DAT_020023c0 & ~uVar3;
  }
  else {
    DAT_020023c0 = uVar3 | DAT_020023c0;
  }
  return uStack_4;
}

