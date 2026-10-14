// sub_080E6C44 at 0x080E6C44 (thumb)

undefined4 sub_080E6C44(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(byte *)(param_1 + 0x10) < 2) {
    local_14 = *(int *)(param_1 + 0x58) + -0xd00;
    if (*(char *)(param_1 + 0x11) == '\0') {
      local_18 = *(int *)(param_1 + 0x54);
      sub_080D0894(1,&local_18);
      sub_08002B10(0x2a);
      sub_080E6B38(param_1 + 0x54,0x201,*(byte *)(param_1 + 10) >> 4 & 1);
      uVar1 = 0x204;
    }
    else {
      local_18 = *(int *)(param_1 + 0x54) +
                 *(int *)(&DAT_08865b34 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 4)) *
                 0x100;
      *(int *)(param_1 + 0x54) = local_18;
      sub_080D0894(1,&local_18);
      sub_08002B10(0x2a);
      sub_080E6B38(param_1 + 0x54,0x202,*(byte *)(param_1 + 10) >> 4 & 1);
      uVar1 = 0x203;
    }
    sub_080E6B38(param_1 + 0x54,uVar1,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  else if (*(short *)(param_1 + 0x10) == 4) {
    iVar2 = param_1 + 0x54;
    sub_080CEE18(iVar2,0,0);
    sub_080CEE18(iVar2,0,1);
    sub_080CEE18(iVar2,0,2);
    sub_080CEE18(iVar2,0,3);
    sub_080E6B38(iVar2,0x401,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E6B38(iVar2,0x402,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E6B38(iVar2,0x403,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E6B38(iVar2,0x404,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E6B38(iVar2,0x405,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080E6B38(iVar2,0x406,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

