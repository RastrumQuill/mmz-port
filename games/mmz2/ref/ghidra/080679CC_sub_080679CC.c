// sub_080679CC at 0x080679CC (thumb)

undefined4 sub_080679CC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == -1) {
    sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + (*(char *)(param_1 + 0xb7) + 1) * 0x100);
    if (sVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      sub_08067B3C(param_1);
      return in_lr;
    }
    uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 0xf) < 8) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    if (*(char *)(param_1 + 0xd) == *(char *)(param_1 + 0xb4)) {
      pbVar5 = (byte *)(param_1 + 0xb5);
      bVar1 = *pbVar5;
      *pbVar5 = bVar1 + 1;
      if (1 < (byte)(bVar1 + 1)) {
        uVar2 = 1;
        if (*(char *)(param_1 + 0xd) == '\x01') {
          uVar2 = 3;
        }
        *(undefined *)(param_1 + 0xd) = uVar2;
        *pbVar5 = 0;
      }
    }
    *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833dd28 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

