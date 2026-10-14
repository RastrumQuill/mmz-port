// sub_08044884 at 0x08044884 (thumb)

undefined4 sub_08044884(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        sub_080128D4(param_1);
        if (*(byte *)(*(int *)(param_1 + 0xdc) + 0xc) < 2) {
          return in_lr;
        }
        iVar3 = *(int *)(param_1 + 0x2c);
        if (iVar3 != 0) {
          *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
          *(undefined4 *)(iVar3 + 0x8c) = 0;
          *(undefined4 *)(iVar3 + 0x90) = 0;
          *(undefined *)(iVar3 + 0x94) = 0;
          *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
          *(undefined4 *)(iVar3 + 0xc) = 3;
          *(undefined4 *)(iVar3 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        DAT_0202ec42 = DAT_0202ec42 | 2;
        return in_lr;
      }
      sub_080128D4(param_1);
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
        return in_lr;
      }
      local_1c = (uVar4 * -2 + 1) * 0x1000;
      local_18 = 0xffffe400;
      uVar2 = sub_080B878C(param_1,&local_1c);
      *(undefined4 *)(param_1 + 0xdc) = uVar2;
      goto LAB_080449d0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080032EC(0x2f);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar4 = bVar1 & 1;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080127E4(param_1,0xa306);
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0x1800;
    uVar2 = sub_080906B0(param_1,param_1 + 0x54,uVar4,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = 0x48;
    if (*(short *)(param_1 + 0xe0) != 0) {
      sub_08003338();
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uVar4 * 2 + -1) * *(int *)(param_1 + 0x5c)
  ;
  iVar3 = *(int *)(param_1 + 0x5c) + -2;
  *(int *)(param_1 + 0x5c) = iVar3;
  if (-1 < iVar3) {
    return in_lr;
  }
LAB_080449d0:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

