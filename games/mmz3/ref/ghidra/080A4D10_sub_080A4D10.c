// sub_080A4D10 at 0x080A4D10 (thumb)

undefined4 sub_080A4D10(int param_1)

{
  byte bVar1;
  char cVar2;
  char extraout_var;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar7 = *(int *)(DAT_0202f5c0 + 0x54);
        iVar4 = *(int *)(param_1 + 0x54);
        iVar3 = sub_0800A104(iVar7,*(undefined4 *)(param_1 + 0x58));
        sub_080FE10C((iVar7 - iVar4) * 0x100 >> 0x10,
                     (iVar3 - *(int *)(param_1 + 0x58)) * 0x100 >> 0x10);
        *(char *)(param_1 + 0x12) = extraout_var + '@';
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          *(char *)(param_1 + 0x12) = -(extraout_var + '@');
        }
        *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x12);
        *(undefined *)(param_1 + 0x13) = 0x14;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08368280);
    *(undefined *)(param_1 + 0x25) = 0x17;
    sub_08017528(param_1);
    bVar1 = *(byte *)(iVar7 + 10) >> 4;
    uVar5 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    sub_08017700(param_1,0x4901);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(iVar7 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58);
  iVar7 = FUN_080fe2f8((*(int *)(iVar7 + 0x54) - iVar6) * 0x100,0x1c0);
  *(int *)(param_1 + 0x54) = iVar6 + iVar7;
  iVar7 = FUN_080fe2f8((iVar3 - iVar4) * 0x100,0x1c0);
  *(int *)(param_1 + 0x58) = iVar7 + iVar4;
  cVar2 = *(char *)(param_1 + 0x12) + '\x10';
  *(char *)(param_1 + 0x12) = cVar2;
  *(char *)(param_1 + 0x24) = cVar2;
  sub_080177F4(param_1);
  return in_lr;
}

