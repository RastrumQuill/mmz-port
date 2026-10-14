// sub_08077C7C at 0x08077C7C (thumb)

undefined4 sub_08077C7C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb6) = 0;
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
    sub_08078ED4(param_1,0);
    uVar3 = *(byte *)(param_1 + 0xc5) + 1 & 1;
    uVar5 = uVar3 + 1 & 1;
    iVar4 = uVar5 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar4 * 0x200;
    iVar2 = sub_08078F40(param_1,uVar3);
    *(int *)(param_1 + 0x68) = iVar2;
    *(int *)(param_1 + 0x54) = iVar2 + iVar4 * -0x2800;
    *(byte *)(param_1 + 0xc5) = (byte)uVar3;
    *(char *)(param_1 + 0x13) = (char)uVar5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E5C(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (-1 < (int)((iVar2 - *(int *)(param_1 + 0x68)) * ((uint)bVar1 * 2 + -1))) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x68);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

