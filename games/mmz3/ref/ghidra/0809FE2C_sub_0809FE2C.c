// sub_0809FE2C at 0x0809FE2C (thumb)

undefined4 sub_0809FE2C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_08007390(param_1 + 0x74,&DAT_08367860);
    sub_08017700(param_1,0x3403);
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x700 + -0x380;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0809fec2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  if (0x2000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_080177F4(param_1);
LAB_0809fec2:
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    uVar2 = *(int *)(param_1 + 0x60) + 1;
    *(uint *)(param_1 + 0x60) = uVar2;
    if ((int)uVar2 < 0x10) {
      uVar2 = uVar2 & 1;
    }
    else {
      uVar2 = uVar2 & 2;
    }
    if (uVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (0x1e < *(int *)(param_1 + 0x60)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 0xc);
    }
    return in_lr;
  }
  return in_lr;
}

