// sub_080DF284 at 0x080DF284 (thumb)

undefined4 sub_080DF284(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined2 *)(param_1 + 0xb4) = 0;
      *(undefined2 *)(param_1 + 0xb6) = 0;
      sub_08017528(param_1);
      sub_08017700(param_1,0xde01);
      *(int *)(param_1 + 0x40) = param_1 + 0x5c;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar4 + 0x58);
    if ((((*(uint *)(param_1 + 0x8c) & 4) == 0) ||
        (*(int *)(param_1 + 0x58) <= *(int *)(DAT_0202f5c0 + 0x58))) ||
       (*(char *)(DAT_0202f5c0 + 0x18d) == '\0')) {
      iVar1 = *(short *)(param_1 + 0xb4) * 0xe0;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      *(short *)(param_1 + 0xb4) = (short)((uint)iVar1 >> 8);
    }
    else {
      iVar1 = (*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(iVar4 + 0x54)) * 0xc0;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      *(short *)(param_1 + 0xb4) = (short)((uint)iVar1 >> 8);
    }
    puVar3 = (ushort *)(param_1 + 0xb6);
    iVar1 = (int)*(short *)(param_1 + 0xb4) - (int)(short)*puVar3;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    *puVar3 = (short)(iVar1 >> 4) + *puVar3;
    if ((int)(short)*puVar3 + 0xfU < 0x20) {
      *puVar3 = 0;
    }
    *(char *)(param_1 + 0x24) = (char)(*puVar3 >> 8);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    iVar2 = *(int *)(iVar4 + 0x54);
    iVar1 = *(int *)(DAT_0202f5c0 + 0x54);
    if ((iVar1 < iVar2 + -0x2800) || (iVar2 + 0x2800 < iVar1)) {
      iVar4 = *(int *)(iVar4 + 0x58);
    }
    else {
      iVar1 = FUN_080fe2f8((iVar1 - iVar2) * 0x100,
                           (int)*(short *)((int)&DAT_080fe64c +
                                          ((uint)((((int)((uint)*puVar3 << 0x10) >> 0x18) + 0x40) *
                                                 0x1000000) >> 0x17)));
      iVar4 = *(int *)(iVar4 + 0x58);
      *(int *)(param_1 + 0x58) = iVar4;
      iVar1 = iVar1 * (short)(&DAT_080fe64c)[*puVar3 >> 8];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xff;
      }
      iVar4 = iVar4 + (iVar1 >> 8);
    }
    *(int *)(param_1 + 0x58) = iVar4;
    sub_080177F4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

