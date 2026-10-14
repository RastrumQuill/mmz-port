// sub_080C60F0 at 0x080C60F0 (thumb)

undefined4 sub_080C60F0(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined4 in_lr;
  
  uVar2 = 0x10;
  sVar3 = 0x100;
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_080175BC(param_1);
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x25) = 0x1e;
    sub_08017700(param_1,0xcc00);
    *(int *)(param_1 + 0x54) =
         DAT_020302c0 + *(int *)(&DAT_0836bf84 + (uint)*(byte *)(param_1 + 0x11) * 8) + -0x7800;
    *(int *)(param_1 + 0x58) =
         DAT_020302c4 + *(int *)(&DAT_0836bf88 + (uint)*(byte *)(param_1 + 0x11) * 8) + -0x5000;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (DAT_0202f4a5 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == 'A') {
      *(undefined *)(param_1 + 0x12) = 0;
    }
    if (0x20 < *(byte *)(param_1 + 0x12)) {
      uVar2 = 0x10 - (short)((int)(*(byte *)(param_1 + 0x12) - 0x20) >> 1);
    }
    DAT_02002402 = uVar2 & 0x1f | 0x1000;
    sVar3 = 0x200 - (short)(*(short *)((int)&DAT_080fe64c +
                                      ((0x40 - (uint)*(byte *)(param_1 + 0x12)) * 0x1000000 >> 0x17)
                                      ) * 3 >> 1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(short *)(param_1 + 0x50) = sVar3;
  *(short *)(param_1 + 0x52) = sVar3;
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

