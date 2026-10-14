// sub_080DC530 at 0x080DC530 (thumb)

undefined4 sub_080DC530(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080DC2D0(param_1);
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xe602);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
      sub_080E04D8(4,param_1 + 0x54,0);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (iVar3 <= *(int *)(param_1 + 0xb8)) {
        return in_lr;
      }
      sub_0800471C(0xf);
      if (*(char *)(param_1 + 0x11) == '\0') {
        *(undefined *)(*(int *)(param_1 + 0x28) + 0x12) = 0;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (iVar2 < -0x3f) {
      return in_lr;
    }
    sub_08017700(param_1,0xe601);
    sub_080177F4(param_1);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

