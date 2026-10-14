// sub_080C4AF8 at 0x080C4AF8 (thumb)

undefined4 sub_080C4AF8(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) =
         **(undefined **)(&DAT_088622fc + (uint)*(byte *)(param_1 + 0x11) * 4);
    *(undefined *)(param_1 + 0x13) = 3;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  if ((*(byte *)(iVar6 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(iVar6 + 0x54) + -0x3c00;
  }
  else {
    iVar4 = *(int *)(iVar6 + 0x54) + 0x3c00;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    iVar7 = (uint)*(byte *)(param_1 + 0x11) * 4;
    iVar6 = sub_080C483C(param_1,param_1 + 0x54,
                         (0x7800 - *(int *)((3 - (uint)*(byte *)(param_1 + 0x13)) * 4 +
                                           *(int *)(&DAT_088622e0 + iVar7))) +
                         (*(int *)(iVar6 + 0xd0) - iVar4) * (uVar5 * 2 + -1));
    if (iVar6 != 0) {
      *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
    }
    cVar2 = *(char *)(param_1 + 0x13);
    cVar3 = cVar2 + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar2 == '\x01') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(char *)(param_1 + 0xe) = cVar3;
      *(char *)(param_1 + 0xf) = cVar3;
    }
    else {
      *(undefined *)(param_1 + 0x12) =
           *(undefined *)(*(int *)(&DAT_088622fc + iVar7) + (3 - (uint)*(byte *)(param_1 + 0x13)));
    }
  }
  return in_lr;
}

