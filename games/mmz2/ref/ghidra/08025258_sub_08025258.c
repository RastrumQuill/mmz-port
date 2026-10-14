// sub_08025258 at 0x08025258 (thumb)

undefined4 sub_08025258(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333dec + (uint)*(byte *)(param_1 + 0xf) * 4));
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    uVar1 = sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                         *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                         *(byte *)(param_1 + 10) >> 4 & 1,iVar2,1,0,0,1);
    if ((uVar1 & 0x4f) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  uVar1 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                       *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                       *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,0,1);
  if ((uVar1 & 0xf) == 0) {
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    sub_08025A54(param_1);
  }
  else if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\b')) &&
          (*(char *)(param_1 + 0x72) < '\x02')) {
    sub_0801E6AC(7);
  }
  return in_lr;
}

