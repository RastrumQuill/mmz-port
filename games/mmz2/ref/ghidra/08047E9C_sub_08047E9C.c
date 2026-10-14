// sub_08047E9C at 0x08047E9C (thumb)

undefined4 sub_08047E9C(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xa4) - (uint)*(byte *)(*(int *)(param_1 + 200) + 0xd2);
  uVar3 = uVar1 & 0xffff;
  if ((int)(uVar1 * 0x10000) < 0) {
    uVar3 = 0;
  }
  *(ushort *)(param_1 + 0xa4) = (ushort)uVar3;
  if (uVar3 == 0) {
    *(undefined *)(param_1 + 0x11) = 1;
  }
  iVar4 = *(int *)(param_1 + 0xb4);
  if ((iVar4 != 0) && (((*(uint *)(iVar4 + 0x8c) & 0x200) != 0 || (*(short *)(iVar4 + 0xa4) == 0))))
  {
    *(int *)(param_1 + 0xb4) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08047f0e:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08047f20;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = sub_0801E11C(0xf,param_1,&DAT_0833aeec);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_08047f0e;
  }
  iVar4 = sub_0801E4D8();
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08047f20:
  *(undefined *)(param_1 + 0xbf) = 0;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ac68 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

