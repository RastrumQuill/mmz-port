// sub_0804C3F4 at 0x0804C3F4 (thumb)

undefined4 sub_0804C3F4(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08012580(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa106);
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(param_1 + 0x5c);
    bVar1 = 0 < *(int *)(param_1 + 0x5c);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08006E08(param_1 + 0x74,&DAT_0833b2b0);
    DAT_02000fe0 = DAT_02000fe0 & 0xbfff;
    DAT_02000f90 = DAT_02000f90 & 0xdbff;
    DAT_02000fec._2_1_ = DAT_02000fec._2_1_ | 4;
    *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbd) + '\x01';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar4;
    *(int *)(param_1 + 0x60) = iVar4 + -0x80;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if ((DAT_0202ec42 & 1) == 0) {
      if (*(byte *)(param_1 + 0xbd) < 8) {
        uVar3 = 0x1b;
      }
      else {
        uVar3 = 0x1e;
      }
      *(undefined *)(param_1 + 0xd) = uVar3;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

