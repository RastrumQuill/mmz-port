// sub_080D339C at 0x080D339C (thumb)

undefined4 sub_080D339C(int param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x9300;
    sub_0800471C(0x12e);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    *(int *)(param_1 + 0x54) =
         *(short *)((int)&DAT_080fe64c + (((uint)*(byte *)(param_1 + 0x13) << 0x1a) >> 0x17)) * 0x30
    ;
    uVar3 = *(byte *)(param_1 + 0x13) + 1;
    *(char *)(param_1 + 0x13) = (char)uVar3;
    if (0xf < (uVar3 & 0xff)) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0x20;
    }
    break;
  case 2:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != '\0') break;
    *(undefined *)(param_1 + 0x13) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    *(int *)(param_1 + 0x54) =
         *(short *)((int)&DAT_080fe64c + (((uint)*(byte *)(param_1 + 0x13) << 0x19) >> 0x17)) * 0x30
    ;
    uVar3 = *(byte *)(param_1 + 0x13) - 1;
    *(char *)(param_1 + 0x13) = (char)uVar3;
    if ((uVar3 & 0xff) == 0) {
      DAT_02002410 = DAT_02002410 & 0xbfff;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  uVar4 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  uVar4 = uVar4 & 1;
  sVar1 = (short)((uint)*(undefined4 *)(param_1 + 0x54) >> 8) + uVar4 * 8;
  DAT_02002416 = sVar1 + 0xbcU & 0xff | (0xbc - sVar1) * 0x100;
  DAT_0200241a = (short)((uint)*(undefined4 *)(param_1 + 0x58) >> 8) + uVar4 * 4 & 0xff;
  DAT_03002ac0 = 0x7fff;
  return in_lr;
}

