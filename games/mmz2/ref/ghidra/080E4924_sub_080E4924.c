// sub_080E4924 at 0x080E4924 (thumb)

undefined4 sub_080E4924(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(undefined *)(param_1 + 3) = 1;
  }
  sVar1 = *(short *)(param_1 + 4) + -2;
  *(short *)(param_1 + 4) = sVar1;
  DAT_03002ec0 = (undefined)sVar1;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (sVar1 == 0) {
    sub_080E3DE0(param_1);
    DAT_03002ac0 = 0;
    DAT_02000f90 = DAT_02000f90 & 0xc1ff;
    DAT_02000ff0 = 0;
    sub_08002D0C();
    sub_080E0E64(param_1,1);
  }
  else {
    iVar2 = param_1 + 0x9a8;
    sub_08004AF4(iVar2);
    sub_08006C90();
    DAT_0202e148 = 0;
    local_18[0] = 0;
    sub_080EEF68(local_18,&DAT_0202e160,0x1000008);
    sub_080149F4(1);
    sub_08012274(DAT_0202f088,iVar2);
    sub_08012274(DAT_0202f074,iVar2);
    sub_08012274(DAT_0202f078,iVar2);
    sub_08012274(DAT_0202f06c,iVar2);
    sub_0801218C(DAT_0202f090,iVar2);
    sub_08039020(iVar2);
    sub_0801218C(DAT_0202f07c,iVar2);
    sub_0801218C(DAT_0202f084,iVar2);
    sub_08012274(DAT_0202f08c,iVar2);
    sub_08014AD8(1);
    sub_080E5BE4(param_1);
    sub_080DEF00();
  }
  return in_lr;
}

