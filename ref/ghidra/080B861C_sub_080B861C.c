// sub_080B861C at 0x080B861C (thumb)

undefined4 sub_080B861C(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(char *)(param_1 + 0xd1) + -1;
  *(char *)(param_1 + 0xd1) = (char)iVar2;
  if (iVar2 < 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08001EAC(0xe8);
    sub_080B8698(param_1);
  }
  else {
    if (iVar2 == 0) {
      sVar1 = 0x200;
      sub_0809C120(param_1);
      *(char *)(param_1 + 0xd2) = (char)iVar2;
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    else {
      sVar1 = (short)(((short)(&DAT_080c8ea4)[iVar2 * 4] + 0x100) / 2) + 0x100;
    }
    *(short *)(param_1 + 0x48) = sVar1;
    *(short *)(param_1 + 0x4a) = sVar1;
  }
  return in_lr;
}

