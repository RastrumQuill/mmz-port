// sub_080B6EA0 at 0x080B6EA0 (thumb)

undefined4 sub_080B6EA0(int param_1)

{
  undefined uVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar4 = &local_20;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_080B2484(2,param_1 + 0x54);
    sub_0800471C(0x2a);
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    uVar6 = uVar6 * 2 >> 0x11 & 3;
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    sub_080B6CE8(&local_20,*(undefined *)(param_1 + 0x10),0x409,uVar6);
    sub_080B6CE8(&local_20,*(undefined *)(param_1 + 0x10),0x40a,uVar6);
    uVar1 = *(undefined *)(param_1 + 0x10);
  }
  else {
    uVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar3 == 0) || ((uVar3 & 0x8000) != 0)) {
      if (*(char *)(param_1 + 0xe) == '\0') {
        *(undefined *)(param_1 + 0x12) = 0x3c;
        *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
        sub_08017700(param_1,0x407);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (*(char *)(param_1 + 0xe) != '\x01') {
        return in_lr;
      }
      iVar5 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar5;
      if (0x700 < iVar5) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_080177F4(param_1);
      return in_lr;
    }
    sub_080B2484(2,param_1 + 0x54);
    sub_0800471C(0x2a);
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    uVar6 = uVar6 * 2 >> 0x11 & 3;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    puVar4 = &local_18;
    sub_080B6CE8(puVar4,*(undefined *)(param_1 + 0x10),0x409,uVar6);
    sub_080B6CE8(puVar4,*(undefined *)(param_1 + 0x10),0x40a,uVar6);
    uVar1 = *(undefined *)(param_1 + 0x10);
  }
  sub_080B6CE8(puVar4,uVar1,0x40b,uVar6);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

