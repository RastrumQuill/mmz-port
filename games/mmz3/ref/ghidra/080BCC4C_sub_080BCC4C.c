// sub_080BCC4C at 0x080BCC4C (thumb)

undefined4 sub_080BCC4C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_080B2484(2,param_1 + 0x54);
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 3;
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_080BCA88(&local_14,*(undefined *)(param_1 + 0x10),0x3506,uVar3);
    sub_080BCA88(&local_14,*(undefined *)(param_1 + 0x10),0x3508,uVar3);
    sub_0800471C(0x31);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x12) = 0x28;
      uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      *(uint *)(param_1 + 0x60) = (uVar3 * 2 >> 0x11 & 0x1f) - 0x180;
      sub_08017700(param_1,0x3505);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    sub_080177F4(param_1);
  }
  return in_lr;
}

