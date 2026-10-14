// sub_08061E4C at 0x08061E4C (thumb)

undefined4 sub_08061E4C(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(short *)(param_1 + 0xa4) < 0x28) {
    pcVar3 = (char *)(param_1 + 0xc3);
    *pcVar3 = *pcVar3 + '\x01';
    iVar1 = sub_080EF1E8(*pcVar3,*(short *)(param_1 + 0xa4) + 4);
    if (iVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + -0x1800;
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar5 = uVar2 & 0x7fffffff;
      DAT_0202e188 = uVar5;
      local_24 = iVar4;
      iVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x30);
      local_24 = iVar1 * 0x100 + iVar4;
      iVar4 = *(int *)(param_1 + 0x58) + -0x2800;
      uVar2 = uVar5 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      local_20 = iVar4;
      iVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x50);
      local_20 = iVar1 * 0x100 + iVar4;
      sub_080AC60C(3,&local_24);
    }
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((DAT_0202ec38 & 0x10) != 0)) {
    sub_08002EA0(0x3a);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d534 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833d558 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08061F6C(param_1);
  }
  return in_lr;
}

