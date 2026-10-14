// sub_080E4A5C at 0x080E4A5C (thumb)

undefined4 sub_080E4A5C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_080E3E98();
    sub_08002D34();
    *(undefined2 *)(param_1 + 4) = 0;
    sub_0801E64C(*(int *)(param_1 + 0x75b8),*(undefined *)(*(int *)(param_1 + 0x75b8) + 0x1fc));
    if ((DAT_0202ec38 & 0x40) != 0) {
      DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x100;
      sub_080E0E64(param_1,0x700);
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  iVar1 = param_1 + 0x9a8;
  sub_08004AF4(iVar1);
  sub_08006C90();
  DAT_0202e148 = 0;
  local_18[0] = 0;
  sub_080EEF68(local_18,&DAT_0202e160,0x1000008);
  sub_080149F4(1);
  sub_08012274(DAT_0202f088,iVar1);
  sub_08012274(DAT_0202f074,iVar1);
  sub_08012274(DAT_0202f078,iVar1);
  sub_08012274(DAT_0202f06c,iVar1);
  sub_0801218C(DAT_0202f090,iVar1);
  sub_08039020(iVar1);
  sub_0801218C(DAT_0202f07c,iVar1);
  sub_0801218C(DAT_0202f084,iVar1);
  sub_08012274(DAT_0202f08c,iVar1);
  sub_08014AD8(1);
  sub_080E5BE4(param_1);
  sub_080DEF00();
  iVar1 = *(ushort *)(param_1 + 4) + 2;
  *(short *)(param_1 + 4) = (short)iVar1;
  DAT_03002ec0 = (undefined)iVar1;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (iVar1 * 0x10000 >> 0x10 == 0x20) {
    *(undefined2 *)(param_1 + 0x1ee4) = 0;
    if ((DAT_0202ebbb & 4) == 0) {
      sub_0800322C();
    }
    sub_080E0E64(param_1,0x400);
  }
  return in_lr;
}

