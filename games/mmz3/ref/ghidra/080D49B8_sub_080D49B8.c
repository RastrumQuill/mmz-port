// sub_080D49B8 at 0x080D49B8 (thumb)

undefined4 sub_080D49B8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x4800;
    DAT_0202fab2 = 0x230;
    DAT_0202f8b2 = 5;
    sub_0800393C(&DAT_085d7f4c,0xdd00);
    sub_08003E14(&DAT_085d7f58,(DAT_0202f8b2 - 6) * 0x20 + 0x200);
    *(undefined *)(param_1 + 0x25) = 0x12;
    sub_080175BC(param_1);
    sub_08017700(param_1,0x5100);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (-1 < *(char *)(param_1 + 0x13)) {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x13) << 1;
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x13) << 1;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) * 0x3f + *(int *)(param_1 + 0x68) >> 6;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
LAB_080d4b04:
      *(undefined *)(param_1 + 0x13) = 0;
LAB_080d4b08:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 2:
    sub_080177F4(param_1);
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 3) == 0) {
      sub_080C50F4(5,0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) break;
    goto LAB_080d4b08;
  case 3:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) break;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
    goto LAB_080d4b04;
  case 4:
    sub_080177F4(param_1);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar4 = uVar2 & 0x7fffffff;
    DAT_0202f608 = uVar4;
    iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,5);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) + (iVar3 + -2) * 0x100;
    uVar2 = uVar4 * 0x343fd + 0x269ec3;
    uVar4 = uVar2 & 0x7fffffff;
    DAT_0202f608 = uVar4;
    iVar3 = sub_080FE4D8(uVar2 * 2 >> 0x11,5);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) + (iVar3 + -2) * 0x100;
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 1) != 0) {
      uVar2 = uVar4 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      sub_08017BCC(param_1,(uVar2 * 2 >> 0x11 & 1) + 5);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  iVar3 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = (char)iVar3;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x5c) +
       *(short *)((int)&DAT_080fe64c + ((bVar1 + 0x41) * 0x1000000 >> 0x17)) * 2;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x60) +
       *(short *)((int)&DAT_080fe64c + ((uint)(iVar3 * 0x2000000) >> 0x17)) * 4;
  return in_lr;
}

