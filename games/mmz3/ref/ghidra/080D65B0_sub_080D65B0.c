// sub_080D65B0 at 0x080D65B0 (thumb)

undefined4 sub_080D65B0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080d6632:
    sub_080177F4(param_1);
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 0xf) == 0) {
      sub_080C50F4(3,0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x60;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto LAB_080d66fc;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080d66fc;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
      DAT_0202fab2 = 0x2be;
      DAT_0202f8b2 = 6;
      sub_0800393C(&DAT_085d7f4c,0xeec0);
      sub_08003E14(&DAT_085d7f58,(DAT_0202f8b2 - 6) * 0x20 + 0x200);
      sub_080175BC(param_1);
      sub_08017700(param_1,0x5100);
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0x13) = 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080d6632;
    }
    if (bVar1 != 2) goto LAB_080d66fc;
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x80;
    bVar1 = *(byte *)(param_1 + 0x13);
    *(byte *)(param_1 + 0x13) = bVar1 + 1;
    uVar3 = 0x200 - ((int)((uint)*(ushort *)
                                  ((int)&DAT_080fe64c + ((bVar1 + 0x41) * 0x1000000 >> 0x17)) <<
                          0x10) >> 0x18);
    uVar2 = (undefined2)uVar3;
    if (0x120 < (uVar3 & 0xffff)) {
      uVar2 = 0x120;
    }
    *(undefined2 *)(param_1 + 0x50) = uVar2;
    *(short *)(param_1 + 0x52) =
         (short)(*(short *)((int)&DAT_080fe64c +
                           ((*(byte *)(param_1 + 0x13) + 0x40) * 0x1000000 >> 0x17)) + 0x100 >> 1);
    if (*(byte *)(param_1 + 0x13) < 0x51) goto LAB_080d66fc;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d66fc:
  bVar1 = *(byte *)(param_1 + 0x12);
  iVar4 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = (char)iVar4;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x5c) +
       *(short *)((int)&DAT_080fe64c + ((bVar1 + 0x41) * 0x1000000 >> 0x17)) * 2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x60) +
       *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 * 0x2000000) >> 0x17)) * 4;
  return in_lr;
}

