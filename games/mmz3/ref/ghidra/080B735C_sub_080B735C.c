// sub_080B735C at 0x080B735C (thumb)

undefined4 sub_080B735C(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_080B2484(2,param_1 + 0x54);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 3;
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    sub_080B71A0(&local_20,*(undefined *)(param_1 + 0x10),0x608,uVar4);
    sub_080B71A0(&local_20,*(undefined *)(param_1 + 0x10),0x609,uVar4);
    sub_080B71A0(&local_20,*(undefined *)(param_1 + 0x10),0x60a,uVar4);
    sub_0800471C(0x2a);
  }
  else {
    uVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((uVar2 == 0) || ((uVar2 & 0x8000) != 0)) {
      if (*(char *)(param_1 + 0xe) == '\0') {
        *(undefined *)(param_1 + 0x12) = 0x3c;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
        sub_08017700(param_1,0x607);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (*(char *)(param_1 + 0xe) != '\x01') {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x60) + 0x20;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      sub_080177F4(param_1);
      return in_lr;
    }
    sub_080B2484(2,param_1 + 0x54);
    sub_0800471C(0x2a);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 3;
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(undefined4 *)(param_1 + 0x58);
    sub_080B71A0(&local_18,*(undefined *)(param_1 + 0x10),0x608,uVar4);
    sub_080B71A0(&local_18,*(undefined *)(param_1 + 0x10),0x609,uVar4);
    sub_080B71A0(&local_18,*(undefined *)(param_1 + 0x10),0x60a,uVar4);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

