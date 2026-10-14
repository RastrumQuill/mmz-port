// sub_08047E00 at 0x08047E00 (thumb)

undefined4 sub_08047E00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 1) == 0) {
      sub_0800471C(0x115);
    }
    else {
      sub_0800471C(0x114);
    }
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xb4);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xb8) + -0x5000;
    *(uint *)(param_1 + 100) = (1 - (uint)*(byte *)(param_1 + 199)) * 0x8000;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x68) + 8;
  *(int *)(param_1 + 0x68) = iVar2;
  if (0x280 < iVar2) {
    *(undefined4 *)(param_1 + 0x68) = 0x280;
  }
  iVar5 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 100) = iVar5;
  iVar3 = (1 - (uint)*(byte *)(param_1 + 199)) * -0x80 + 0x300;
  iVar2 = iVar3 * -0x100;
  if (iVar5 + iVar3 * 0x100 < 0 != SBORROW4(iVar5,iVar2)) {
    *(int *)(param_1 + 100) = iVar2;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0x5800;
  iVar3 = *(int *)(param_1 + 100) >> 8;
  iVar2 = FUN_080fe2f8((1 - (uint)*(byte *)(param_1 + 199)) * 0x80 - iVar3,6);
  iVar5 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 << 0x18) >> 0x17)) * 0x18 + 0x5800;
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
  iVar2 = iVar5 * *(short *)((int)&DAT_080fe64c + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc) + (iVar2 >> 8);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
  iVar2 = (int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar3 << 0x18) >> 0x17)) * (iVar5 >> 1);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0) + (iVar2 >> 8);
  sub_080177F4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar1 == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar6 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar6 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar4 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar6 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

