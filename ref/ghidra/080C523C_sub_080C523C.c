// sub_080C523C at 0x080C523C (thumb)

undefined4 sub_080C523C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined4 in_lr;
  
  uVar5 = (uint)*(byte *)(param_1 + 0x9ea);
  if (((uVar5 - 1 < 0x4e) &&
      (((int)(uint)(byte)(&DAT_0202b74e)[*(byte *)(param_1 + 0x9ea) >> 3] >> (uVar5 & 7) & 1U) != 0)
      ) && (cVar1 = sub_080B47D8(&DAT_0202b5a0,uVar5), cVar1 == '\0')) {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0x9e6) = 0;
    *(undefined2 *)(param_1 + 0x9ec) = 0;
    iVar2 = sub_080B4840(&DAT_0202b5a0,uVar5);
    iVar3 = sub_080B4884(&DAT_0202b5a0,uVar5);
    uVar5 = iVar3 - iVar2;
    *(short *)(param_1 + 0x9f0) = (short)uVar5;
    uVar4 = (uint)DAT_0202b79e;
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    *(short *)(param_1 + 0x9ee) = (short)uVar5;
    cVar6 = '\x01';
    cVar1 = '\x01';
    if (9 < uVar4) {
      do {
        cVar6 = cVar1 + '\x01';
        uVar4 = sub_080C8AD0(uVar4,10);
        cVar1 = cVar6;
      } while (9 < (int)uVar4);
    }
    *(char *)(param_1 + 0x9e7) = cVar6;
    *(undefined *)(param_1 + 0x9e8) = 0;
    sub_080C5318(param_1);
    return in_lr;
  }
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  return in_lr;
}

