// sub_080BA8B4 at 0x080BA8B4 (thumb)

undefined4 sub_080BA8B4(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_080B2484(2,param_1 + 0x54);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 3;
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(undefined4 *)(param_1 + 0x58);
    sub_080BA2E8(&local_34,*(undefined *)(param_1 + 0x10),10000,uVar4);
    sub_080BA2E8(&local_34,*(undefined *)(param_1 + 0x10),0x2711,uVar4);
    sub_080BA2E8(&local_34,*(undefined *)(param_1 + 0x10),0x2712,uVar4);
    sub_080BA2E8(&local_34,*(undefined *)(param_1 + 0x10),0x2713,uVar4);
    sub_080BA2E8(&local_34,*(undefined *)(param_1 + 0x10),0x2714,uVar4);
    sub_080BA2E8(&local_34,*(undefined *)(param_1 + 0x10),0x2715,uVar4);
    sub_0800471C(0x31);
  }
  else {
    uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar2 == 0) || ((uVar2 & 0x8000) != 0)) {
      if (*(char *)(param_1 + 0xe) == '\0') {
        *(undefined *)(param_1 + 0x12) = 0x3c;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
        sub_08017700(param_1,0x270a);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (*(char *)(param_1 + 0xe) != '\x01') {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x60) + 8;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0x14);
      if (cVar1 == '\0') {
        uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
        local_20 = *(int *)(param_1 + 0x58) - (uVar4 * 2 >> 0x11 & 0x7ff);
        uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar4 & 0x7fffffff;
        local_24 = *(int *)(param_1 + 0x54) + -0x400 + (uVar4 * 2 >> 0x11 & 0x7ff);
        sub_080BA4C0(&local_24,0);
        sub_080BA4C0(&local_24,1);
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_080177F4(param_1);
      return in_lr;
    }
    sub_080B2484(2,param_1 + 0x54);
    sub_0800471C(0x31);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 3;
    local_2c = *(undefined4 *)(param_1 + 0x54);
    local_28 = *(undefined4 *)(param_1 + 0x58);
    sub_080BA2E8(&local_2c,*(undefined *)(param_1 + 0x10),10000,uVar4);
    sub_080BA2E8(&local_2c,*(undefined *)(param_1 + 0x10),0x2711,uVar4);
    sub_080BA2E8(&local_2c,*(undefined *)(param_1 + 0x10),0x2712,uVar4);
    sub_080BA2E8(&local_2c,*(undefined *)(param_1 + 0x10),0x2713,uVar4);
    sub_080BA2E8(&local_2c,*(undefined *)(param_1 + 0x10),0x2714,uVar4);
    sub_080BA2E8(&local_2c,*(undefined *)(param_1 + 0x10),0x2715,uVar4);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

