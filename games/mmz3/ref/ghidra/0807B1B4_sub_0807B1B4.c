// sub_0807B1B4 at 0x0807B1B4 (thumb)

undefined4 sub_0807B1B4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    goto LAB_0807b23e;
  }
  sub_080BE4F0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined *)(param_1 + 0x25) = 0xf;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_08025B14(DAT_0202f5c0,0x18);
  *(undefined *)(param_1 + 0x12) = 0x80;
  *(undefined4 *)(param_1 + 0x5c) = 0x18;
  iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
  *(int *)(param_1 + 100) = iVar3;
  uVar1 = 0xfffff600;
  if ((iVar3 < -0xa00) || (uVar1 = 0xa00, 0xa00 < iVar3)) {
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  iVar3 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202f5c0 + 0x58);
  *(int *)(param_1 + 0x68) = iVar3;
  uVar1 = 0xffffe800;
  if (iVar3 < -0x1800) {
LAB_0807b22e:
    *(undefined4 *)(param_1 + 0x68) = uVar1;
  }
  else if (0 < iVar3) {
    uVar1 = 0;
    goto LAB_0807b22e;
  }
  sub_08017700(param_1,0x4003);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0807b23e:
  iVar3 = DAT_0202f5c0;
  *(int *)(param_1 + 0x54) = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x68);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  uVar2 = sub_08025B64();
  iVar3 = *(int *)(param_1 + 0x5c) - (uVar2 & 0xff);
  *(int *)(param_1 + 0x5c) = iVar3;
  if ((((*(char *)(param_1 + 0x12) == '\0') || (iVar3 < 0)) ||
      ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) != 0)) || (*(short *)(DAT_0202f5c0 + 0xa4) == 0)) {
    sub_08025B3C(DAT_0202f5c0,0x18);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0x10);
    sub_0807B010(param_1);
  }
  else {
    sub_080177F4(param_1);
  }
  return in_lr;
}

