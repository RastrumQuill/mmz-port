// sub_080D556C at 0x080D556C (thumb)

undefined4 sub_080D556C(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 8);
  sub_0801CC9C(iVar1);
  sub_0801CF00(iVar1,*(undefined2 *)(iVar1 + 0x7e));
  *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xf3 | 4;
  sub_0801CFF0(iVar1);
  *(int *)(iVar1 + 0x54) = *param_2 + -0x7800;
  *(int *)(iVar1 + 0x58) = param_2[1] + -0x5000;
  *(int *)(iVar1 + 0x40) = iVar1 + 0x54;
  sub_08128888(param_1,param_2,*(undefined4 *)(param_1 + 4));
  sub_08002C94(iVar1 + 0x34,0x80d556d);
  *(int *)(iVar1 + 0x3c) = iVar1;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xf7;
  if (*(byte *)(iVar1 + 0xc) < 2) {
    if (*(char *)(iVar1 + 0xd) == '\0') {
      sub_0810D3E4(*(undefined4 *)(iVar1 + 0x80),0,0);
    }
    else {
      sub_0810D434(*(undefined4 *)(iVar1 + 0x80),0,0,*(undefined *)(iVar1 + 0x7d));
    }
  }
  return in_lr;
}

