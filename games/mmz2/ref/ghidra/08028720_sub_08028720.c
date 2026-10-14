// sub_08028720 at 0x08028720 (thumb)

undefined4 sub_08028720(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 uVar4;
  int iVar6;
  undefined4 in_lr;
  uint uVar5;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  bVar2 = *(byte *)(param_1 + 0x202) & 0x20;
  if ((((*(byte *)(param_1 + 0x202) & 0x20) == 0) && (*(char *)(param_1 + 0x1fc) != '\x03')) &&
     (bVar1 != 0)) {
    iVar6 = -1;
    if (*(char *)(param_1 + 0x183) != '\0') {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6 * 0x100;
    sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,(undefined4 *)(param_1 + 0xd8),
                 *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                 *(byte *)(param_1 + 10) >> 4 & 1,iVar6,1,bVar2,bVar2,1);
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333eac + (uint)bVar1 * 4));
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  uVar5 = *(uint *)(param_1 + 0x8c) & 0x400;
  uVar4 = (undefined2)uVar5;
  if (uVar5 == 0) {
    if (*(byte *)(param_1 + 0xf) < 2) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      goto LAB_080287fa;
    }
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    uVar3 = 1;
  }
  else {
    uVar4 = 0;
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    uVar3 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
LAB_080287fa:
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = uVar4;
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  return in_lr;
}

