// sub_08101F58 at 0x08101F58 (thumb)

undefined4 sub_08101F58(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = sub_08128884(param_1,*(undefined4 *)
                                  (&DAT_08868600 + (uint)*(byte *)(param_1 + 0x10) * 4));
    *(undefined2 *)(param_1 + 0xbc) = uVar4;
    sub_0810DED0(*(undefined2 *)(param_1 + 0xbc));
    sub_0801CF00(param_1,*(undefined2 *)(param_1 + 0xc2));
    if (*(char *)(param_1 + 0xb9) != '\0') {
      bVar2 = *(byte *)(param_1 + 10);
      bVar1 = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
      if (bVar1) {
        bVar3 = bVar2 | 0x10;
      }
      else {
        bVar3 = bVar2 & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if ((bVar2 >> 4 & 1) != (*(byte *)(param_1 + 10) >> 4 & 1)) {
        iVar5 = *(int *)(param_1 + 0x5c) * -0x100;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x5c) = iVar5 >> 8;
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202f38a == 0) {
    DAT_0202dbf8 = 0;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

