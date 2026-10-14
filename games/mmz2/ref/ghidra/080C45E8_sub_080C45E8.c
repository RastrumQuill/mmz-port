// sub_080C45E8 at 0x080C45E8 (thumb)

undefined4 sub_080C45E8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if ((*(byte *)(*(int *)(iVar3 + 0x18) + 9) & 0x20) == 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x2800;
    sub_080127E4(param_1,0x8801);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(byte *)(param_1 + 0x12) < 0x40) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  sVar2 = (ushort)*(byte *)(param_1 + 0x12) << 2;
  *(short *)(param_1 + 0x50) = sVar2;
  *(short *)(param_1 + 0x52) = sVar2;
  if (9 < *(byte *)(iVar3 + 0xd)) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    bVar1 = *(char *)(param_1 + 0x13) >> 1;
    *(byte *)(param_1 + 0x24) = bVar1;
    iVar3 = *(int *)(param_1 + 0x54) + (short)(&DAT_080ef450)[(int)(char)bVar1 + 0x40U & 0xff] * -6;
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (short)(&DAT_080ef450)[bVar1] * -6;
    if ((iVar3 < 0x2e001) &&
       (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x77fe)) {
      sub_080127E4(param_1);
    }
    if (*(int *)(param_1 + 0x54) < 0x2d001) {
      *(undefined4 *)(param_1 + 0x54) = 0x2d000;
      sub_080AC670(4,param_1 + 0x54,0,0);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}

