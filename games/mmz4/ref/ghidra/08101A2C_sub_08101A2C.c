// sub_08101A2C at 0x08101A2C (thumb)

undefined4 sub_08101A2C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar3 + 0x28);
  sub_0801CC9C(iVar3);
  sub_0801CF00(iVar3,*(undefined2 *)(iVar3 + 0xc0));
  *(byte *)(iVar3 + 0x49) = *(byte *)(iVar3 + 0x49) & 0xf3;
  sub_0801CFF0(iVar3);
  iVar1 = *param_2 + *(int *)(iVar2 + 0x54) + 0x7800;
  *(int *)(iVar3 + 0x54) = iVar1;
  *(int *)(iVar3 + 0x58) = param_2[1] + *(int *)(iVar2 + 0x58) + -0x5000;
  if (*(char *)(iVar3 + 0x11) == '\0') {
    iVar2 = -0x1000;
  }
  else if (*(char *)(iVar3 + 0x11) == '\x01') {
    iVar2 = -0x2000;
  }
  else {
    iVar2 = -0x3000;
  }
  *(int *)(iVar3 + 0x54) = iVar1 + iVar2;
  *(int *)(iVar3 + 0x40) = iVar3 + 0x54;
  sub_08128888(param_1,param_2,*(undefined4 *)(param_1 + 4));
  sub_08002C94(iVar3 + 0x34,0x8101a2d);
  *(int *)(iVar3 + 0x3c) = iVar3;
  *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xf7;
  return in_lr;
}

