// sub_08056E88 at 0x08056E88 (thumb)

undefined4 sub_08056E88(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        iVar3 = *(int *)(param_1 + 0x28);
        sub_080128D4(param_1);
        if (*(byte *)(iVar3 + 0xc) < 2) {
          return in_lr;
        }
        iVar3 = *(int *)(param_1 + 0x2c);
        if (iVar3 != 0) {
          *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
          *(undefined4 *)(iVar3 + 0xc) = 3;
          *(undefined4 *)(iVar3 + 0x14) =
               *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar3 + 9)] + 0xc);
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        DAT_0202ec42 = DAT_0202ec42 | 2;
        return in_lr;
      }
      sub_080128D4(param_1);
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
        return in_lr;
      }
      local_1c = 0xd00;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        local_1c = -0xd00;
      }
      local_18 = 0xfffff000;
      uVar2 = sub_080B878C(param_1,&local_1c);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      goto LAB_08056fce;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080032EC(0x2f);
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 != 0) {
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x8c) = 0;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(iVar3 + 9)] + 0xc);
    }
    bVar1 = *(byte *)(param_1 + 10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    sub_080127E4(param_1,0xa612);
    local_1c = *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * -2 + 1) * 0x200;
    local_18 = *(int *)(param_1 + 0x58) + 0x100;
    uVar2 = sub_08077FB0(param_1,&local_1c,2,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x48;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) + -2;
  *(int *)(param_1 + 0x5c) = iVar3;
  if (0 < iVar3) {
    return in_lr;
  }
LAB_08056fce:
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

