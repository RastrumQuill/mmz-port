// sub_080CC778 at 0x080CC778 (thumb)

undefined4 sub_080CC778(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  uVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x400);
  if (((*(int *)(param_1 + 0x60) != 0) && ((uVar1 & 0x8000) == 0)) && (uVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0x9411);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x400;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_080E24A0(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  uVar2 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x4000 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

