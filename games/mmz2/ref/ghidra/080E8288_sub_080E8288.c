// sub_080E8288 at 0x080E8288 (thumb)

undefined4 sub_080E8288(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = *(short *)(param_1 + 6) + -1;
  *(short *)(param_1 + 6) = (short)iVar2;
  DAT_03002ec0 = (char)iVar2 * '\x02';
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (iVar2 == 0) {
    sub_080E0E64(param_1,0x600);
    uVar3 = *(undefined4 *)(param_1 + 0x75b8);
    sub_08038588(uVar3,*(undefined *)(param_1 + 0xdf0),*(undefined *)(param_1 + 0xdf1),
                 *(undefined *)(param_1 + 0xdf2),*(undefined *)(param_1 + 0xdf3));
    sub_080E92F8(param_1 + 0xe6c);
    bVar1 = sub_08037C20(uVar3);
    if (1 < bVar1) {
      sub_08037CF4(uVar3);
    }
    iVar2 = (uint)*(byte *)(param_1 + 0xde4) * 4;
    sub_080EF11C(*(undefined4 *)(param_1 + 0xdd4 + iVar2),0xffffffff,
                 *(undefined4 *)(&DAT_0835e4fc + iVar2));
    if ((DAT_0202ebb4 & 2) == 0) {
      sub_08002EF0(0x1d);
      sub_08002EF0(0x1e);
    }
  }
  else {
    param_1 = param_1 + 0xbb4;
    sub_08004AF4(param_1);
    sub_0801218C(DAT_0202f094,param_1);
    sub_08004AA4(param_1);
  }
  return in_lr;
}

