// sub_080BF35C at 0x080BF35C (thumb)

undefined4 sub_080BF35C(int param_1)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffe800;
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar7 = uVar4 & 0x7fffffff;
    DAT_0202f608 = uVar7;
    iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x3000);
    *(int *)(param_1 + 0x68) = iVar5 + -0x1800;
    uVar4 = uVar7 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 1) == 0) {
      uVar1 = 0x19;
    }
    else {
      uVar1 = 0x17;
    }
    *(undefined *)(param_1 + 0x25) = uVar1;
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar7 = uVar4 * 2 >> 0x11 & 1;
    *(char *)(param_1 + 0x13) = (char)uVar7;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar5 = -0x200 - (uVar4 * 0x80 >> 0x17);
    *(int *)(param_1 + 0x5c) = iVar5;
    if (uVar7 != 0) {
      *(int *)(param_1 + 0x5c) = -iVar5;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0x4b04);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar5 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = iVar5;
    iVar5 = *(int *)(iVar3 + 0x54) + iVar5;
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x68);
    iVar3 = *(int *)(iVar6 + 0x54);
    if (iVar3 <= iVar5) {
      return in_lr;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = iVar5;
    iVar5 = *(int *)(iVar6 + 0x54) + iVar5;
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + *(int *)(param_1 + 0x68);
    iVar3 = *(int *)(iVar3 + 0x54);
    if (iVar5 <= iVar3) {
      return in_lr;
    }
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

