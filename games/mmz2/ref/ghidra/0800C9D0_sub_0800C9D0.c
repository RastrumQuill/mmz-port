// sub_0800C9D0 at 0x0800C9D0 (thumb)

undefined4 sub_0800C9D0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] =
         (&DAT_02000f94)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
    uVar1 = (uint)DAT_0202e01c;
    if (uVar1 != 0) {
      uVar1 = 0xffffa000;
    }
    *(uint *)(param_1 + 0x68) = uVar1;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x100;
    *(undefined4 *)(param_1 + 0x48) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202e01c == 1) {
    if (*(int *)(param_1 + 0x68) == 0) {
      sub_08015518(3,param_1 + 0x34);
    }
    if ((-0x6000 < *(int *)(param_1 + 0x68)) &&
       (iVar2 = *(int *)(param_1 + 0x68) + -0x20, *(int *)(param_1 + 0x68) = iVar2, iVar2 < -0x5fff)
       ) {
      sub_08015518(3,param_1 + 0x34);
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x68) >> 8;
  return in_lr;
}

