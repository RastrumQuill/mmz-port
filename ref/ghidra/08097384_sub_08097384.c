// sub_08097384 at 0x08097384 (thumb)

undefined4 sub_08097384(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080033F0(param_1 + 0x6c,0);
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    uVar4 = (uint)(byte)(&DAT_020230c0)[*(byte *)(param_1 + 9)] << 5 | 0x200;
    uVar2 = 0x28;
    break;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x800;
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    uVar4 = (uint)(byte)(&DAT_020230c0)[*(byte *)(param_1 + 9)] << 5 | 0x200;
    uVar2 = 0x28;
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 6:
    uVar4 = (uint)(byte)(&DAT_020230c0)[*(byte *)(param_1 + 9)] << 5 | 0x200;
    uVar2 = 0x29;
    break;
  case 7:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    DAT_02004f80 = DAT_02004f80 | 0x2000;
    DAT_02004f8c = 0x14;
    DAT_02004f88 = 0xa0;
    DAT_030017a0 = 0xffff;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 8:
    iVar3 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar3;
    DAT_02004f84 = 0x78U - ((&DAT_080c8e24)[((uint)(iVar3 * 0x1000000) >> 0x19) + 0x40] + -0x100) &
                   0xff | ((&DAT_080c8e24)[((uint)(iVar3 * 0x1000000) >> 0x19) + 0x40] + -0x88) *
                          0x100;
  default:
    goto switchD_08097398_caseD_9;
  }
  cVar1 = sub_08001904(uVar2,uVar4);
  if (cVar1 == '\x03') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
switchD_08097398_caseD_9:
  return in_lr;
}

