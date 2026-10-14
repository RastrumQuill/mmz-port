// sub_0804246C at 0x0804246C (thumb)

uint sub_0804246C(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(short *)(param_1 + 0x8c) + -1;
  if (iVar2 < 0) {
    iVar2 = *(short *)(param_1 + 0x8c) + 0xe;
  }
  uVar1 = 3U - (iVar2 >> 4) & 0xff;
  if (1 < uVar1) {
    uVar1 = 2;
  }
  return uVar1;
}

